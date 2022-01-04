#include<iostream>
using namespace std;

 int main()
 {
    int age;
        cout<<"whats your age \n";
     cin>>age;

switch (age)
{
case 18:
    cout<<"you are 18 years old \n";
    break;

case 25:
cout<<"you are 25 years old \n";
break;

case 100:
cout<<"gud by tata \n ";
break;


default:
cout<<"not match";
break;

}

    return 0;
}