#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int marks[4]={199,672,178,290};
    // marks[1]=100;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
      
    //   for (int i = 0; i < 4; i++)
    //   {
    //     cout<<"The marks are: "<<marks[i]<<endl;
    //   }
      // int i=0;
    //   while (i<4)
    //   {
    //     cout<<"The marks are: "<<marks[i]<<endl;
    //     i++;
    //   }
      
    //   do
    //   {
    //     cout<<"The marks are: "<<marks[i]<<endl;
    //     i++;
    //   } while (i<4);
      

      //Pointers and Arrays

      int *p=marks;
      cout<<*(p++)<<endl;
      cout<<*(++p)<<endl; 
    //   cout<<"The values of marks[0]: "<<*p<<endl;
    //   cout<<"The values of marks[0]: "<<*(p+1)<<endl;
    //   cout<<"The values of marks[0]: "<<*(p+2)<<endl;
    //   cout<<"The values of marks[0]: "<<*(p+3)<<endl;

    return 0;
}
