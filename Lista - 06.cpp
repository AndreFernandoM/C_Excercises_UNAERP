#include <stdio.h>
#include <stdlib.h>




int func(int ano,int mes,int dia){
    int res=0;

    ano = ano*365;
    mes = mes*30;
    res = ano + mes + dia;

	return res;
}

int main(){

    int anos, meses, dias, convert_dias;

	printf("Informe a sua idade anos/meses/dias: ");
	scanf("%d %d %d", &anos, &meses, &dias);

	convert_dias = func(anos, meses, dias);
	
	printf("%i", convert_dias);
	return 0;
}