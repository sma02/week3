#include <iostream>
using namespace std;
int main(){
string name;
int ecat,matric,intermediate;
float percentEcat,percentMatric,percentIntermediate,aggregate;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your ECAT marks: ";
cin>>ecat;
cout<<"Enter your Matric marks: ";
cin>>matric;
cout<<"Enter your Intermediate marks: ";
cin>>intermediate;
percentEcat=ecat*100/400;
percentMatric=matric*100/1100;
percentIntermediate=intermediate*100/550;
aggregate=(percentEcat*50/100)+(percentMatric*10/100)+(percentIntermediate*40/100);
cout<<"aggregate for Applicant "<<name<<" is :"<<aggregate;
}