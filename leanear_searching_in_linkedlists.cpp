#include<iostream>
using  namespace std;
 struct node
{
int data;
node* next;


};

int main()
{
    node* node1=new node;
    node* node2=new node;
    node* node3=new node;
    node*head=node1;
node*tail=node3;

node1->next=node2;
node2->next=node3;
node3->next=nullptr;

    node* current=head;
cout<<"Enter values to the nodes\n";
while(current!=nullptr)
{


    cout<<"Enter data :";
    cin>>current->data;
        current=current->next;

}


//searchings
current=head;
int search;
cout<<"Lets start searching in our linked lists\n";
cout<<"Search value ? type : ";
cin>>search;
int no_nodes=1;
int no_counts=0;
while(current!=nullptr)
    {

        if (current->data==search)
            {
                    cout<<"Value\""<<search<<"\"Exists in  list at \""<<no_nodes<<"\"node";
                    no_counts++;
            }
        

                current=current->next;
                no_nodes++;

    }

if ( no_counts==0)
    {
        cout<<"The value\""<<search<<"\" Doesnot Exist in linkedlist\n";

    }






}
