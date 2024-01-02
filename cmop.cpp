//Constants , Manipulators and Operator Precedence

#include<iostream>
// another manipulator is a header file called <iomanip>
#include<iomanip>

using namespace std;

// int main()
// {
//     int a=76;
//     cout<<"The value of a was: "<<a<<endl;
//     a=7;
//     cout<<"Now the value of a is: "<<a<<endl;
//     return 0;
// }

/************Constants***************/

// int main()
// {
//     const int thala=7;
//     cout<<"The Jersey No of Thala is : "<<thala<<endl;  
//     thala=100;
//     cout<<"The Jersey No of Thala is: "<<thala<<endl;   
//     return 0;
// }

/*********Manipulators*************/

//endl------>manipulator
// int main()
// {
//     int vk= 181,ash=999,dhoni=7000;
//     cout<<"With 'setw'"<<endl;
//     cout<<"Jersey no of vk is: "<<setw(4)<<vk<<endl;
//         cout<<"Jersey no of ash is: "<<setw(4)<<ash<<endl;
//             cout<<"Jersey no of dhoni is: "<<setw(4)<<dhoni<<endl;

//     cout<<"without 'setw'"<<endl;
//     cout<<"Jersey no of vk is: "<<vk<<endl;
//         cout<<"Jersey no of ash is: "<<ash<<endl;
//             cout<<"Jersey no of dhoni is: "<<dhoni<<endl;

int main()
{
    // int h=89, j=90;
    // int f=(((((h*99)-j)+19)-78)+1);
    // cout<<f;
    // return 0;

    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c=(((((a/56)+b)-167)+890)+b);
    cout<<"The value of c is: "<<c<<endl;
 return 0;
}
       
   

