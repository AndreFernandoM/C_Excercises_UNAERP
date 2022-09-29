#include <stdio.h>
#include <stdlib.h>

bool int_check(int x){
	
    if(x>0)
	    return true;
    else return false;
}


int main(){
	int num,res;
	
    printf("Informe um numero: ");
	scanf("%d", &num);

    res = int_check(num);
    if(res){
        printf("POSITIVO");
    }
    else printf("NEGATIVO");

	return 0;
}