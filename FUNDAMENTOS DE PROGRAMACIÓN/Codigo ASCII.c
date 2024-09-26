#include <stdio.h>

char nombres[20];
int i;

void main()
{

for(i=0; i<5; i++){
printf("Introduce un los nombres de cada uno\n");
scanf("%s",nombres);
}

printf("***********************************\n");
printf("CARÁCTER \tCÓDIGO ASCII\n");

for(i=9;i>=0;i--){
printf("%s",nombres);
printf("\t\t");

printf("\n");
}
return 0;
}
