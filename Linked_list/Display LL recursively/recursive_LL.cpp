#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

//Insert Element
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

//Display Linked List
void display(struct node* head){

    struct node* temp = head;

    if(temp!=NULL)
    {
        cout<<temp->val<<" "; 
        display(temp->next);       //recursion display function
    //  cout<<temp->val<<" ";     //call print after recursion to print in reverse directiom
    }
}

//Count elements of linked list
int count(struct node* head){
    struct node* temp = head;
    int length = 0;

    while(temp!=NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

//Count total sum of linked list elements
int sum(struct node* head)
{
    struct node* temp = head;
    int total = 0;
    while(temp != NULL)
    {
        total += temp->val;
        temp = temp->next;
    }
    return total;
}

//count Max element in linked list
int maxElement(struct node* head)
{
    struct node* temp = head;
    int ans = 0;
    while(temp!=NULL)
    {
        ans = max(ans,temp->val);
        temp = temp->next;
    }
    return ans;
}

//Find Element in the linked list
bool search(struct node* head, int key)
{
    struct node* temp = head;
    while(temp!=NULL)
    {
        if(temp->val==key)return true;
    }
    return false;
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


    cout<<"Linked List : ";
    display(head);

    int length = count(head);
    cout<<"\nLength of Linked List : "<<length;

    int total = sum(head);
    cout<<"\nSum of Linked List : "<<total;

    int maxEle = maxElement(head);
    cout<<"\nMax element in Linked List : "<<maxEle;

    bool find = search(head,5);
    cout<<"Find : "<<find;
}