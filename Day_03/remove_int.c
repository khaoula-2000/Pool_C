#include<stdio.h>

void remove_int(int arr[],int *size,int target){
    int j=0;
for(int i=0;i<*size;i++){
      if(arr[i]!=target){
            arr[j]=arr[i];
            j++;
      }    
   }
   *size=j;
  
}

int main(){
    int arr[] = {1,2,3,4,2,5,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    remove_int(arr,&size,target);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}