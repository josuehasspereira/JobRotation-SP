//Desenvolvido por Josué Hass Pereira, 2022
//jozzuhass@gmail.com

#include <stdio.h>

int main() {
    
    //Determinando variáveis
    int x, y, z, i, num, numPer;

    x = 0;
    y = 1;
    
    //Entrada dos dados
    printf("\n---Série de Fibonacci---\n\n");
    printf("Digite um número (inteiro) de termos: ");
    scanf("%d", &num);
    printf("%d\n", y);

    //Criação de uma estrutura de repetição
    for(i = 1; i < num; i++){
        
        //Soma dos termos em sequência 
        z = x + y;
        x = y;
        y = z;
        
        //Determinando se o numero pertence ou não
        if (z == num){
            numPer = z;
        }
        printf("%d\n", z);
    }
    
    //Printando o numero pertencente
    if(numPer == num){
        printf("O numero inserido pertence a sequencia!", numPer);
    } else {
        printf("O numero inserido nao pertence a sequencia!", numPer);
    }
    return 0;
}