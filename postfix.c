#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    float arr[20];
} Stack;


Stack s;

void push(float ch ){
    if(top<19)
        s.arr[++top]=ch;
}

float pop(){
    return s.arr[top--];  
}

float evaluate(char expression[], int len) {
    for(int i=0;i<len;i++){
        if(expression[i]=='+')
            push(pop() + pop());
        else if(expression[i]=='-'){
            int a1=pop(),a2=pop();
            push(a2-a1);
        }  
        else if(expression[i]=='*')
            push(pop()*pop());
        else if(expression[i]=='/'){
            float a1=pop(),a2=pop();
            push(a2/a1);
        }
        else
            push(expression[i]-'0');
    }
    return pop();
}

int main() {
    int q,n;
    scanf("%d",&q);
    while(q--) {
        scanf("%d", &n);
        char *exp = (char *)malloc(n * sizeof(char));
        scanf("%s", exp);
        printf("%.1f\n", evaluate(exp, n));
    }
    return 0;
}