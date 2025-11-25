#include<stdio.h>

void calc(){
float x,y;
char operation;
printf("Entrer deux nombre pour le calcul: \n");
printf("a=");
scanf("%f",&x);
printf("b=");   
scanf("%f",&y);
printf("Entrer l'operation (+, -, *, /): ");
scanf(" %c",&operation);
switch(operation){
     case '+':
            printf("%f + %f=%f\n",x,y,x+y);
            break;
     case '-':
            printf("%f - %f=%f\n",x,y,x-y);
            break;
     case '*':
            printf("%f * %f=%f\n",x,y,x*y);
            break;
     case '/':
            if(y!=0){
                printf("%f / %f=%f\n",x,y,x/y);

            }else{
                printf("Erreur: Division par zero!\n");
            }
            break;
     default:
            printf("Operation invalide!\n");
            break;

}
}