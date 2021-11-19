#include<stdio.h>

int result ;

int add(int a , int b);

int main(){

    int nomberA , nomberB ;

    printf("Creez une nomber A : ");
    scanf("%d", &nomberA);

    printf("Creez une nomber B : ");
    scanf("%d", &nomberB);

    result = add(nomberA , nomberB);

    printf(" l'addition des deux nombres a et b : %d", result);
}

int add(int a , int b){

    result = a + b ;

    return result ;
}