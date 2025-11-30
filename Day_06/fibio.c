#include<stdio.h>
long long fib_tail(int n,long long a,long long b){
    if(n==0){
        return a;
    }
    else{
        return fib_tail(n-1,b,a+b);
    }

}
int main(){
    int number;
    printf("Entrer un nombre positif: ");
    scanf("%d",&number);
    if(number<0){
        printf("Erreur: Le nombre doit être positif.\n");
        return 1;
    }
    long long result = fib_tail(number,0,1);
    printf("Fibonacci nombre F(%d) = %lld\n",number,result);
    return 0;
}