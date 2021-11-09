#include<iostream>
using namespace std;
//initialize node;
struct node
{
    int data;
    struct node *link;
};
struct node *top;
void push(int data)
{
    struct node *temp;
    top==NULL;
    temp=new node();
    //when stack is full;
    if(!temp)
    {
        cout<<"overflow\n";
        exit(1);
    }
    else
    {
        temp->data=data;
        temp->link=top;
        top=temp;
    }

}
//to display data;
void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        cout<<"the data is empty\n";
        exit(1);
    }
    else
    {
        cout<<"the data is\n "<<endl;
        while(temp!=NULL)
        {
    cout<<temp->data<<"->";
    temp=temp->link;
    }
    }
}
void peek()
{
    if(top==NULL)
    {
        cout<<"empty\n";
    }
    else
    {
        cout<<"the peek value is"<<top->data<<endl;
    }
}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"there is no data in stack\n";
        exit(1);
    }
    else
    {
        temp=top;
        top=top->link;
        temp->link=NULL;
        free(temp);
    }
}
int main()
{
    push(2);
    push(5);
    push(7);
    push(9);
    display();
   peek();
    pop();
    pop();
    peek();
    display(); 
    return 0;

}
