#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*top = NULL;

void push(int x)
{
    struct Node* t;
    t = (struct Node*)malloc(sizeof(struct Node));

    if(t==NULL)
    {
        cout<<"Stack is full\n";
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){

    struct Node *t;
    int x = -1;
    if(top==NULL)
    {
        cout<<"Stack is empty\n";
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        delete(t);
    }

    return x;
}

void display(){
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}



int main(){

    push(10);
    push(20);
    push(30);
    push(40);

    display();
    pop();
    display();
    return 0;
}