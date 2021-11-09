//push the value in stack using linkedlist;
#include<stdio.h>
#include<stdlib.h>
//push the element 
struct stack
{
    int data;
    struct stack *ptr;
};
struct stack *top,*temp;

void push()
{
    struct stack *newstack;
    top==NULL;
    newstack=(struct stack*)malloc(sizeof(struct stack));
    printf("enter the data\n");
    scanf("%d",&newstack->data);
    newstack->ptr=NULL;
    if(top==NULL)
    {
        top=newstack;
    }
    else
    {
        newstack->ptr=top;
        top=newstack;

    }
}

//traverse the satck
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->ptr;
    }
}


// delete the data ;
void pop()
{
    struct stack *temp;
    if(top==NULL)
    {
        printf("the stack is empty\n");
        exit(1);
    }
    else
    {
    temp=top;
    printf("the delete data is %d \n",top->data);
    top=top->ptr;
    free(temp);
    }
}



int main()
{
    int ch;
    do
    {
        printf("enter the choice 1:push,2:display 3:pop\n");
        scanf("%d\n",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                pop();
                break;
            }
        }
        /* code */
    } while(ch!=0);
    return 0;
}