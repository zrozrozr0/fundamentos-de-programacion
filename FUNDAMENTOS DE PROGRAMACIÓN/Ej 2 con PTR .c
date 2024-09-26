#include <stdio.h>

int main(){

int var1,var2; //declaramos dos variables enteras
int *ptr;      //declaramos una variable apuntador a entero

ptr = &var1;   //inicializamos el apuntador con la direccion var1
var1 = 50;     //asignamos a var1 el valor  de 50
var2 = *ptr;   //asignamos el contenido de lo que apunta ptr a var2

printf("\t Rodriguez Olmos Noe 2SCM1");
printf("\n El valor almacenado de variable var1 es %d y su direccion es %lu", var1,&var1);
printf("\n El valor almacenado del apuntador ptr es %lu y su direccion es %lu", ptr,&ptr);
printf("\n El valor almacenado de variable var2 es %d y su direccion es %lu", var2,&var2);
printf("\n El contenido de lo que apunta el apuntador ptr es %d y esta en la direccion %lu", *ptr,ptr);


return 0;


}
