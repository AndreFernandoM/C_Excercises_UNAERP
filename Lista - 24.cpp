#include <stdio.h>
#include <math.h>

// a b
// 2^4
//a*a*a*a
int potencia(int a, int b){
    int total=1,j=0;
    
    for(int i=1;i<=b;i++){
        for(j;j<i;j++){
            total *= a;
        }
    }

    return total; 
}


int main(){
    
    int x,z;
    int pot;

    printf("Informe X e Z: ");
	scanf("%i %i", &x, &z);

    pot=potencia(x,z);

    printf("a^b: %i ",pot);        
    
    return 0;
}