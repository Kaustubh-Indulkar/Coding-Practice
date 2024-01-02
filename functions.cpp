//functions and function prototypes

#include<iostream>
using namespace std;

//function
 int sum(int a, int b){
    int c=a+b;
    return c;
}

//function prototypes
//type function-name(arguments);
int sum(int, int);
void g(void);
int main()

{
    int num1,num2;
    cout<<"Enter no.1 : "<<endl;
    cin>>num1;
    cout<<"Enter no.2: "<<endl;
    cin>>num2;
    cout<<"Answer: "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

void g(){
    cout<<"Hello";
}
