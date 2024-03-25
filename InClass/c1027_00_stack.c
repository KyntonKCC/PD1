#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#define STACK_SIZE 100
void make_empty(void);
void push(int);
int pop(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow();
void stack_underflow();
/* external variables */
int contents[STACK_SIZE];
int top = 0;

int main(void){
    return 0;
}

void make_empty(void){
    top = 0;
}
void push(int i){
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i; 
}
int pop(void){
    if (is_empty())
        stack_underflow();
    else
        return contents[--top]; 
}
bool is_empty(void){
    return top == 0;
}
bool is_full(void){
    return top == STACK_SIZE;
}
void stack_overflow(){
    fprintf(stderr, "Stack Overflow!!!");
    exit(EXIT_FAILURE);
}
void stack_underflow(){
    fprintf(stderr, "Stack Underflow!!!");
    exit(EXIT_FAILURE);
}