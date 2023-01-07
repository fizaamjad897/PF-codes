#include<iostream>
using namespace std;
void calculate(int holidays);
 main()
  {
   int holidays;
   cout<< "Enter number of holidays ";
   cin>>holidays;
   calculate(holidays);

  }
  void calculate(int holidays)
   { 
     int workingdays,timeofw_d, timeofhol, totaltime,diffofnorm, hours,mins;
	 workingdays= 365 - holidays;
	 timeofw_d= 63 * workingdays;
	 timeofhol= 127 * holidays;
	 totaltime= timeofhol + timeofw_d;
	  if (totaltime<30000)
      {
	     diffofnorm= 30000 - totaltime;
	   	  hours= diffofnorm/60;
	      mins = diffofnorm%60;
	  }
	  if (totaltime>30000)
	  {
	   diffofnorm= (totaltime - 30000);
	   	hours= (diffofnorm)/60;
	    mins = (diffofnorm)%60;
	  }

	 if(holidays < 100)
	  {
	    cout<< "Tom sleeps well" <<endl;
		cout<<hours <<" hours and " <<mins <<" minutes less for play";
	  }
	 if(holidays > 100) 
	  {
	    cout<< "Tom will run away" <<endl;
	    cout<<hours << "hours and " <<mins << "minutes for play";
	  }	 
   }
