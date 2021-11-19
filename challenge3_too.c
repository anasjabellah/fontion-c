#include <stdbool.h>
#include <stdio.h>

bool test ;
bool isPremier(bool test );


int main(){

    int nomber ;
    
    printf("Creez une nomber  : ");
    scanf("%d",&nomber);
    isPremier(nomber);

    if (test == true)
    {
        printf("est Premier");
    }else{
         printf("est non Premier");
    }
    
}

bool isPremier(bool nomber ){

    int conter = 0 , i;

    for ( i = 1 ; i <= nomber ; i++)
    {
        if(nomber%i == 0){
            conter++ ;
        }
    }

    if (conter == 2)
    {
        return test = true ; 
    }else{

        return test = false ;
        
    }
}