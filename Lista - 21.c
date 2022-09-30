#include <stdio.h>
#include <stdlib.h>

//    1+(1/n)+(1/n+1)

float func21(int n){
    float s=0;

    for(float i=1; i<=n ;i++){
        s += 1/i;
    }

    return s;
}


int main(){
    int valor1;
    float res;

    printf("Valor : ");
    scanf("%i", &valor1);

    printf("%.2f", func21(valor1));

    return 0;
}
