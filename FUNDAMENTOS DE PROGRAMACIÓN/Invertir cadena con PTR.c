//Programa que invierte una cadena
#include <stdio.h>

int main(){
char cad[30],*ptrIni, *ptrFin, carAux;
printf("\t Rodriguez Olmos Noe ");
printf("\n Ingrese a cadena:");
gets(cad);

for(ptrFin=cad;*ptrFin!='\0';ptrFin=ptrFin+1);
for(ptrIni=cad, ptrFin=ptrFin-1;ptrIni<ptrFin;ptrIni=ptrIni+1,ptrFin=ptrFin-1){
carAux = *ptrIni;
*ptrIni = *ptrFin;
*ptrFin = carAux;
}

printf("\n La cadena invertida es %s", cad);
return 0;
}
