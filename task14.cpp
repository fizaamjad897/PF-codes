#include<iostream>
using namespace std;
void printmenu();
void student1aggregate(float matricmarks1, float intermarks1, float ecatmarks1);
void student2aggregate(float matricmarks2, float intermarks2, float ecatmarks2);
void compareaggregate(string name1, string name2);
  main()
   {  
     printmenu();
     float click1,click2,click3;
	 string name1;
	 cout<< "Enter first student name ";
	 cin>>name1;
     cout<< "Type 1 for first student's aggregate ";
     cin>>click1;
     if(click1==1)
      {
       int matricmarks1, intermarks1, ecatmarks1;
       cout<< "Enter your matric marks ";
       cin>>matricmarks1;
	   cout<< "Enter your inter marks ";
	   cin>>intermarks1;
       cout<< "Enter your ecat marks ";
       cin>>ecatmarks1;
	   student1aggregate(matricmarks1, intermarks1, ecatmarks1);
	 
      }
	  string name2;
	  cout<< "Enter second students name ";
      cin>>name2;
	  cout<< "Type 2 for second student's aggregate ";
	  cin>>click2;
	  if(click2==2)
	   {
        int matricmarks2, intermarks2, ecatmarks2;
        cout<< "Enter your matric marks ";
        cin>>matricmarks2;
	    cout<< "Enter your inter marks ";
	    cin>>intermarks2;
        cout<< "Enter your ecat marks ";
        cin>>ecatmarks2;
	    student2aggregate(matricmarks2, intermarks2, ecatmarks2);
	   }
	   cout<< "Type 3 for aggregate comparison ";
	   cin>>click3;
	   if(click3==3)
	   {  
		compareaggregate(name1, name2);
	   }
		
       }
   void student1aggregate(float matricmarks1, float intermarks1, float ecatmarks1)
   {
    float matricweightage, interweightage, ecatweightage, matricperc, interperc, ecatperc, aggregate1;
    matricperc= (matricmarks1 / 1100) * 100;
    interperc= (intermarks1 / 550) * 100;
    ecatperc= (ecatmarks1 / 400) * 100;
    matricweightage=(30 * matricperc) / 100;
    interweightage=(30 * interperc) / 100;
    ecatweightage= (40 * ecatperc) / 100;
	aggregate1= matricweightage+interweightage+ecatweightage;
    cout<< "The aggregate of first student is " <<aggregate1 <<endl;

	}
   void student2aggregate(float matricmarks2, float intermarks2, float ecatmarks2)
   {
    float aggregate2;
    float matricweightage, interweightage, ecatweightage, matricperc, interperc, ecatperc;
    matricperc= (matricmarks2/1100)*100;
    interperc= (intermarks2/550)*100;
    ecatperc= (ecatmarks2/400)*100;
    matricweightage=(30*matricperc)/100;
    interweightage=(30*interperc)/100;
    ecatweightage= (40*ecatperc)/100;
    aggregate2= matricweightage+interweightage+ecatweightage;
    cout<< "The aggregate of second student is " <<aggregate2 <<endl;
 
   }
  void compareaggregate(string name1, string name2)
   { 
       string std1, stdname1, std2, stdname2;
	   cout << "Enter first student's name ";
	   cin>>stdname1;
	   cout<< "Enter second student's name ";
	   cin>>stdname2;
	   cout<< "Enter first student's ecat marks ";
	   cin>>std1;
	   cout<< "Enter second student's ecat marks ";
	   cin>>std2;
    if (std1>std2)
     {
      cout<< "The roll number of " <<name1 <<" is 1" <<endl;
	  cout<< "The roll number of " <<name2 <<" is 2" <<endl;
     }
    cout<< "The roll number of " <<name2 << " is 1" <<endl;
    cout<< "The roll number of " <<name1 << " is 2" <<endl;	
   }
   void printmenu()
   {
   cout<< "#####################################################################" <<endl;
   cout<< "#                                                                   #" <<endl;
   cout<< "#                                                                   #" <<endl; 
   cout<< "#                                                                   #" <<endl;
   cout<< "#                                                                   #" <<endl;
   cout<< "#              UNIVERSITY ADMISSION MANAGEMENT SYSTEM               #" <<endl;                                                   
   cout<< "#                                                                   #" <<endl;
   cout<< "#                                                                   #" <<endl;
   cout<< "#                                                                   #" <<endl;
   cout<< "#                                                                   #" <<endl;
   cout<< "#####################################################################" <<endl;
   }
