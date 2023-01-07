#include<iostream>
using namespace std;
void comparison(string input);
 main()
  {
   string input;
   cout<< "Enter input as true or false ";
   cin>>input;
   comparison(input);
  }
 void comparison(string input)
  {
   if(input == "true")
    {
	 cout<< "false";
	}
	if(input == "false")
	{
	 cout<< "true";
	}
  }
 