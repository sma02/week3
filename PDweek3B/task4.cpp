#include <iostream>
using namespace std;
int main(){
float s1,s2,s3,s4,s5,result;
string name;
cout<<"Enter your Name: ";
cin>>name;
cout<<"Enter subject 01 marks: ";
cin>>s1;
cout<<"Enter subject 02 marks: ";
cin>>s2;
cout<<"Enter subject 03 marks: ";
cin>>s3;
cout<<"Enter subject 04 marks: ";
cin>>s4;
cout<<"Enter subject 05 marks: ";
cin>>s5;
result=(s1+s2+s3+s4+s5)*100/500;
cout<<"Your percentage: "<<result;
}