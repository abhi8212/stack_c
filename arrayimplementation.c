//creation of stasck using array;
#include<stdio.h>
#include<stdlib.h>
// make stack of maximum 100 integer;
#define N 100 
//initialize stack globally;
int stack[N+1],top=-1; //initialize of top;
//creation of new data;
void push()
{
    int x;
    printf("enter the data\n");
    scanf("%d",&x);
    //condition for overflow or when the top reaches at max
    if(top==N)
    {
        printf("overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

// pop of the data;
void pop()
{
    int item;
    if(top==-1)
    {
        printf("the stack is empty\n");

    }
    else
    {
        item=stack[top];
        top--;
        printf("the deleted item is %d ",item);
    }

}
//printing of the stack data;
void display()
{
    int i=0;
    printf("the required data is\n");
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
//peek;
void peek()
{
    int item;
    item=stack[top];
    printf("the peek value of stack is %d ",item);
}

void main()
{
    int ch;
    do
    {
        printf("enter the choice 1:push 2:display 3:pop");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {push();
            break;}
            case 2:{display();
            break;}
            case 3:
            {
                pop();
                break;
            }
            case 4:
            {
                peek();
            }
        }
    }while(ch!=0);
}