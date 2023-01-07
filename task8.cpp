#include<iostream>
using namespace std;
void comparison(int number1, int number2);
 main()
 {
  int number1,number2;
  cout<< "Enter first number ";
  cin>>number1;
  cout<< "Enter second number ";
  cin>>number2;
  comparison(number1,number2);
 }
 void comparison(int number1, int number2)
 {
  if (number1 == number2)
   {
     cout<< "true";
   }
  if (number1 != number2)
   {
   cout<< "false";
   }
 }