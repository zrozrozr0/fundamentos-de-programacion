#include <stdio.h>
#include <ctype.h>

int main()
{

	char pal[80];
	printf("\t Ingresa una cadena de caracteres en MAYUSCULAS\n");
	scanf("%s",pal);

	for (int indice = 0; pal[indice] != '\0'; ++indice){
		pal[indice] = tolower(pal[indice]);
	}
	printf("Cadena convertida a minusculas: %s\n", pal);
	return 0;
}
