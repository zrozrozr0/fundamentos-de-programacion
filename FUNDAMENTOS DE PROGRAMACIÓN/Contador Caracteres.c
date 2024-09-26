#include<stdio.h>

int EsVocal (char c) (return ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'));

int Cuenta Vocales(char a[]){
    int i=0, nv=0;

	while(a[i]!='\0')
         i++;

    return i;
} ;

int EstaEn(char a[],char x){
   int i=0;
   while(a[i])
     if(a[i]==x)
        return i;
     else
        i++;

   return -1;
}

int main ( ) {

	char a[1000] ;
	char n ;

	printf ( "Ingrese cualquier palabra: " ) ;
	scanf ( "%s" , a ) ;

	printf("La cadena %s tiene %d caracteres.\n",a,LongCadena(a)) ;

	fflush(stdin);

	printf("Cual caracter buscas?");
	scanf("%c",&n);
	printf("El caracter %c esta en %s? %d.\n",n,a,EstaEn(a,n));

	return 0 ;

} ;
