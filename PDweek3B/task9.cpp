#include <iostream>
using namespace std;
int main(){
int num,sum;
cout<<"Enter Four Digit Number: ";
cin>>num;
sum=(num%10)+(num%100/10)+(num%1000/100)+(num%10000/1000);
cout<<"Sum: "<<sum;
}