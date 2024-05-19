#include <stdio.h>
#include <stdlib.h>

struct Car {
    int passenger;
    int flammable;
    struct Car * next;
};
void attachCar(struct Car *, int, int);
int fire(struct Car *);

int main(int argc, char * argv[]){
    int cars;
    int human[13], moeru[13];
    struct Car head;
    head.next = NULL; // passenger & flammable for head in useless

    scanf("%d", &cars);
    for (int i = 0; i < cars; i++) {
        scanf("%d", &human[i]);
    }
    for (int i = 0; i < cars; i++) {
        scanf("%d", &moeru[i]);
    }

    for (int i = 0; i < cars; i++) {
        attachCar(&head, human[i], moeru[i]);
    }

    printf("%d\n", fire(&head)); // The train is on fire now
    return 0;
}

void attachCar(struct Car * head, int passenger, int flammable) {
    struct Car * curr = head;
    while(curr->next){
        curr = curr->next;                              // Find the end of the train
    } 
    struct Car * newcar = malloc(sizeof(struct Car));   // Make a new car
    newcar->passenger = passenger;                      // Let passengers in
    newcar->flammable = flammable;                      // Load flammable items
    newcar->next = NULL;                                // This is the last car
    curr->next = newcar;                                // Attach new car to the train
}

int fire(struct Car * head) {
    int people = 0, car = 0;
    while(head->next != NULL){
        head = head->next;
        people += head->passenger;
        if(people >= head->flammable){
            return car;
        }else{
            car++;
        }
    }
    return car;
}
