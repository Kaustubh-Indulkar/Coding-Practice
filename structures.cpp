//Structures, Union, Enum
#include <iostream>
using namespace std;
//structure
// typedef struct employee
// {
//     /* data */
//     int id;
//     char name;
//     float salary;
// }ep;

// //Union
// union rasan
// {
//     /* data */
//     int rice;
//     char car;
//     float pounds;
// };


int main( )
{
    
    // ep watson;
    // // struct employee steve;
    // // struct employee warner;

    // watson.id=1;
    // watson.name='y';
    // watson.salary=33;

    // cout<<"id: "<<watson.id<<endl;
    //     cout<<"name: "<<watson.name<<endl;
    //         cout<<"salary: "<<watson.salary<<endl;

// union rasan m1;
// m1.rice=56;
// //m1.car='s';
// cout<<m1.rice<<endl;

enum meal{breakfast,lunch,dinner};
meal m1=dinner;
meal m2=breakfast;
meal m3=lunch;
cout<<(m2==0);
    return 0;
}
