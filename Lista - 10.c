#include <stdio.h>
#include <stdlib.h>
//M = 72.2 * alt - 58
//F = 61.1 * h - 44.7


float imc_calc(char sex, float h){
    int rest = 0;
    if(sex == "m" || sex == "M"){
        rest = (72.2 * h) - 58;
    }
    else rest = (61.1 * h) - 44.7;

    return rest;

}


int main(){
	char sexo;
    float alt, peso_ideal;
	
    printf("Informe seu SEXO(M/F) e altura: ");
	scanf(" %c %f", &sexo, &alt );
    
    peso_ideal = imc_calc(sexo,alt);

    printf("%.2f", peso_ideal);

	return 0;
}
