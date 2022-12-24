#include <iostream>
using namespace std;
int main(){
float oneKgs = 1/0.45;
float input;
float result;
cout<<"Enter weight in Kilograms(kgs): ";
cin>>input;
result=oneKgs*input;
cout<<"Weight in Pounds: "<<result;
}