#include<iostream>
#include<stdio.h>
#include<string>
#include "Card.h"
using namespace std;
class HPVISACard :public Card // fill the code
{
public:
double computeRewardPoints(double amnt)
 {
     
     // fill the code
     string purpose;
     cout<<"Enter purpose of transaction"<<endl;
     cin>>purpose;
     if(purpose.compare("Fuel")==0||purpose.compare("fuel")==0)
     {
         double d=amnt*0.01+getRewardPoints()+10;
         setRewardPoints(d);
         return d;
     }
     else
     {
         double d=amnt*0.01+getRewardPoints();
         setRewardPoints(d);
         return d;
     }
     
 }
};
