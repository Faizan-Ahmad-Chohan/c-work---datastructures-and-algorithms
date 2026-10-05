#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    /*insertion
    deletion
    traversing*/
    //array  operations//
    int arr[5] = {12, 45, 7, 23, 19};
    cout<<"Here is Array : ";
     for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {

cout<<arr[i]<<",";



    }
    char choice;
    cout<<"Do you want to change possition of array elements ? 'y' , 'n' :";
    cin>>choice;
    if (choice=='y')
    {
 int change_value;
 cout<<"Write index no of element to change : ";
 cin>>change_value;
    int change_place;
    cout<<"Write value to replace : ";
    cin>>change_place;



    // FIX: Get row count and column count properly
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {





    }
    }
   
}
