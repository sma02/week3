#include <iostream>
using namespace std;
int main(){
float initialVelocity,finalVelocity,acceleration,time;
cout<<"Enter Initial Velocity: ";
cin>>initialVelocity;
cout<<"Enter Acceleration: ";
cin>>acceleration;
cout<<"Enter Time: ";
cin>>time;
finalVelocity=initialVelocity+(acceleration*time);
cout<<"Final Velocity: "<<finalVelocity;
}