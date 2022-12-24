#include <iostream>
using namespace std;
int main(){
float sizeOfBag,costOfBag,areaCoveredByBag,oneBagCost,costPerSq;
cout<<"Enter Bag size in Pounds: ";
cin>>sizeOfBag;
cout<<"Enter cost of the bag: ";
cin>>costOfBag;
cout<<"Enter area covered by each bag in square feet: ";
cin>>areaCoveredByBag;
oneBagCost=costOfBag/sizeOfBag;
costPerSq=sizeOfBag*areaCoveredByBag;
cout<<"Cost of the fertilizer per pound: "<<oneBagCost<<endl;
cout<<"Cost of fertilizing the area per square feet: "<<costPerSq<<endl;
}