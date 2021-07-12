#include<stdio.h>
int insert(int[],int,int,int);

int main(){
    int A[10] = {1,2,3,5};
    int k = 5;
    int p = 2;
    int n = 4;
    return insert(A,k,p,n);
}

int insert(int A[],int k,int p,int n){
    for(int i=k-1;i>p;i--){
        A[i+1] = A[i]; 
    }
    A[p+1] = n;
    for(int i=0;i<5;i++){
        printf("%d",A[i]);
    }
}