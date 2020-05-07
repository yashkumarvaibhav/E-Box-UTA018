#ifndef MY_HEADER
#define MY_HEADER
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Card{
 private:
 string accountNumber,cardNumber,cardType;
 double rewardPoints;
 public:
 Card()
 {
 
 }
 string getAccountNumber()
 {
   return accountNumber; 
 }
 void setAccountNumber( string accountNumber)
 {
   this->accountNumber=accountNumber;
 }
 string getCardNumber()
 {
   return cardNumber; 
 }
 void setCardNumber( string cardNumber)
 {
   this->cardNumber=cardNumber;
 }
 string getCardType()
 {
   return cardType; 
 }
 void setCardType( string cardType)
 {
   this->cardType=cardType;
 }
 double getRewardPoints()
 {
   return rewardPoints;
 }
 void setRewardPoints(double rp)
 {
    rewardPoints=rp;
 }
 double computeRewardPoints(double amnt)
 {
  
 }
};
#endif
