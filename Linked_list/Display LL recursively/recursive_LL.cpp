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

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int m;
        cout<<"enter element number "<<i<<" : ";
        cin>>m;
        insert(m);
    }


    display(head);

}