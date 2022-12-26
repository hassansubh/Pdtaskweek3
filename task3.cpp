#include <iostream>
usning namespace std;
int main(){

float initialVelocity;
float acceleration;
float time;
float finalVelocity;

cout <<"enter initial velocity:";
cin>>initialVelocity;
cout <<"enter acceleration:";
cin>>acceleration;
cout<<"enter time";
cin>>time;
finalVelocity=(acceleration*time)+initialVelocity;
cout<<"result:"<<finalVelocity;
}