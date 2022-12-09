#include<iostream>
using namespace std;

int main(){
    int data;
    int countE=0;
    int countO=0;
    cout << "Enter an integer: ";
    cin >> data;
    
    while(data != 0)
    {
    cout << "Enter an integer: ";

    
     if(data %2 != 0)
    {
    countO++;
    }
    else
    {
    countE++;
    }
cin >> data;
    }
    

    
    cout << "#Even numbers = ";
    cout << countE << "\n";
    cout << "#Odd numbers = ";
    cout << countO;
    return 0;
}