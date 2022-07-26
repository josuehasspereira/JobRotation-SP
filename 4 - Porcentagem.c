//Desenvolvido por Josué Hass Pereira, 2022
//jozzuhass@gmail.com

#include <stdio.h>
#include <locale.h>

int main(){
	
    //Definindo acentuação
    setlocale(LC_ALL, "Portuguese");
	
    //Declaração de variáveis
    float soma = 0, calc, fatMen[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    char uf[5][6] = {"SP", "RJ", "MG", "ES", "Outros" };
    int i;
    
    printf("---Percentual de Representação que cada estado teve---\n\n");
    
    //Percorrer o vetor e somar os valores do mesmo.
    for(i = 0; i < 5; i++){
        soma += fatMen[i];
    }
    
    //Percorrer novamente o vetor para fazer o calculo da porcentagem em casa posição (valor)
    for(i = 0; i < 5; i++){
        calc = (fatMen[i] * 100) / soma; 
        printf("%s: %.2f%\n", uf[i], calc);
    }
    return 0;
}