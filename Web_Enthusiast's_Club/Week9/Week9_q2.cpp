//Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
//You should preserve the original relative order of the nodes in each of the two partitions.
//Sharanya Kamath, Arvind Sai K

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
 
Node *newNode(int data)
{
    struct Node* new_node = new Node;
    new_node->data  = data;
    new_node->next = NULL;
    return new_node;
}
 
struct Node *partition(struct Node *head, int x)
{
    struct Node *smallerHead = NULL, *smallerLast = NULL;
    struct Node *greaterLast = NULL, *greaterHead = NULL;
    struct Node *equalHead = NULL, *equalLast = NULL;
 
    while (head != NULL)
    {
        if (head->data == x)
        {
            if (equalHead == NULL)
                equalHead = equalLast = head;
            else
            {
                equalLast->next = head;
                equalLast = equalLast->next;
            }
        }
 
        else if (head->data < x)
        {
            if (smallerHead == NULL)
                smallerLast = smallerHead = head;
            else
            {
                smallerLast->next = head;
                smallerLast = head;
            }
        }
        else 
        {
            if (greaterHead == NULL)
                greaterLast = greaterHead = head;
            else
            {
                greaterLast->next  = head;
                greaterLast = head;
            }
        }
 
        head = head->next;
    }
 
    if (greaterLast != NULL)
        greaterLast->next = NULL;
 
    if (smallerHead == NULL)
    {
        if (equalHead == NULL)
            return greaterHead;
        equalLast->next = greaterHead;
        return equalHead;
    }
 
    if (equalHead == NULL)
    {
        smallerLast->next = greaterHead;
        return smallerHead;
    }
 
    smallerLast->next = equalHead;
    equalLast->next = greaterHead;
    return  smallerHead;
}
 
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
 
int main()
{
    struct Node* head, *next;
    int i,n,x,p;
    cout<<"enter no. of nodes: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(head==NULL){
            head=newNode(x);
            next=head;
        }
        else{
            next->next=newNode(x);
            next=next->next;
        }
    }
    cout<<"enter partition: ";
    cin>>p;
    head = partition(head, p);
    printList(head);
    return 0;
}