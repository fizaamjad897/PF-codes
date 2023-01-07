#include<iostream>
using namespace std;
void airline(int price, string countname);
 main()
 {
 int price;
 string countname;
 cout<< "Enter your ticket price ";
 cin>>price;
 cout<< "Enter your country name ";
 cin>>countname;
 airline(price,countname);
 }
 void airline(int price, string countname)
 {
   int remaining;
   int discprice;
   if(countname == "Pakistan")
    {
     remaining= 0.05 * price;
	 discprice= price - remaining;
     cout<< "The price after discout is " <<discprice;	  
    }
   if(countname == "Ireland")
	{
	 remaining= 0.1 * price;
	 discprice= price - remaining;
	 cout<< "The price after discount is " <<discprice;
	}
   if(countname == "India")
    {
	 remaining= 0.2 * price;
	 discprice= price - remaining;
	 cout<< "The price after discount is " <<discprice;
	}
   if(countname == "England")
    {
	 remaining= 0.3 * price;
	 discprice= price - remaining;
	 cout<< "The price after discount is " <<discprice;
	}
   if(countname == "Canada")
    {
	 remaining= 0.45 * price;
	 discprice= price - remaining;
	 cout<< "The price after discount is " <<discprice;
	}   
 }
 
