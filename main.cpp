#include <iostream>
#include <string>
#include<stdio.h>
#include<bits/stdc++.h>
#include"VegFood.cpp"
#include"NonVegFood.cpp"
using namespace std;
int main()
{
        
    Food *p;
    VegFood VF;
    NonVegFood NFV;
    string str;
    cout<<"Choose type(veg/non-veg)"<<endl;
    cin>>str;
    if(str=="veg")
    {
        p= &VF;
        p->displayMenu();
       
        p->calculateBill();
        
    }
    else
    {
        p=&NFV;
        p->displayMenu();
        
        p->calculateBill();
    }
    
    return 0;
}

