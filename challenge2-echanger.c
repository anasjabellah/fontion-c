#include <stdio.h>
int nomber1 , nomber2 ;
int a , b ;
void echanger();

int main(){

    printf("Creez une nomber A : ");
    scanf("%d", &nomber1 );

    printf("Creez une nomber B : ");
    scanf("%d", &nomber2);

    echanger();

    printf("nomber a = %d |  a=%d  \n",nomber1,a);
    printf("nomber b = %d |  b=%d ",nomber2,b);

}

void echanger(){

    int c ;

    a = nomber1 ;
    b = nomber2 ;

    c = a ;
    a = b ;
    b = c ;

    return  a,b ;
}