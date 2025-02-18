#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int n1;
    int sucessor;

    printf("digite seu numero:\n ");
    scanf("%i", &n1);

    sucessor = n1+1;

    printf("seu numero e:%i\n",sucessor);


    return 0; */

    /*float nota1, nota2, nota3, media;


    printf("digite sua primeira nota");
    scanf("%f", &nota1);

    printf("digite sua segunda nota");
    scanf("%f", &nota2);

    printf("digite sua terceira nota");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("sua media foi: %.1f\n" ,media);*/

    int n1, n2, soma, sub, div, mult;

    printf("digite o primeiro numero:  ");
    scanf("%i", &n1);

    printf("digite o segundo numero:  ");
    scanf("%i", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 *n2;
    div = n1/n2;

    printf("soma: %i\n", soma);
    printf("subtracao: %i\n", sub);
    printf("multiplicacao: %i\n", mult);
    printf("divisao: %i\n", div);


}
