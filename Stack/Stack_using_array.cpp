#include<bits/stdc++.h>
using namespace std;

struct Stack {
    int size;
    int top;
    int *s;
};

void create(struct Stack *st)
{
    cout<<"Enter size : ";
    cin>>st->size;
    st->top = -1;
    st->s = (int *)malloc(st->size*sizeof(int));
}

void display (struct Stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<"\n";
    }
    cout<<"\n";
}


void push(struct Stack *st, int n)
{
    if(st->top == st->size-1)
    {
        cout<<"Stack overflow\n";
    }
    else
    {
        st->top++;
        st->s[st->top] = n;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if(st->top==-1)cout<<"Stack underflow\n";
    else x=st->s[st->top--];

    return x;
}

int peek(struct Stack st, int index)
{
    int x = -1;
    if(st.top-index+1<0)cout<<"Invalid Index\n";

    x=st.s[st.top-index+1];
    return x;

}

int isEmpty(struct Stack st)
{
    if(st.top==-1)return 1;

    return 0;
}

int isFull(struct Stack st)
{
    if(st.top == st.size-1)return 1;

    return 0;
}

int stackTop(struct Stack st)
{
    if(isEmpty(st))return -1;

    return st.s[st.top];
}

int main(){
    struct Stack st;
    create(&st);
    
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    //cout<<"poped value : "<<pop(&st)<<"\n";
    display(st);
    int e = isEmpty(st);
    cout<<"Is stack Empty? "<<e<<"\n";
    int f = isFull(st);
    cout<<"Is stack full? "<<f<<"\n";

    int find = peek(st,2);
    cout<<"Element at given index : "<<find<<"\n";

    int sTop = stackTop(st);
    cout<<"Element at top of stack : "<<sTop<<"\n";

    return 0;
}