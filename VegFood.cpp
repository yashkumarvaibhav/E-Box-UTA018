#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Food.h"
using namespace std;
class VegFood:public Food
{
    
    public:
    void displayMenu(){
		cout<<"Veg Food Items"<<endl;
        cout<<"S.no           Name                     Cost                     "<<endl;
        cout<<"1              Idly                     10                       "<<endl;
        cout<<"2              Dosa                     20                       "<<endl;
        cout<<"3              Chappathi                12                       "<<endl;
        cout<<"4              Veg noodles              60                       "<<endl;
        cout<<"5              Veg Meals                50                       "<<endl;
	}
	void calculateBill(){
		
        
	 string str1;
        int choice,number,cost;
        int Totalcost=0;
        
        while(str1!="no")
        {
            cout<<"Enter the S.no of the food to order"<<endl;
            cin>>choice;
            
        switch (choice) {
            case 1:
            {
                cout<<"Enter the no. of items"<<endl;
                cin>>number;
                cost=number*10;
                cout<<"Cost of "<<number<<" Idly is Rs."<<cost<<endl;
                cout<<"Do you want order more items?(yes/no)"<<endl;
                cin>>str1;
                break;
            }
            case 2:
            {
                cout<<"Enter the no. of items"<<endl;
                cin>>number;
                cost=number*20;
                cout<<"Cost of "<<number<<" Dosa is Rs."<<cost<<endl;
                cout<<"Do you want order more items?(yes/no)"<<endl;
                cin>>str1;
                break;
            }
            case 3:
            {
                cout<<"Enter the no. of items"<<endl;
                cin>>number;
                cost=number*12;
                cout<<"Cost of "<<number<<" Chappathi is Rs."<<cost<<endl;
                cout<<"Do you want order more items?(yes/no)"<<endl;
                cin>>str1;
                break;
            }
            case 4:
            {
                cout<<"Enter the no. of items"<<endl;
                cin>>number;
                cost=number*60;
                cout<<"Cost of "<<number<<" Veg Noodles is Rs."<<cost<<endl;
                cout<<"Do you want order more items?(yes/no)"<<endl;
                cin>>str1;
                break;
            }
            case 5:
            {
                cout<<"Enter the no. of items"<<endl;
                cin>>number;
                cost=number*50;
                cout<<"Cost of "<<number<<" Veg Meals is Rs."<<cost<<endl;
                cout<<"Do you want order more items?(yes/no)"<<endl;
                cin>>str1;
                break;
            }
                
            default:
                break;
         }
            
            Totalcost=Totalcost+cost;
      }
       
        cout<<"Total Order Amount is Rs."<<Totalcost<<endl;
    }
};

