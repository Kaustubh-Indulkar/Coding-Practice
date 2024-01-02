#include<iostream>
using namespace std;
//Pointers----> Data Types that holds the address of other data types
int main()
{
    int csk=500;
    int* mi;
    mi=&csk;

    // &---->(Address of )operator
    cout<<"The address of csk is: "<<&csk<<endl;
        cout<<"The address of mi is: "<<mi<<endl;

    // *----->(Value at)Dereference operator
            cout<<"The value at address of mi is: "<<*mi<<endl;

    return 0;
}
