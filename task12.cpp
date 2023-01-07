#include<iostream>
using namespace std;
float originalprice(float redrosep, float whiterosep, float tulipp);
void discprice(float overalltotal);
 main()
  {
    float overalltotal;
    float redrosep=2.00;
	float whiterosep=4.10;
	float tulipp=2.50;
	overalltotal= originalprice(redrosep, whiterosep, tulipp);
	cout<< "The Original price is "<<overalltotal <<endl;
	discprice(overalltotal);
  }
  float originalprice(float redrosep, float whiterosep, float tulipp)
  {
    float totalrr, totalwhiterose, totaltulip;
    int noredrose, nowhiterose, notulip;
	cout<< "Enter number of red roses ";
	cin>>noredrose;
	cout<< "Enter number of white roses ";
	cin>>nowhiterose;
	cout<< "Enter number of tulips ";
	cin>>notulip;
	totalrr= noredrose * redrosep;
	totalwhiterose= nowhiterose * whiterosep;
	totaltulip= notulip * tulipp;
	return totalrr + totalwhiterose + totaltulip;
  }
  void discprice(float overalltotal)
   {
    float discperc, remaining;
    if(overalltotal>200)
     {
	 remaining = overalltotal * 0.2;
	 discperc= overalltotal - remaining;
	 cout<< "The Payable amount is " <<discperc;
	 }
   }
