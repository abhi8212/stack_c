#include<stdlib.h>
#include<stdio.h>
#define maxsize 100
//declaration of the stack;
struct lifo
{
    int arr[maxsize];
    int top;
};
typedef struct lifo stack; 
//typedef basically is define pointer of the function;
//creation of the stack;
void create(stack *s)
{
    s->top=-1;
    // initialization of the stack;
}
//insert the elements ;
void push(stack *s,int value)
{
    if(s->top==maxsize-1)
    {
        printf("the stack is full\n");

    }
    else
    {
        s->top++;
        s->arr[s->top]=value;
    }
   
}
//print stack;
void print(stack *s)
{
    int i=0;
    if(s->top==-1)
    {
        printf("it is empty\n");
    }
    else
    {
        for(i=s->top;i>=0;i--)
        {
            printf("%d ",s->arr[i]);

        }

    }
}

//pop of the stack;
int pop(stack *s)
{
    if(s->top==-1)
    {
        printf("it is empty\n");
    }
    else
    {
        printf(" the pop data is %d \n",(s->arr[s->top]));
        s->top--;
      //  return((s->arr[s->top--]));
    }
}
int main()
{
    // insert the elements
    stack A;
    create(&A);
  
push(&A,10);
  push(&A,20);
  push(&A,30);
  push(&A,60);
  print(&A);
  pop(&A);
  pop(&A);
  print(&A);
  
    return 0;


}