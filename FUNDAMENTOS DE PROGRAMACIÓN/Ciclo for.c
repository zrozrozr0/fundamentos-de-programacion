#include <stdio.h>

int main(){
    //definicion de variables
    int valorx = 0;
    int n = 0;
    printf("\nIngrese un numero entero : \n");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            for(int j = (i / 2); j >= 1 ; j--){
                if( i % j == 0){
                    valorx = valorx + j;
                }
            }
            if(valorx == i)
                printf("%d, ",i);

        }
    valorx=0;
    }
    return 0;
}
