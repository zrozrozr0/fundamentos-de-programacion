#include <stdio.h>

int main(){

int var1; //declaramos una variable entera
int *ptr;      //declaramos una variable apuntador a entero

ptr=&var1;     //inicializamos el apuntador con la direccion var1
var1 = 50;     //asignamos a var1 el valor  de 50

printf("\t Rodriguez Olmos Noe 2SCM1");
printf("\n El valor almacenado de variable var1 es %d y su direccion es %lu", var1,&var1);
printf("\n El valor almacenado del apuntador ptr es %lu y su direccion es %lu", ptr,&ptr);
printf("\n El contenido de lo que apunta el apuntador ptr es %d y esta en la direccion %lu", *ptr,ptr);

return 0;


}
