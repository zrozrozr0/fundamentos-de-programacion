#include <stdio.h>

int division(int, int);
int residuo(int, int);

int main()
{
    int aux,n1,n2,n1_1,n2_2;
    int validar;
    //printf("%i",825%315);
    puts("Programa que encuentra el MCD con Euclides");
    puts("Su estructrura es numero = numero 2 + numero x");
    printf("Ingrese el numero 1: ");
    scanf("%i",&n1);
    n1_1=n1;
    printf("Ingrese el numero 2: ");
    scanf("%i",&n2);
    n2_2=n2;
    do
    {
        if(n1<n2)
        {
            aux=n1;
            n1=n2;
            n2=aux;
        }
        printf("%i = %i(%i) + %i\n",n1,n2,division(n1,n2),residuo(n1,n2));
        n1=residuo(n1,n2);
        validar = (n1==0)? 1 : 0 ;
    }
    while(!validar);
    printf("\nEl MCD(%i, %i) = %i",n1_1,n2_2,n2);
    return 0;
}

int division(int n1, int n2)
{
    return n1/n2;
}

int residuo(int n1,int n2)
{
    return n1%n2;
}
