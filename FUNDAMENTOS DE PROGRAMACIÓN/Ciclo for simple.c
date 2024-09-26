#include <stdio.h>

int main()
{
    int i,n;

    printf( "\n Ingrese un valor n : \n\t" );
    scanf("%d",&n);

    for (i=2;i<=n;i+=2)
    {
        printf("%d ",i);
    }

    getch(); /* Pausa */

    return 0;
}
