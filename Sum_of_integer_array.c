#include<stdio.h>
int main(){
    int i;
    int array=0;
    int arr[] = {5,10,15,20,25,30,35,40};
    for(i=0; i<=8; i++){
        array = array+arr[i];
        printf("%d\n",array);
    }
    printf("---------");
    printf("\n%d",array);
    
}