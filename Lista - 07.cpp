#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool func(int valor){
    int c=2;
    int acc=0;

    for(int i=2; i<((int)floor(sqrt(valor)))+1; i++){
        if(valor % i == 0){
            acc += i ;

        }
    }

    if(acc)
        return true;
	else return false;
}

int main(){

    int num;
    bool res;

	printf("Informe um numero: ");
	scanf("%d", &num);

	res= func(num);
	
	printf(res? "true":"false");
	return 0;
}