#include<stdio.h>
#include <ctype.h>
int contarconsonantes(char *palabra[80]);

int main(){

char palabra[80];

char consonantes=palabra[80];

printf("teclea una palabra:\n");
scanf("%s",&palabra[80]);

printf("La cadena '%s' \n tiene %d consonantes", palabra, consonantes);
scanf("%d",&consonantes);


 fflush(stdin);
getchar();

   return 0;
}
int contarconsonantes(char *palabra[80]){

int consonantes=0;
int i=0;
while (palabra[i]){

        if (isalpha(palabra[i]) && !esVocal(palabra[i])) {
            consonantes++;
        }
        i++;
    }
    return consonantes;

}


