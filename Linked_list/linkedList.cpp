#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void insert(int n){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->val = n;            
    newNode->next = NULL;   //1,NULL
    if(head==NULL)
    {
        head = newNode;     //head -> 1,NULL 
        tail = newNode;    //tail ----|
    }
    else
    {
        tail->next = newNode;  //head -> 1,next -> 2,next->NULL
        tail = tail->next;               //tail ----|
    }                          //Head will remain at the start and tail will reach the end
}

void display(){
    struct node* ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->val<<" ";
        ptr = ptr->next;
    }
}

int main(){

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    cout<<"Linked List : ";
    display();

    return 0;
}