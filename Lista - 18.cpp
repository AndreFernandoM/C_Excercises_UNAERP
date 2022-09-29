#include<stdio.h>
#include<stdlib.h> 

int tabuada(int n){

    for(int i=1; i<=n; i++){
        printf("%i * %i = %i\n", i, n, n*i);
    }

}

int main(){
    int num,tab;

    printf("Numero para a tabuada: ");
    scanf("%i", &num);

    tab=tabuada(num);

    return 0;
}