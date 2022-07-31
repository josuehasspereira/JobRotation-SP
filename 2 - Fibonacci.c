//Desenvolvido por Josué Hass Pereira, 2022
//josue.hass@hotmail.com

#include <stdio.h>
#include <locale.h>

int main() {
    
    //Definindo acentuação
    setlocale(LC_ALL, "Portuguese");
    
    //Determinando variáveis
    int x, y, z, i, num, numPer;

    x = 0;
    y = 1;
    
    //Entrada dos dados
    printf("\n---Sequência de Fibonacci---\n\n");
    printf("Digite um número (inteiro) de termos: ");
    scanf("%d", &num);
    
    //Primeiro termo
    printf("%d\n", y);

    //Criação de uma estrutura de repetição para percorrer a string
    for(i = 1; i < num; i++){
        
        //Soma dos termos para criação sequência 
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
