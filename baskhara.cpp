#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    float a,b,c,x1,x2,x,delta;

    printf ("Digite os numeros a,b e c na equacao ax^2+bx+c=0 e calcule suas solucoes\n");
    printf ("a=");
    scanf ("%f",&a);
    printf ("b=");
    scanf ("%f",&b);
    printf ("c=");
    scanf ("%f",&c);
    delta= (b*b) -(4*a*c);

    if (delta>0)
        {
        x1= b/(2*a) - sqrt(delta)/(2*a);
        x2= b/(2*a) + sqrt (delta)/(2*a);
        printf ("As solucoes da equacao sao: %.2f e %.2f",x1,x2);
        }

    if (delta==0)
        {
        x=(-b)/(2*a);
        printf ("A unica solucao real e %.2f ",x);
        }

    if (delta<0)
        printf ("\nA equacao nao possui solucoes reais\n");

    printf ("\n\nFim do programa!\n\n");
    system ("pause");
    return 0;
}
