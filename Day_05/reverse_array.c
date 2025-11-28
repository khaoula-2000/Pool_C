#include<stdio.h>

void reverse_array(int arr[],int size){

    int i=0;
    int j=size-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;

    }
}
int main(){
    
    
    int arr[]={0,1,2,3,4,6,8,9,10,11};
    int size= sizeof(arr)/sizeof(arr[0]);
    reverse_array(arr,size);
    printf("Reversed array elements:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}