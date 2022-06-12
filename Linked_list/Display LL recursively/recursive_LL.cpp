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
    newNode->next = NULL;

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = tail->next;
    }

}

void display(struct node* head){

    struct node* temp = head;

    if(temp!=NULL)
    {
        cout<<temp->val<<" "; 
        display(temp->next);       //recursion display function
    //  cout<<temp->val<<" ";     //call print after recursion to print in reverse directiom
    }
}


int main(){

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    display(head);

}