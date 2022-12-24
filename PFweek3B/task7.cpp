#include <iostream>
using namespace std;
int main(){
double numOfBits;
double numOfBytes;
double numOfKiloBytes;
double numOfMegaBytes;
cout<<"Enter amount of bit: ";
cin>>numOfBits;
numOfBytes=numOfBits/8;
numOfKiloBytes=numOfBytes/1024;
numOfMegaBytes=numOfKiloBytes/1024;
cout<<"number of bytes in "<<numOfBits<<" are: "<<numOfBytes<<endl;
cout<<"number of kilo bytes in "<<numOfBits<<" are: "<<numOfKiloBytes<<endl;
cout<<"number of Mega bytes in "<<numOfBits<<" are: "<<numOfMegaBytes;
}