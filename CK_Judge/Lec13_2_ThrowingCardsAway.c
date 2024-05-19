#include <stdio.h>
#include <stdlib.h>

int N, M;
struct Card{
    struct Card * front;
    int value;
    struct Card * next;
};

void attachCard(struct Card *, int);
void printCardIndex(struct Card *);
void drop(struct Card *);
void reuse(struct Card *);

int main(int argc, char * argv[]){
    struct Card head;
    head.next = NULL;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++){
        attachCard(&head, i + 1);
    }
    // printCardIndex(&head);
    
    for(int i = 0; i < M; i++){
        drop(&head);
        // printCardIndex(&head);
        reuse(&head);
        // printCardIndex(&head);
    }
    printf("\n");
    return 0;
}

void attachCard(struct Card * head, int number){
    struct Card * curr = head;
    while(curr->next) curr = curr->next;
    struct Card * newCard = malloc(sizeof(struct Card));
    newCard->front = curr;
    newCard->value = number;
    newCard->next = NULL;
    curr->next = newCard;
}

void printCardIndex(struct Card * head){
    struct Card * curr = head;
    while(curr->next != NULL){
        printf("\t%3d %p %p %p\n", curr->value, curr->front, curr, curr->next);
        curr = curr->next;
    }
    printf("\t%3d %p %p %p\n", curr->value, curr->front, curr, curr->next);
    printf("-------------------------------------------\n");
}

void drop(struct Card * head){
    struct Card * curr = head;
    // printf("\t%3d %p %p\n", curr->next->value, curr, curr->next);
    // printf("-------------------------------------------\n");
    printf("%d ", curr->next->value);
    if(curr->next->next != NULL){
        curr->next->next->front = curr->next->front;
        curr->next = curr->next->next;
    }
}

void reuse(struct Card * head){
    struct Card * first = head;
    struct Card * last = head;
    while(last->next) last = last->next;
    if(first->next->next != NULL){
        first->next->next->front = first->next->front;
        first->next->front = last;
        last->next = first->next;
        first->next = first->next->next;
        last->next->next = NULL;
    }
}