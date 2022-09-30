#include<stdio.h>
#include<stdlib.h>
//    a<b+c
//    b<a+c
//    c<b+a
int triangulo_check(int a, int b, int c){

    if(a<(b+c) && b<(a+c) && c<(b+a)){
        if(a==b && a==c){
            return 1;
        }
        else if(a==b || a==c || b==c){
            return 2;
        }
        else if(a!=b && a!=c && b!=c){
            return 3;
        }
    }
    else{
        return 5;
    }

}


int main(){
    int l1,l2,l3,tipo;

    printf("Informe 3 numeros: ");
	scanf("%i %i %i", &l1, &l2, &l3 );

    tipo = triangulo_check(l1,l2,l3);

    if(tipo==5){
        printf("Nao se pode fazer triangulo com os numeros");
    }
    else if(tipo==1){
        printf("Triangulo Equilatero");
    }
    else{
        printf((tipo==2)?"Triangulo Isosceles":"Triangulo Escaleno");
    }


    return 0;

}
