#include <iostream>
using namespace std;
int main(){
int num;
cout<<"Enter number: ";
cin>>num;
cout<<(num%100000/10000)<<" "<<(num%10000/1000)<<" "<<(num%1000/100)<<" "<<(num%100/10)<<" "<<(num%10);
}