//Desenvolvido por Josue Hass Pereira, 2022
//josue.hass@hotmail.com

#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 1000


int main() {
	
    //Definindo acentuação
    setlocale(LC_ALL, "Portuguese");

    //Abrindo o arquivo dados.json e definindo uma string
    FILE* f = fopen("dados.json","r");
    
	//Definindo variaveis
	char linha[1001];
    char s[50];
    float vetor[MAX];
    int i, n = 0;
    float maior, menor, soma, media;
    int cont = 0, cont2 = 0, maiDia, menDia;
    
    //Definindo um Laço do arquivo f para percorrer cada linha
    while( fgets( linha, 1000, f ) != NULL ){
    	
		//Definindo string ('valor') e float 
		//Percorrendo a linha e definindo o vetor na posição n do laço
    	if( sscanf( linha, "%s %f", s, &vetor[n]) == 2 ){
    		
			//Incrementação do n para o laço
			if( strstr( s, "valor" ) != NULL ){
    			n++;
    		}
    	}
	}    
    fclose( f );
   
   	//Definindo valores zeros 
    maior = vetor[0];
    menor = vetor[0];
    soma = 0;
    
    printf("---Dados de Faturamento diario da Distribuidora X---\n\n");
    
    //Laço de repetição paara percorrer o vetor e verificar maior/menor
    for (i = 0; i < 30; i++){
        if(vetor[i] > 0){
			if(vetor[i] < menor){
                menor = vetor[i];
                menDia = i + 1;
            } else if (vetor[i] > maior){
                maior = vetor[i];
                maiDia = i + 1;
            }
            soma += vetor[i];
            cont += 1;
        }
        
        //Definindo dias acima da media
        media = soma / cont;
        if(vetor[i] > media){
            cont2 +=1;
        }
    }
    
    media = soma / cont;
    printf("Maior valor de faturamento ocorreu no dia %i: R$ %f\n", maiDia, maior);
    printf("Menor valor de faturamento ocorreu no dia %i: R$ %f\n", menDia, menor);
    printf("Quantidade de dias acima do faturamento mensal: %i\n", cont2);
	
    return 0;
}
