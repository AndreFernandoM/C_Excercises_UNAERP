#include <stdio.h>
#include <stdlib.h>

bool int_check(int x){
    int check = 1;
	int d = 2;
	if(x == 1){
		return true;
	}
	
    while (check == 1 && d <= x / 2) {
        if (x % d  == 0)
            check = 0;
        d = d+1;
    }
	
	if(check == 1){
		return true;
	}
	else{
		return false;
	}
}


int main(){
	int num,res;
	
    printf("Informe um numero: ");
	scanf("%d", &num);
    
    res = int_check(num);
    if(res){
        printf("PRIMO");
    }
    else printf("NAO PRIMO");

	return 0;
}
