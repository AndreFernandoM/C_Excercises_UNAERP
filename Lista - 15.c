#include<stdio.h>
#include<stdlib.h> 

typedef struct {
   float resultados;
   
}medias;


medias func15(){
    medias med;
    char op='n';
    int valor;
    int acc=0,accV=0;

    while(op!='s'){

        printf("Informe o %i numero: ",acc+1);
        scanf("%i", &valor);
        acc++;

        accV += valor;

        printf("\nDeseja finalizar?[s/n]\n");
        scanf(" %c", &op);

    }

    med.resultados = accV/acc; 


    return med;
}



int main(){
    medias res;

    res=func15();

    printf("Media: %.2f", res.resultados);

    return 0;
}
