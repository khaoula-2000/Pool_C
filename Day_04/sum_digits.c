#include<stdio.h>

int sum_digits(int n){

    int sum=0;
    for(int i=0; i<=n;i++){
        sum+= i;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number to calculate the sum of digits from 0 to n: ");
    scanf("%d", &number);
    int result = sum_digits(number);
    printf("The sum of digits from 0 to %d is: %d\n", number, result);
    return 0;
}