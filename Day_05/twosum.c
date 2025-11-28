#include <stdio.h>

void two_sum(int arr[],int size,int target,int *indice1,int *indice2){
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                *indice1= i;
                *indice2=j;
                return;
            }
        }
    }
}
int main(){
    int arr[]={2,7,11,15,3,6};
    int target=4;
    int indice1=-1,indice2=-1;
    int size= sizeof(arr)/sizeof(arr[0]);
    two_sum(arr,size,target,&indice1,&indice2);
      if(indice1==-1 && indice2==-1){
        printf("No two elements found that sum to %d",target);
       
      }
      else{
          printf("Indices of elements that sum to %d ==> [ %d , %d]",target,indice1,indice2);
      }
    return 0;
}
