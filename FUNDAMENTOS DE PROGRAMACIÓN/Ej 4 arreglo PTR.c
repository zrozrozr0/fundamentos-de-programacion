#include <stdio.h>
#define TAM 30

int main(){

char cadena[TAM];   //declaracion de una cadena de caracteres de 30 celdas
char *ptrC;         //declaracion de una variable apuntador a caracter

//Ingresamos desde el teclado la cadena de caracteres
printf("\t Rodriguez Olmos Noe ");
printf("\n Ingrese una cadena de caracteres:\n");
gets(cadena);
printf("\n La cadena ingresada es %s", cadena);

//Imprimimos en pantalla cada celda, el contenido la direccion de cada elemento del arreglo

for (ptrC = cadena; *ptrC != '\0'; ptrC=ptrC+1)
printf("\n En la cadena %d esta el valor %c con direccion %lu", (int)(ptrC-cadena),*ptrC,ptrC);
return 0;




}
