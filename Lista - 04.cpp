#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskara(float a,float b,float  c, float raizes[]){
	float d=0;
	
	d= (b*b) -4*a*c;
	d = sqrt(d);
	if(d<0){
		printf("DELTA NEGATIVO");
		exit;
	}
	
	b = b-b-b;
	
//	printf("%i", b);
    raizes[0]= (b+d)/(2*a);
	raizes[1]= (b-d)/(2*a);
//	printf("%f", raizes[1]);	
	
}

int main(){
	int num_1,num_2,num_3;
	float raizes[2];
	
	printf("Informeos 3 valores (a b c): ");
	scanf("%i %i %i", &num_1,&num_2,&num_3);
	bhaskara(num_1,num_2,num_3,raizes);
	
	printf("\n Raiz 1: %.2f \n Raiz 2: %.2f", raizes[0], raizes[1]);
	
	
	
	return 0;
}