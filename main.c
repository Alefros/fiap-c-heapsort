#include <stdio.h>

    void heapsort(int a[], int n);

    int main (int argc, char **argv)
    {
        int meusNumeros[]={1010,1,7,21};
        int i=0;
        printf (" ##### Order Inicial ######\n");
            for (i=0;i<4;i++){
                printf ("meusNumeros[%d] = %d \n", i, meusNumeros[i]);
                }
                heapsort (meusNumeros, 4);
                printf ("\n ##### Order Inicial ######\n");
                for (i=0; i<4; i++)
                {
                 printf ("meusNumeros[%d] = %d \n", i, meusNumeros[i]);
                }
            return 0;
    }




    void heapsort(int a[], int n)
    {
        int i = n/2, pai, filho, t;
        for (;;)
        {
            if (i > 0)
            {
                i--;
                t = a[i];
            }
            else
            {
                n--;
                if (n == 0)
                return;
                t = a[n];
                a[n] = a[0];
            }
        pai = i;    //Primeiro será feita a comparação com o filho da esquerda.
        filho = i*2;
        while (filho < n)
        {
                        //Se o filho da esquerda for menor do que o filho da direita, então será feita a
                        //troca do filho que será comparado.
            if ((filho + 1 < n) && (a[filho + 1] > a[filho]))
            {
              filho++;
            }

            if (a[filho] > t)
            {
                a[pai] = a[filho];
                pai = filho;
                filho = pai*2 + 1;
            }
            else
            {
               break;
            }

        }
        a[pai] = t;
        }
    }
