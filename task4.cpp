#include <iostream>
using namespace std;
main(){

int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float marks;
float percentage;

cout<<"enter sub 1 marks:";
cin>>subject1;
cout<<"enter sub 2 marks:";
cin>>subject2;
cout<<"enter sub 3 marks:";
cin>>subject3;
cout<<"enter sub 4 marks:";
cin>>subject4;
cout<<"enter sub 5 marks:";
cin>>subject5;
marks=subject1+subject2+subject3+subject4+subject5;
percentage=(marks/500*100);
cout<<"result:"<<percentage;
}