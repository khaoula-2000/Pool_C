#include <stdio.h>
void factorial(){
    int n,i;
    long fact=1;
    printf("Entrer un nombre pour calculer sa factorielle: \n");
    printf("n=");
    scanf("%d",&n);
    if(n<0){
        printf("Erreur: le nombre doit etre positif\n");
    }else{
        for(i=1;i<=n;i++){
            fact *=i;
        }
        printf(" %d != %lu\n",n,fact);
    }
}