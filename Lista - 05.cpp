#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct convert{
	int horas,minutos,segundos;
};

typedef struct convert Struct;

Struct seg_format(int tempo){
	Struct f;

	f.horas = floor(tempo/3600);
	f.minutos = floor((tempo-(f.horas*3600))/60);
	f.segundos = floor(tempo % 60);
		
	return f;
}

int main(){
	int tempo;
	Struct res;
	
	printf("Informeo tempo em segundos: ");
	scanf("%i", &tempo);

	res = seg_format(tempo);
	
	printf("%d:%d:%d", res.horas,res.minutos,res.segundos);
	return 0;
}