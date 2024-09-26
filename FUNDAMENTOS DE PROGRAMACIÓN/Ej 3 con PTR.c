#include <stdio.h>
#define TAM 5

int main(){

int arreglo[TAM];   //declaracion de un arreglo de enteros de 5 celdas
int *ptr;           //declaramos una variable apuntador a entero
                    //ingresamos desde el teclado enteros al arreglo
printf("\t Rodriguez Olmos Noe 2SCM1");
for(ptr = arreglo;ptr < &arreglo[TAM]; ptr = ptr+1){
printf("\nIngrese un dato entero: ");
scanf("%d",ptr);
}
                    //imprimimos en pantalla la celda, el contenido y la direccion de cada elemento del arreglo
for(ptr = arreglo;ptr < &arreglo[TAM]; ptr= ptr+1)
printf("\n En la celda %d esta el valor %d y esta con direccion %lu", (int)(ptr-arreglo), *ptr, ptr);
return 0;

}
