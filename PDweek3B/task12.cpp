#include <iostream>
using namespace std;
int main(){
int num,sum;
cout<<"Enter Four Digit Number: ";
cin>>num;
sum=(num%10)+(num%100/10)+(num%1000/100)+(num%10000/1000)+(num%100000/10000)+(num%1000000/100000)+(num%10000000/1000000)+(num%100000000/10000000);
cout<<"Sum: "<<sum;
}