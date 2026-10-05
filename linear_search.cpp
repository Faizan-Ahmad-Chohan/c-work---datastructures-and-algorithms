#include<iostream>
using namespace std;
int main()
{
int size;

cout<<"Enter what size of array you want :";
cin>>size;
int array[size];
cout<<"\t\a\aArray created successfully \n";
cout<<"Inputs Required  : "<<endl;
for (int i=0;i<size;i++)
{
cout<<i+1<<"  :";
cin>>array[i];

}

//searching begains...........................................
int search;
cout<<"Lets look for any value if exists in our Array\n";
cout<<"Enter value to cheak :";
cin>>search;
int no_counts=0;
for (int i =0;i<size;i++)
{
    if (search==array[i])
    {
        cout<<"The value exists at \""<<i+1<<"\" Block of Array";
        no_counts++;
    }


}

if (no_counts==0)
{
cout<<"\a\a\a Value \""<<search<< "\"not found";

}



}