#include "stdio.h" 
#include "stdlib.h"
#include "io.h" 
#include "time.h"
#include "stdbool.h"
#include "math.h"

int main ()
{
    int x;

    int  method06();
    void method07();
    void method08();

    while (x != 0)
    {     
    printf("\n");
    printf("6  - Questao 6 \n");
    printf("7  - Questao 7 \n");
    printf("8  - Questao 8 \n");

    printf("\n0  - Sair \n");

    printf("Escolha um dos metodos acima \n");
    scanf("%d", &x);

    switch (x)
    {
        case 6:
        method06();
        break;

        case 7:
        method07();
        break;

        case 8:
        method08();
        break;

    }
    }    



    system ("pause");
    return 0;
}

int method06 ()
{
    void lerDados (char s[], int n, int resultado);

    int vetor[100];
    int n;
    int i = 0;
    int a = -2;
    int b = 2;
    bool resultado;

    srand(time(NULL));

    printf("Insira a quantidade de valores \n");
    scanf("%d", &n);

    if (n <= 20)
    {
    for (i = 0; i < n; i++)
    {
        vetor[i] = a + rand() % (b - a + 1);
    }
    }

    FILE *file;
    file = fopen("DADOS.TXT", "w");

    for (i = 0; i < n; i++)
    {
        fprintf(file,"%d \n",vetor[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (vetor [i] + vetor [i+1] + vetor[i+2] == 0)
        {
            resultado = false;
            break;
        }
        else
        {
            resultado = true;
        }
    }

    fclose(file);

    lerDados ("DADOS.TXT", n, resultado);

    return resultado;

}

void lerDados (char s[], int n, int resultado)
{
    int i = 0;
    int vetor[100];

    FILE *file;
    file = fopen(s,"r");

    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &vetor[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d \n", vetor[i]);
    }

    printf("Resultado = %d \n", resultado);

    fclose(file);

}

void method07()
{
    int i = 0;
    int j = 0;
    int n;
    int vetor[100];
    int a = 0;
    int b = 9;
    int copia;
    int contador = 0;

    srand(time(NULL));

    FILE *file;
    file = fopen("SAIDA.TXT", "w");

    printf("Insira a quantidade de valores \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        vetor[i] = a + rand() % (b - a + 1);
    }  

    fprintf(file,"N = %d \n\n", n);

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%d \n", vetor[i]);
    }  

    for (j = 0; j < n; j++)
    {
    for (i = 0; i < n - 1; i++)
    {
        if (vetor[i] == 0)
        {
            copia      = vetor[i];
            vetor[i]   = vetor[i+1];
            vetor[i+1] = copia;
        }
    }
    }

    for (i = 0; i < n; i++)
    {
        if(vetor[i] != 0)
        {
            contador++;
        }
    }

    fprintf(file, "Resultado = %d \n\n", contador);

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%d \n", vetor[i]);
    }

    fclose(file);
}

void method08() 
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int i = 0;
  int contsec = 0;
  int contmin = 0;

  struct time {
    int hour;
    int minutes;
    int seconds;
  };

  printf("Insira 6 valores para as estruturas \n");

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  scanf("%d", &f);

  struct time t1;

  t1.hour = a;
  t1.minutes = b;
  t1.seconds = c;

  struct time t2;

  t2.hour = d;
  t2.minutes = e;
  t2.seconds = f;

  struct time t3;

  t3.hour = t1.hour + t2.hour;
  t3.minutes = t1.minutes + t2.minutes;
  t3.seconds = t1.seconds + t2.seconds;

  printf("Antes \n\n");

  printf("%d \n", t3.hour);
  printf("%d \n", t3.minutes);
  printf("%d \n", t3.seconds);

  for (i = 0; i < 100; i++) {
    if (t3.hour > 24) {
      t3.hour = t3.hour % 24;
    }

    while (t3.minutes > 60) {
      t3.minutes = t3.minutes % 60;
      contmin++;
    }

    while (t3.seconds > 60) {
      t3.seconds = t3.seconds % 60;
      contsec++;
    }
  }

  t3.minutes = t3.minutes + contsec;
  t3.hour = t3.hour + contmin;

  printf("Depois \n");

  printf("%d \n", t3.hour);
  printf("%d \n", t3.minutes);
  printf("%d \n", t3.seconds);
}