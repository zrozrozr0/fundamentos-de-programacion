#include <stdio.h>
#include <string.h>
#define LONGITUD_ 10000

char *voltear(char a[]);

int main(void) {
  char a[LONGITUD_];
  printf("Escribe una palabra: ",
         LONGITUD_ - 1);

  fgets(a, LONGITUD_, stdin);

  a[strcspn(a, "\r\n")] = 0;

  printf("La cadena invertida es: %s", voltear(a));
  return 0;
}

char *voltear(char a[]) {
  int longitud = strlen(a);
  char temporal;
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
       izquierda++, derecha--) {
    temporal = a[izquierda];
    a[izquierda] = a[derecha];
    a[derecha] = temporal;
  }
  return a;
}
