#include <stdio.h>
int main ()
{
    int quant;
    float preco,total;
    printf ("Qual o preco da laranja?");
    scanf ("%f",&preco);
    if (preco<0)
    {
        printf ("Valor invalido. Digite novamente");
        scanf ("%f",&preco);
    }
    if (preco>0)
    {
        printf ("Quantas laranjas foram compradas?");
        scanf ("%d",&quant);
    }
    total=preco*quant;
    printf ("O valor a pagar e %.2f",total);


    getchar ();
    return 0;
}
