#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node * next;
};
struct node * head = NULL;
struct node * tail = NULL;
void MoveToTail();

int main(void) { 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        struct node * tmp = malloc(sizeof(struct node));
        scanf("%d", &tmp->val);
        tmp->next = NULL;
        if(i == 1)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    MoveToTail();
    for(struct node * cur = head; cur != NULL; cur = cur->next) {
        printf("%d ", cur->val);
    }
    printf("\n");
    return 0;
}

void MoveToTail() {
    int biggest = 0, change = 0, time = 0;
    for(struct node * cur = head; cur != NULL; cur = cur->next){
        if(cur->val > biggest){
            biggest = cur->val;
            time = change;
        }
        change++;
    }
    if(time == 0){
        tail->next = head;
        head = head->next;
        tail->next->next = NULL;
    }else{
        struct node * tmp = malloc(sizeof(struct node));
        tmp = head;
        for(int i = 0; i < time - 1; i++)
            tmp = tmp->next;
        tail->next = tmp->next;
        tmp->next = tmp->next->next;
        tail->next->next = NULL;
    }
}