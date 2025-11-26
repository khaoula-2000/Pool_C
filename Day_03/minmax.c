#include<stdio.h>

int min_max(int arr[], int length ,int *max,int *min ){
     *min = arr[0];
     *max = arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]<*min){
            *min =arr[i];
        }
        if(arr[i]>*max){
            *max = arr[i];
        }
    }
    
    }
int main(){
    int arr[] = {3,5,1,8,-2,7};
    int max;
    int min;
    int length = sizeof(arr)/sizeof(arr[0]);
    min_max(arr,length,&max,&min);
    printf("Minimum: %d\nMaximum: %d\n", min,max);
    return 0;
}    