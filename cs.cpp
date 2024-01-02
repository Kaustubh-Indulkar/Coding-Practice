//Control Structures , if-else statements,switch case statements

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Your Age"<<endl;
    cin>>age;

    // If-else if ladder--->Selection Control Structure
    // if(age==18)
    // {
    //     cout<<"You can Vote"<<endl;
    // }
    // else if((age<18)&&(age>0))
    // {
    //     cout<<"You cant Vote"<<endl;
    // }
    //  else if(age<1)
    // {
    //     cout<<"Baith jao beta!! Bhot kuch dekhna hai zindagi mai tumhe!"<<endl;
    // }
    // else
    // {
    //     cout<<"Chai Piyo Biscuit Khao"<<endl;
    // }

    //Switch Case-->Selection Control Structure

    switch (age)
    {
    case 1:
        cout<<"AHHHH Bhai Aagaya Swaad?"<<endl;
        break;
   
     case 2:
        cout<<"Aukaat Mai Raho"<<endl;
        break;
    
     case 3:
        cout<<"Jyada Uchlo Mat!!"<<endl;
        break;
     
    default:
    cout<<"Error 404"<<endl;
        break;  
    }
    cout<<"Apka Bhot Bhot Shurkirya!!"<<endl;
    return 0;

}                