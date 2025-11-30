#include<stdio.h>
#include<stdbool.h>
bool is_powerof3(int n){
    if(n<=0){
        return false;
    }
    while(n>1){
        if(n%3!= 0){
            return false;
        }
        n = n / 3;
    }
    return true;
}
int main(){
    int number;
    printf("Enter an integer : ");
    scanf("%d", &number);
    if(is_powerof3(number)){
        printf("%d is a power of 3. \n", number);
    } else {
        printf("%d is not a power of 3. \n", number);
    }
    return 0;
}