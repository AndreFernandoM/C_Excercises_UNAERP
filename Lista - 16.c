#include<stdio.h>
#include<stdlib.h> 

int  fact_find(int num){
    int i=1, fatorado=1;    
    fatorado = num;
    for(i; i<num; i++){
        fatorado *= num-i;   
    }
    return fatorado;
}

int main(){
    int num_Fat;

    printf("Informe numero p/ fatorar: ");
    scanf("%i", &num_Fat);

    printf("Numero %i fatorado: %i", num_Fat, fact_find(num_Fat));

}
