#include <stdio.h>
#include <stdlib.h>


float func21(float n){
    float s=0, fact_T,fac=1;
    float acc=0;

    for(int i=1; i<=n ;i++){     

        for(int j=i; j!=i-1;j--){

            fact_T=1/(fac=fac*j);
        }

        acc+=fact_T;
    }
    s=acc+1;

    return s;
}


int main(){
    float valor1;
    float res;

    printf("Valor : ");
    scanf("%f", &valor1);
    
    res=func21(valor1);

    printf("%.2f", res);

    return 0;
}