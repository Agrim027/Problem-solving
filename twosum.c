#include<stdio.h>
int main(){
    int a[100],target,m;
    printf("Enter the no. of elements\n");
    scanf("%d",&m);
    printf("Enter elements of array\n");
    for (int i = 0; i < m; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the target element");
    scanf("%d",&target);
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) { 
            if (a[i] + a[j] == target) {
                printf("[%d, %d]\n", i, j);
                return 0; 
            }
        }
    }
    
}