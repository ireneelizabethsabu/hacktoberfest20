#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int arr[10];
}Stack;

Stack s;
int top;

void push(int n) {
    if(top<9)
        s.arr[++top] = n;
}

int pop() {
    if(top == -1)
        return -1;
    return s.arr[top--];
}

bool isEmpty() {
    if(top == -1)
        return true;
    return false;
}

bool isFull() {
    if(top == 9)
        return true;
    return false;
}

int main() {
    int q, choice, n;
    scanf("%d", &q);
    while(q--) {
        scanf("%d%d", &choice, &n);
        switch(choice) {
            case 0: push(n);
                    break;
            case 1: printf("%d\n", pop());
                    break;
            case 2: printf("%d\n", isEmpty());
                    break;
            case 3: printf("%d\n", isFull());
                    break;
            // case 4: ;
            //         Stack temp;
            //         pop(&temp);
            //         push(&temp, n);
            //         break;
        }
    }
    return 0;
}