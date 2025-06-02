#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;
void push(int item){
    if (top >= MAX_SIZE - 1){
        printf("Stack Ovwerflow\n");
        return;

    }
    top++;
    stack[top] = item;
}

int pop() {
    if (top < 0) {
        printf
    }
}