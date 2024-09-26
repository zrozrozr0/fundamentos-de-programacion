#include <stdio.h>
#include <ctype.h>

int NumeroVocales(char palabra[]);

int main()
{
    char *palabra[80];
    printf("Ingrese una palabra: ");
    scanf("%s",palabra);
    printf("El numero de vocales son %i",NumeroVocales(palabra));
    return 0;
}

int NumeroVocales(char palabra[])
{
    int i=0,Vocales=0;
    while(palabra[i]!='\0')
        i++;
    for(int j=0;j<i;j++)
        if(toupper(palabra[j])=='A' || toupper(palabra[j])=='E' || toupper(palabra[j])=='I' || toupper(palabra[j])=='O' || toupper(palabra[j])=='U')
            Vocales++;
    return Vocales;
}
