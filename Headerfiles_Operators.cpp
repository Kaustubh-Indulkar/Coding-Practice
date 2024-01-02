/*There are 2 types of Header files
(1)System Defined Header files: It comes with the Compiler*/
#include<iostream>
/*(2)User Defined Header Files: It is Written by the Programmer */
/*#include "this.h"-->It should be present in Current Directory(there should be a file that should have the same name as that of the header file)*/
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the value of a: "; /*'<<'is called as Insertion Operator*/
    cin>>a; /*'>>'is called as Extraction Operator*/
    
    cout<<"Enter the value of b: "; /*'<<'is called as Insertion Operator*/
    cin>>b; /*'>>'is called as Extraction Operator*/

   //Arithematic Operators
    cout<<"Operators in C++"<<endl;
    cout<<"The value  of the a+b is :"<<a+b<<endl;
    cout<<"The value  of the a-b is :"<<a-b<<endl;
    cout<<"The value  of the a*b is :"<<a*b<<endl;
    cout<<"The value  of the a/b is :"<<a/b<<endl;
    cout<<"The value  of the a%b is :"<<a%b<<endl;
    cout<<"The value  of the a++ is :"<<a++<<endl;
    cout<<"The value  of the a-- is :"<<a--<<endl;
    cout<<"The value  of the ++a is :"<<++a<<endl;
    cout<<"The value  of the --a is :"<<--a<<endl;
    cout<<endl;
    
    /*Asignment Opertors=>Used to assign values to the variables
    int a=5,b=7
    char a='Kaustubh';
    */

   //Comparison Operators=>Used to Compare
    cout<<"The value  of the a==b is :"<<(a==b)<<endl;
    cout<<"The value  of the a>b is :"<<(a>b)<<endl;
    cout<<"The value  of the a<b is :"<<(a<b)<<endl;
    cout<<"The value  of the a>=b is :"<<(a>=b)<<endl;
    cout<<"The value  of the a<=b is :"<<(a<=b)<<endl;
    cout<<"The value  of the a!= is :"<<(a!=b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"The value  of the logical operator 'AND' ((a==b)&&(a>b)) is :"<<((a==b)&&(a>b))<<endl;
    cout<<"The value  of the logical operator 'OR' ((a==b)||(a<b)) is :"<<((a==b)||(a<b))<<endl;
    cout<<"The value  of the logical operator 'NOT'(!(a==b)) is :"<<(!(a==b))<<endl;

return 0;
}