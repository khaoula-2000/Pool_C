#include<stdio.h>

int fact(int n){
    if(n<0) return -1;
    if(n==0 || n==1) return 1;
    return n*fact(n-1); 
}
float operation(float a,float b,char op){
    switch(op){
        case '+':
             return a+b;
             break;
        case '-':
             return a-b;
             break;
        case '*':
             return a*b;
             break;
        case '/':
             if(b==0){
                 return -1;
             }
             return a/b;
             break;
        default:
                return -1;
    }
}

float fsqrt( float x){
      if(x<0){
          return -1;
      }
        float res = x;  
        float prev = 0;
       do{ 
            prev = res; 
            res = (res + x / res) / 2; 
        } while(res != prev);
        return res;
}
float pwr2(float n){
         return n*n;
}

float pwr3(float n){
         return n*n*n;
}


int main(){

    int choix;
    float history[5];
    int count=0;
    do{
    printf("\nCalculator Menu:\n");
    printf("1. Factorial\n");
    printf("2. Basic Operations (+, -, *, /)\n");       
    printf("3. Square Root\n");
    printf("4. Square \n ");
    printf("5. Cube \n");
    printf("Enter your choice (1-5): ");
    printf("To exit, enter any other number\n");
    scanf("%d",&choix);
   
    switch(choix){
        case 1:{
            int num;
            printf("\n Enter a positive integer: ");
            scanf("%d",&num);
            printf("%d",fact(num));
            history[count++]=fact(num);
            
            break;

           
        }   
        case 2:{
            float a,b;
            char op;
            printf("\n Enter a op b exemple( 5+3):");
            scanf("%f%c%f",&a,&op,&b);
            printf("%f \n",operation(a,b,op));
            history[count++]=operation(a,b,op);
           
            break;


        }
        case 3:{
            float x;
            printf("\n Enter a number to calculate its square root: ");
            scanf("%f",&x);
            printf("%f \n ",fsqrt(x));
            history[count++]=fsqrt(x);
             
            break;

        
        }
        case 4:{
            float n;
            printf("\n Enter a number to calculate its square\n");
            scanf("%f",&n);
            printf("%f",pwr2(n));
            history[count++]=pwr2(n);
             
            break;

        }
        case 5:{
            float n;
            printf("\n Enter an number to calculate its cube\n");
            scanf("%f",&n);
            printf("%f",pwr3(n));
            history[count++]=pwr3(n);
            
            break;

        }
        default :{
            break;
        }
    }
}while(choix>=1 && choix<=5);
    
 printf("History of calculations:\n");
    for(int i=0;i<count;i++){
        printf("%.2f\n",history[i]);
    }

    return 0;



}