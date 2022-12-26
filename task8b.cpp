#include <iostream>
using namespace std;
main()
{
int num1,num2,num3,digit4;
cout <<"Enter 4 digit number: ";
cin >>digit4;
num1=digit4%10;
digit4=digit4/10;
num2=digit4%10;
digit4=digit4/10;
num3=digit4%10;
digit4=digit4/10;
cout <<"SUM="<<num1+num2+num3+digit4;



}