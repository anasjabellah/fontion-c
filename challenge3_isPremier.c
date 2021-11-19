#include <stdio.h>
#include <stdbool.h>

int nomber ;

bool divideby(int nomber);
int divedeby(int n , int a);


int main(){

    int a , b ;
    printf("Creez une nomber 1 : ");
    scanf("%d",&a);

    printf("Creez une nomber 1 : ");
    scanf("%d",&b);

    divedeby(a,b);

    if (divideby(nomber) == true )
    {
        printf("est Premier");
    }else{
        printf("est non Premier");
    }
    return 0;   
}

bool divideby(int nomber){

    int conter = 0 , i;

    for ( i = 1 ; i <= nomber ; i++)
    {
        if(nomber%i == 0){
            conter++ ;
        }
    }

    if (conter == 2)
    {
        return true ; 
    }else{

        return false ;
        
    }
}


int divedeby(int n , int a){

    nomber =  n / a ;

    return nomber ;
}