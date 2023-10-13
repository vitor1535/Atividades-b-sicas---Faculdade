#include <stdio.h> 
#include <stdlib.h>

int main ()
{
    void exemplo0511();

    int x;

    printf("(11) - Multiplos de 9 \n");
    printf("Escolha um dos exemplos de 11 a 20. \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        exemplo0511();
        break;

        
    }









    system ("pause");
    return 0;
}

void exemplo0511 ()
{
    int n;
    int valor = 9;
    int i = 0;
    int multiplos[20];

    printf("Digite a quantidade de multiplos de 9 que serao mostrados \n");
    scanf("%d", &n);

    while (i < n)
    {
        multiplos[i] = valor;
        valor = valor + 9;
        printf("%d \n" , multiplos[i]);
        i++;
    }
}