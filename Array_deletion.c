#include<stdio.h>
int A_delete(int A[],int l,int D);

int main(){
    int A[] = {1,2,3,4,5};
    int D = 2;
    int l = 5;
    printf("start\t");
    for(int i=0;i<5;i++){
        printf("%d\t",A[i]);
    }
    A_delete(A,l,D);
}

int A_delete(int A[],int l,int D){
    for (int i = D; i < l; i++){
        A[i] = A[i+1];
    }
    l = l-1;

    for(int i=0;i<l;i++){
        printf("\n%d",A[i]);
    }
}
