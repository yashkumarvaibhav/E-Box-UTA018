#include<iostream>
#include<stdio.h>
#include<string>
#include "Card.h"
using namespace std;
class VISACard : public Card// fill the code
{
public:
// fill the code
double computeRewardPoints(double amount) 
{
    double d=getRewardPoints()+0.01*amount;
    setRewardPoints(d);
    return d;
}
};
