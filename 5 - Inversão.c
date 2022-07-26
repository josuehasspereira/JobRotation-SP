//Desenvolvido por Josué Hass Pereira, 2022
//jozzuhass@gmail.com

#include <stdio.h>
#include <locale.h>

int main() {
    
    //Definindo acentuação
    setlocale(LC_ALL, "Portuguese");
    
    //Definido variaveis
    char string[300], aux[300];
    int i, posVet, tamStr;

    //Entrada de dados
    printf("---Inversão de caracteres---\n\n");
    printf("Digite uma palavra ou frase (máximo 300 caracteres ): ");
    scanf("%s", &string);
    
    //Definindo tamanho da string
    tamStr = strlen(string);
    
    //Defininindo posição do vetor
    posVet = tamStr - 1;
    
    //Estrutura de repetição para percorrer o vetor e armazena-lo na aux
    for(i=0; i<tamStr; i++) {
        aux[i] = string[posVet];
        posVet = posVet - 1;
    }
   
    printf("Invertido: %s\n", aux);
   
    return(0);
}