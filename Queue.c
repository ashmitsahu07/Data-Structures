#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
//Define Queue structure
struct Queue
{
    struct Node*front;
    struct Node*rear;
};
//Function to initialize queue
void initQueue(struct Queue*q)
{
    q->front=NULL;
    q->rear=NULL;
}
//check if queue is empty
int isEmpty(struct Queue*q)
{
    return(q->front==NULL);
}
void enqueue(struct Queue*q,int value)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    
    if(newNode==NULL)
    {
        printf("Heap Overflow\n");
        return;
    }
    newNode->data=value;
    newNode->next=NULL;
    
    if(q->rear==NULL)
    {
        q->front=q->rear=newNode;
        return;
    }
    
    q->rear->next=newNode;
    q->rear=newNode;
}
//Dequeue opertion
void dequeue(struct Queue*q)
{
    if(isEmpty(q))
    {
        printf("Queue underflow\n");
        return;
    }
    
    struct Node*temp=q->front;
    printf("Deleted elements:%d\n",temp->data);
    
    q->front=q->front->next;
    
    if(q->front==NULL)
      q->rear=NULL;
    free(temp);
}
//peek operation
void peek(struct Queue*q)
{
    if(isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Front element:%d\n",q->front->data);
}
//Display queue
void display(struct Queue*q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
        return;
    }
    
    struct Node*temp=q->front;
    printf("Queue elements:");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
//Main function
int main()
{
    struct Queue q;
    initQueue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(&q);
    dequeue(&q);
    display(&q);
    peek(&q);
    return 0;
}
