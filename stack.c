#include<stdio.h>
#define MAX 5
int push(int);
int pop();

long stack[MAX];
int top = -1;

int main(){   
for (int i = 0; i <= 5; i++){
    push(i);
}
for (int i = 0; i <= 5; i++){
    pop();
}
}

int pop(){
    if(top == -1){
        printf("Stack is empty\n");
        return 0;
    }else{
        int result = stack[top];
        printf("POPPED : %d\t",result);
        top--;
    }
}

int push(int num){
    if(top == MAX-1){
        printf("Stack is full\n");
    }
    else{
        top++;
        stack[top] = num;
        printf("PUSHED : %d\t",stack[top]);
    }
}

