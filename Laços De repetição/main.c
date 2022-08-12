#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
    int i = 0;

    //enquanto i for menor que 10
    //imprime o valor 0 do i
    while(i<10){
        printf("%i\n", i);
        i = (i + 1);
        //Se o valor do i é zero, ele vai jogar mais um no laço de repetição
        //Depois que o 0 passou a ser 1, ele vai voltar de novo pro loop e vai acrescentar + 1
        //De 1 vai passar a ser 2, porque i recebe i + 1 que é igual a 2
        //Depois ele volta de novo pro loop e passa a ser 3, com + 1 ele vira 4 e assim vai

    }


    return 0;
}
