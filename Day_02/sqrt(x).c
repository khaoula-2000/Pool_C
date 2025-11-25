#include <stdio.h>
int sqrt_x(int nb){
    if (nb<0){
        printf("Erreur: Le nombre doit etre positif \n"); 
    }
    int i = 0 ;
    while(i*i<=nb) i++;
    return i-1;    
}
int main(){
    int nb, result;
    printf("Entrer un nombre pour calculer sa racine carree: \n");
    printf("nb=");
    scanf("%d",&nb);
    int resultat = sqrt_x(nb);
    if(resultat != -1)
    printf("La racine carree de %d = %d\n", nb, resultat);
    return 0;
}