// 10 Fighting the darkness
#include<stdio.h>
void main(){
    int arr[100],i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    long long int maxm=0;
    for(i=0;i<n;i++){
      if(maxm<arr[i]){
        maxm=arr[i];
      }
    }
    printf("%d",maxm);
}