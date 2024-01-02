#include<iostream>
using namespace std;

/*There are 3 types of loops in C++
    (1)For Loop
    (2)While Loop
    (3)do-while loop
*/
// int main(int argc, char const *argv[])
// {
    // Normal for loop
    // int i=1,j;
    // cout<<"Enter the number whose table you want: "<<endl;
    // cin>>j;

    // for (int i = 6; i<=60;i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //Infinite for loop

    // for (int i = 0; 34 < 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //While loop

    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //Infinte while loop
    //int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    //do-while loop

    // do
    // {
    //     cout<<j<<"*"<<i<<"="<<i*j<<endl;
    //     i++;
    // } while (i<=10);
    
    // return 0;
// }

//Write a code which can write tables of any number (User Defined)(Using Loops)

int main(int argc, char const *argv[])
{
    int i=0,j;
    cout<<"Enter the Number whose table you want: ";
    cin>>j;
    
    for (int i = 0; i <= 10; i++)
    {
       cout<<j<<"*"<<i<<"="<<j*i<<endl;
       
    }
    
    return 0;
}
