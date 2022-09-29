#include<stdio.h>
#include<stdlib.h> 

typedef struct {
    int maior_fim;
    int menor_fim;

}valores;


valores maior_menor(){
    valores med;
    int acc=0;
    med.maior_fim=-1;
    med.menor_fim;
    
    for(int i=0; i<50;i++){
        printf("Informe valores: ");
        scanf("%i", &acc);
        if(med.maior_fim<acc){
            med.maior_fim=acc;
        }
        if(acc<med.menor_fim){
            med.menor_fim=acc;
        }
    }

    return med;
}

int main(){
    valores res;
    res=maior_menor();
    printf("Menor valor %i\nMaior valor %i", res.menor_fim, res.maior_fim);
    return 0;
}