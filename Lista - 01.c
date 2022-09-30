#include <stdio.h>
#include <stdlib.h>

// v = 3/4 pi r³


float calc_volum(float r){
	
	return ((4*3.1415*r*r*r)/3);
}


int main(){
	float raio, volume;
	
	printf("Informe o raio: ");
	scanf("%f", &raio);
	
	volume = calc_volum(raio);
	
	printf("Volume: %f", volume);
	
	return 0;
}
