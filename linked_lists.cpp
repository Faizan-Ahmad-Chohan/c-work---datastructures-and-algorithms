#include<iostream>
using namespace std;
struct node
{
    int data;
     node *next;
     node *previous;
};


int main()
{
  cout<<"heloo";
  node* head=nullptr;
  node* tail=nullptr;

  node* node1=new node;
  node* node2=new node;
  node* node3=new node;
  cout<<"Enter first node data : ";
  cin>>node1->data;
  head=node1;
  node1->next=node2;
  node1->previous=nullptr;
  cout<<"Enter node 2 data :";
  cin>>node2->data;

  node2->previous=node1;
  node2->next=node3;
 
  cout<<"Enter node 3 data :";
  cin>>node3->data;
  node3->next=tail;
    tail=node3;
    node3->previous=node2;

  

cout<<"\t\t Forward Transversal ............";
cout<<"\nHere is node1 data : "<<node1->data;
cout<<"\nPointer Head is :"<<head;
cout<<"\nNext node pointer address is : "<<node1->next;


cout<<"\nHere is node2 data : "<<node2->data;
cout<<"\nNext node pointer address is :"<<node2->next;
cout<<"\nprevious node pionter is :"<<node2->previous;

cout<<"\nHere is node3 data : "<<node3->data;
cout<<"\nNext node pointer address is :"<<node3->next;
cout<<"\nprevious node pionter is :"<<node3->previous;





cout<<"\n\t\t Backward Transversal ............";
cout<<"\nHere is node1 data : "<<node2->previous->data;
cout<<"\nNext node pointer address is : "<<node2->previous->next;
cout<<"\nPointer Head is :"<<node2->previous->previous;



cout<<"\nHere is node2 data : "<<node3->previous->data;
cout<<"\nprevious node pionter is :"<<node3->previous->previous;
cout<<"\nNext node pointer address is :"<<node3->previous->next;


cout<<"\nHere is node3 data : "<<tail->data;
cout<<"\nPrevious node pointer address is :"<<tail->previous;
cout<<"\nNext node pionter is :"<<tail->next;

delete node1;
delete node2;
delete node3;











 





}