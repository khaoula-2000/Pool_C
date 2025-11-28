#include<stdio.h>
int sum_array(int arr[]){
    int sum=0;
     for (int i=0;i<5;i++){
         sum+=arr[i];
     }
     return sum;
}
int main(){
    int arr[5];
    printf("Enter 5 integers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int result=sum_array(arr);
    printf("Sum of array elements: %d\n",result);
    return 0;
}