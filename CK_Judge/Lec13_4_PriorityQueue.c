#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node_s {
	int weight;
	int value;
	struct node_s * next;
} node_t;

typedef struct prio_queue_s {
	node_t * head;
} prio_queue_t;

void enqueue(prio_queue_t * const queue, int value, int weight);
node_t * dequeue(prio_queue_t * const queue);
void print_nodes(prio_queue_t * const queue);

int main() {
	int N;
	scanf("%d", &N);
	prio_queue_t queue = {
		.head = NULL,
	};
	for (int i = 0; i < N; i++) {
		char op[8];
		scanf("%s", op);
		if (!strcmp(op, "ENQUEUE")) {
			int v, w;
			scanf("%d%d", &v, &w);
			enqueue(&queue, v, w);
		}else if (!strcmp(op, "DEQUEUE")) {
			free(dequeue(&queue));
        }
		print_nodes(&queue);
	}
	return 0;
}

void print_nodes(prio_queue_t * const queue) {
	if (!queue->head) {
		printf("EMPTY\n");
		return;
	}
	for (node_t * node = queue->head; node; node = node->next) {
		printf(" -> %d", node->value);
    }
	printf("\n");
    return;
}

void enqueue(prio_queue_t * const queue, int value, int weight) {
    node_t * tmp = malloc(sizeof(node_t));
    tmp->value = value;
    tmp->weight = weight;
    tmp->next = NULL;

    if(queue->head == NULL){
        queue->head = tmp;
    }else{
        node_t * last = queue->head;
        while(last->next) last = last->next;
        int index = 0, time = 0;
        for(node_t * cur = queue->head; cur != NULL; cur = cur->next, time++)
            if(tmp->weight >= cur->weight) index++;
        
        if(index == 0){
            tmp->next = queue->head;
            queue->head = tmp;
        }else if(index == time){
            last->next = tmp;
        }else{
            node_t * cur = queue->head;
            for(int i = 0; i < index - 1; i++)
                cur = cur->next;
            tmp->next = cur->next;
            cur->next = tmp;
        }
    }
}

node_t * dequeue(prio_queue_t * const queue) {
    node_t * cur = queue->head;
    if(cur == NULL){
        return NULL;
    }else if(cur->next == NULL){
        queue->head = NULL;
    }else{
        queue->head = cur->next;
    }
    return cur;
}