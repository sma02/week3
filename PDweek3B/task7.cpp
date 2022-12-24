#include <iostream>
using namespace std;
int main(){
string movieName;
float adultTicketPrice,childTicketPrice,donatePercentage,amountGen,amountOfCharity,amountAfterDonate;
int noAdultTicketsSold,noChildTicketsSold;
cout<<"Enter Movie Name: ";
cin>>movieName;
cout<<"Enter Adult Ticket Price: ";
cin>>adultTicketPrice;
cout<<"Enter Child Ticket Price: ";
cin>>childTicketPrice;
cout<<"Enter Number of Adult Ticket Sold: ";
cin>>noAdultTicketsSold;
cout<<"Enter Number of Child Ticket Sold: ";
cin>>noChildTicketsSold;
cout<<"Enter Percentage to Donate: ";
cin>>donatePercentage;
amountGen=(adultTicketPrice*noAdultTicketsSold)+(childTicketPrice*noChildTicketsSold);
amountOfCharity=amountGen*donatePercentage/100;
amountAfterDonate=amountGen-amountOfCharity;
cout<<"___________________________"<<endl;
cout<<"Total Amount Generated: "<<amountGen<<endl;
cout<<"Amount after donation: "<<amountAfterDonate;

}