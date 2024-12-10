// #include<stdio.h>
// void intersection(int[],int , int[],int,int[]);
// int main(){
//     int a[100],b[100],m,n,c,inter[100];
//     printf("Input number of elements in first array\n");
//     scanf("%d", &m);
    
//     printf("Input %d integers\n", m);
//     for (c = 0; c < m; c++) {    
//         scanf("%d", &a[c]);       
//     }
    
//     printf("Input number of elements in second array\n");
//     scanf("%d", &n);
    
//     printf("Input %d integers\n", n);
//     for (c = 0; c < n; c++) {    
//         scanf("%d", &b[c]);    
//     }
//     intersection(a,m,b,n,inter); return 0;
// }
// void intersection(int a[],int m,int b[],int n,int inter[]){
//     int i=0,j=0,k=0;
//     while(i<=m && j<=n){
//         if(a[i]<b[j]){
//             i++;
//         }
//         else if(a[i]==b[j]){
//             inter[k]= a[i];
//             i++;
//             j++;
//             k++;

//         }
//         else{
//             j++;
//         }
//     }
//     printf("intersection of  array\n");
//     for(int l=0; l<k;l++){
//         printf("%d",inter[k]);
//     }
// }

//16 Intersection
#include <stdio.h>

void intersection(int a[], int m, int b[], int n, int inter[]);

int main() {
    int a[100], b[100], m, n, c, inter[100];
    
    printf("Input number of elements in first array: ");
    scanf("%d", &m);
    
    printf("Input %d integers for first array:\n", m);
    for (c = 0; c < m; c++) {    
        scanf("%d", &a[c]);       
    }
    
    printf("Input number of elements in second array: ");
    scanf("%d", &n);
    
    printf("Input %d integers for second array:\n", n);
    for (c = 0; c < n; c++) {    
        scanf("%d", &b[c]);    
    }
    
    intersection(a, m, b, n, inter);
    return 0;
}

void intersection(int a[], int m, int b[], int n, int inter[]) {
    int i = 0, j = 0, k = 0;

    
    
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] == b[j]) {
            inter[k] = a[i];
            k++;
            i++;
            j++;
        } else {
            j++;
        }
    }

    printf("Intersection of the arrays:\n");
    for (int l = 0; l < k; l++) {
        printf("%d ", inter[l]);
    }
    printf("\n");
}
