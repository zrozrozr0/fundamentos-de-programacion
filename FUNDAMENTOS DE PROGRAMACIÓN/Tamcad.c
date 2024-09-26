#include <stdio.h>

int main(){

char pal[80];
printf("Como te llamas?");
scanf ("%s",pal);

int tamcad(char pal[80])

{
     if(pal[0]='\0')
          return 0;
     else
          return 1+tamcad(pal+1);
          printf("%s",pal);
}
return 0;
}
