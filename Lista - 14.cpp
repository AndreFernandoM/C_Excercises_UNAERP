#include<stdio.h>
#include<stdlib.h> 

typedef struct {
   float media_salario;
   float maior_salario;
   float media_filhos;
   float percent_salario;
}pessoas;


pessoas func14(){
    pessoas ac;

    float total_sal=0,maior_sal=0;
    float accP=0,sal_atual=0,acc=0;
    int total_filho=0;
    int quant_filho=0;
    char op='n';

    while(op!='s'){

        printf("Informe o %i salario: ",acc+1);
        scanf(" %f", &sal_atual);
        acc++;

        if(sal_atual<=350){
            accP++;
        }

        if(sal_atual>maior_sal){
            maior_sal=sal_atual;
        }
        

        total_sal += sal_atual;

        printf("Informe a quant de filhos: ");
        scanf(" %i", &quant_filho); 

        total_filho += quant_filho;


        printf("\nDeseja finalizar?[s/n]\n");
        scanf(" %c", &op);

    }

    ac.media_salario = total_sal/acc;
    ac.percent_salario = (accP/acc)*100;
    ac.maior_salario = maior_sal;
    ac.media_filhos = total_filho/acc;

    return ac;
}



int main(){
    pessoas res;
    
    res=func14();

    printf("Media Salario: R$%.2f\n", res.media_salario);
    printf("Maior Salario: R$%.2f\n", res.maior_salario);
    printf("Percentual Salario ate 350: %.2f\n", res.percent_salario);
    printf("Media filho: %.2f\n", res.media_filhos);

    return 0;
}