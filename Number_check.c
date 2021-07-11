#include<stdio.h>
#include<ctype.h>
int main(){
    int box[5] = {1,2,3,4,5};
    int buffer[3] = {};
    int n = 0;
    printf("Try, if you can find or not, let's play you have 3 life's : \n");
    for(int i=0;i<3;i++){
        scanf("\n%d",&n);
        if(n == n%1==0 && n < 1000){
            buffer[i] = n; 
        }else{
            printf("Numbers below 1000 only allowed, you lost one chance\n");
        }
    }
    //checking algorithm
    printf("counting starts...\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(buffer[i] == box[j]){
                int count = 0;
                count++;
                printf("count clicked : %d\n",count);
            }           
        }
    }
}