#include <stdio.h>
#include <stdlib.h>

bool primo_check(unsigned int x){
	
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
	int inteiro;
	bool final;
	
	printf("Informe o numero: ");
	scanf("%i", &inteiro);
	
	final = primo_check(inteiro);
	
	printf(final ? "true" : "false");
	
	return 0;
}
