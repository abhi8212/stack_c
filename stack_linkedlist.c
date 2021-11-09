#include <stdio.h>
#include<stdlib.h>
struct lifo
{
    int value;
    struct lifo *next;
};
typedef struct lifo stack;
//top is ppointer which is pointing the data of linked  list;
stack *top;
void create(stack **top)
{
    *top = NULL;
}
void push(stack **top, int element)
{
    stack *new;
    new = (stack *)malloc(sizeof(stack));
    if (new == NULL)
    {
        printf("\n stack is full");
        exit(-1);
    }
    new->value = element;
    new->next = *top;
    *top = new;
}
int pop(stack **top)
{ 
    int t;
    stack *p;
    if (*top == NULL)
    {
        printf("\nstack is empty");
        exit(-1);
    }
    else
    {
        t = (*top)->value;
        p = *top;
        *top = (*top)->next;
        free(p);
        return t;
    }
}
int isempty(stack **top)
{
    if (*top == NULL)
        return (1);
    else
        return (0);
}
//printing hte data;
 void print(stack **top)
 {
     stack *temp;
     temp=*top;
     while(temp!=NULL)
     {
         printf("%d ",temp->value);
         temp=temp->next;
         
     }

 }

int main()
{
    stack *a, *b;
    create(&a);
    create(&b);
    push(&a, 10);
    push(&a, 20);
    push(&a, 30);
    push(&b, 100);
    push(&b, 5);
  //  print(&a);
    printf("%d %d", pop(&a), pop(&b));
    push(&a, pop(&b));
    if (isempty(&b))
        printf("\nB is empty");
    return 0;
}