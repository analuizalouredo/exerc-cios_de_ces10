#include <stdio.h>
int main ()
{
    int i;
    int fatorial;
    int n;
    printf ("Digite um número inteiro:");
    scanf ("%d",&n);
    i=1;
    fatorial=1;
    while (i<=n)
    {
        fatorial=fatorial*i;
        i=i+1;
    }
    printf ("O fatorial de %d e %d",n,fatorial);
    system ("pause");g



    return 0;

}
