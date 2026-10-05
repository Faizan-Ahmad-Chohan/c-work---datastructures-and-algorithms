#include <iostream>
#include <stack> 
#include<iterator>
using namespace std;
int main() {
    stack <int>my_stack;
    // now  to add some values to the stack we use push() function
    while (true){
            int input;
            cout<<"write value to push into stack : ";
            cin>>input;
        my_stack.push(input);
        cout<<"If  no more values to push  type : 'y' to stop ,and'any key' to further adding more values :  ";
        char breaker;
        cin>>breaker;
        if(breaker=='y')
            break;} 
//top() function is used to get what value is at the top of stack:
cout<<"\nTop value of stack in :"<<my_stack.top();
//to remove top value and move the second value to top pop()function is used.
while(! my_stack.empty()){
    cout<<"\nThe value on top  before 'pop()' is:  "<<my_stack.top();
    my_stack.pop();
    cout<<"\nThe value on top after 'pop()'   is :  "<<my_stack.top();}
    return 0;
}
