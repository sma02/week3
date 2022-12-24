#include <iostream>
using namespace std;
int main(){
float vegPrice,fruPrice,earnings;
float coin=1.94;
int vegKgs,fruKgs;
cout<<"Enter vegetable price per kilogram: ";
cin>>vegPrice;
cout<<"Enter fruit price per kilogram: ";
cin>>fruPrice;
cout<<"Enter total kilograms of vegetables: ";
cin>>vegKgs;
cout<<"Enter total kilograms of fruits: ";
cin>>fruKgs;
earnings=((vegPrice*vegKgs)+(fruPrice*fruKgs))/coin;
cout<<"total earnings Rps are: "<<earnings;
}