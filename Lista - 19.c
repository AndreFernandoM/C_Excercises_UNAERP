#include<stdio.h>
#include<stdlib.h>

int divisions(int n){
    int i=1, acc=0;
    
    for(i;i<=n;i++){
        if(n % i == 0){
            acc++;
        }
    }
    return acc;
}

int main(){
    int res,num;

    printf("Numero: ");
    scanf("%i", &num);

    res=divisions(num);
    printf("%i", res);

    return 0;
}
