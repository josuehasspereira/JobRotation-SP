//Desenvolvido por Josué Hass Pereira, 2022
//jozzuhass@gmail.com

#include <stdio.h>
#include <locale.h>

int main() {
	
	//Definindo acentuação
    setlocale(LC_ALL, "Portuguese");

    float maior, menor, soma, media, vetor[30] = {22174.1664, 24537.6698, 
    26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 
    0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 
    35240.182, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 
    1718.1221, 13220.495, 8414.61};
    int n, i, cont = 0, cont2 = 0, maiDia, menDia;
    
    //Definindo valor nulo
    maior = vetor[0];
    menor = vetor[0];
    soma = 0;
    
    printf("---Dados de Faturamento diário da Distribuidora X---\n\n");
    
    //Definindo a estrutura de repetição para percorrer o vetor
    for (i = 0; i < 30; i++){
        
        //Filtrando com 0 de fatutamento
        if(vetor[i] > 0){
            
            //Definição do maior/menor
            if(vetor[i] < menor){
                menor = vetor[i];
                menDia = i + 1;
            } else if (vetor[i] > maior){
                maior = vetor[i];
                maiDia = i + 1;
            }
            
            //Somatória dos dias
            soma += vetor[i];
            cont += 1;
        }
        //Definição dos dias a mais que a média
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