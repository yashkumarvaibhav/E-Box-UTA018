#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include"Food.h"
using namespace std;
class NonVegFood:public Food
{
        public:
    void displayMenu(){
		cout<<"Non-Veg Food Items"<<endl;
        cout<<"S.no           Name                     Cost                     "<<endl;
        cout<<"1              Chicken Briyani          80                       "<<endl;
        cout<<"2              Chicken Fried-rice       90                       "<<endl;
        cout<<"3              Chicken Fry              100                      "<<endl;
        cout<<"4              Chicken noodles          80                       "<<endl;
        cout<<"5              Non-Veg Meals            70                       "<<endl;
	}
	void calculateBill(){
	        int number,choice,cost;
        int Totalcost=0;
        string str2;
        
            while(str2!="no")
            {
                cout<<"Enter the S.no of the food to order"<<endl;
                cin>>choice;
                
            switch(choice)
            {
                case 1:
                {
                    cout<<"Enter the no. of items"<<endl;
                    cin>>number;
                    cost=number*80;
                    cout<<"Cost of "<<number<<" Chicken Briyani is Rs."<<cost<<endl;
                    cout<<"Do you want order more items?(yes/no)"<<endl;
                    cin>>str2;
                    
                    break;
                }
                case 2:
                {
                    cout<<"Enter the no. of items"<<endl;
                    cin>>number;
                    cost=number*90;
                    cout<<"Cost of "<<number<<" Chicken Fried-rice is Rs."<<cost<<endl;
                    cout<<"Do you want order more items?(yes/no)"<<endl;
                    cin>>str2;
                    break;
                }
                case 3:
                {
                    cout<<"Enter the no. of items"<<endl;
                    cin>>number;
                    cost=number*100;
                    cout<<"Cost of "<<number<<" Chicken Fry is Rs."<<cost<<endl;
                    cout<<"Do you want order more items?(yes/no)"<<endl;
                    cin>>str2;
                    break;
                }
                case 4:
                {
                    cout<<"Enter the no. of items"<<endl;
                    cin>>number;
                    cost=number*80;
                    cout<<"Cost of "<<number<<" Chicken noodles is Rs."<<cost<<endl;
                    cout<<"Do you want order more items?(yes/no)"<<endl;
                    cin>>str2;
                    break;
                }
                case 5:
                {
                    cout<<"Enter the no. of items"<<endl;
                    cin>>number;
                    cost=number*70;
                    cout<<"Cost of "<<number<<" Non-Veg Meals is Rs."<<cost<<endl;
                    cout<<"Do you want order more items?(yes/no)"<<endl;
                    cin>>str2;
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

