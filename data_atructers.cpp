
#include <iostream>
#include <iterator>
using namespace std;
int main()
{
    int size_input_by_user;
    cout<<"Enter size of array : ";
        cin>>size_input_by_user;
    int qasim[size_input_by_user];
    cout<<"Enter values of array\n";
        for(int i=0;i<size_input_by_user ;i++)
        {cin>>qasim[i];
            cout<<"                  : ";   }
        for(int i=0;i<size_input_by_user ;i++)
        {cout<<qasim[i]<<",";}
            char user_choice;
                    cout<<" \nIf you want to update any element in array type 'y' for yes and 'n' for no :";
                cin>>user_choice;
    if (user_choice=='y')
            {cout<<"\nWhat index you want to edit: ";
                    int index_update;
                    cin>>index_update;
                cout<<"\nEnter value : ";
                cin>>qasim[index_update];} 
    cout<<"\nArray after update is : ";
            for(int i=0;i<size_input_by_user ;i++)
                {cout<<qasim[i]<<",";}          

}

