//9 Ishan loves chocolate
#include<stdio.h>
void main(){
    int a[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    long long int mini=1e9+1;
    for(int i=0;i<n;i++){
        if(mini>a[i]){
            mini=a[i];
        }
    }
    printf("%d",mini);
}