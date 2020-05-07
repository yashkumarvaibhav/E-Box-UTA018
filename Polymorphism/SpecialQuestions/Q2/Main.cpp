#include<iostream>
#include<stdio.h>
#include<string>
#include<list>
#include<iterator>
#include <limits>
#include <ios>
#include <iomanip>
#include "VISACard.cpp"
#include "HPVisaCard.cpp"
using namespace std;
int main(){
int n,i;
string str;
double points;
cout<<"Enter number of transactions\n";
cin>>n;
// fill the code
int c=0;
 cin.ignore(numeric_limits<streamsize>::max(),'\n');
 Card obj[n];
for(i=0;i<n;i++)
{
 cout<<"Enter card type Visa or HPVisa\n";
 cin>>str;
 if(str.compare("Visa")==0)
   {
       
     VISACard visaObj;
     visaObj.setCardType(str);
     cout<<"Enter card number\n";
     cin>>str;
     visaObj.setCardNumber(str);
     cout<<"Enter account number\n";
     cin>>str;
     visaObj.setAccountNumber(str);
     cout<<"Enter reward points\n";
     cin>>points;
     visaObj.setRewardPoints(points);
     cout<<"Enter transaction amount\n";
     cin>>points;
     // fill the code
     double d=visaObj.computeRewardPoints(points);
     visaObj.setRewardPoints(d);
     obj[c]=visaObj;
     c++;
   }
 else  if(str.compare("HPVisa")==0)
   {
     HPVISACard hpObj;
     hpObj.setCardType(str);
     cout<<"Enter card number\n";
     cin>>str;
     hpObj.setCardNumber(str);
     cout<<"Enter account number\n";
     cin>>str;
     hpObj.setAccountNumber(str);
     cout<<"Enter reward points\n";
     cin>>points;
     hpObj.setRewardPoints(points);
     cout<<"Enter transaction amount\n";
     cin>>points;
     // fill the code
     double d=hpObj.computeRewardPoints(points);
     hpObj.setRewardPoints(d);
     obj[c]=hpObj;
     c++;
   }
 else
   {
   cout<<"Sorry no reward points for other type of cards\n";
   }     
}
// fill the code
if(c>0)
 printf("%-25s%-25s%-25s%-40s\n","Account Number","Card Number","Card Type","Reward Points"); 
for(i=0;i<c;i++)
{
    cout<<setw(25)<<setiosflags(ios::left)<<obj[i].getAccountNumber();
    cout<<setw(25)<<setiosflags(ios::left)<<obj[i].getCardNumber();
    cout<<setw(25)<<setiosflags(ios::left)<<obj[i].getCardType();
    printf("%-.2f\n",obj[i].getRewardPoints());
}
return 0;
}
