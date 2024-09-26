#include <stdio.h>

void main(void)
{
    char n;
    int Caracter;
    printf("Porfavor ingrese un caracter: "); n=getchar();
    Caracter=n;
    if(Caracter>=48 && Caracter<=57)//DIGITO
    {
        for(int i=48;i<=57;i++)
            printf("%i es el caracter %c\n",i,i);
    }
    else if(Caracter>=65 && Caracter<=90)//MAYUSCULA
    {
        for(int i=65;i<=90;i++)
            printf("%i es el caracter %c\n",i,i);
    }
    else if(Caracter>=97 && Caracter<=122)//MINUSCULA
    {
        for(int i=97;i<=122;i++)
            printf("%i es el caracter %c\n",i,i);
    }
    else
        puts("El caracter no es ninguna letra y tampoco numero");
}
