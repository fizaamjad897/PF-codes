#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void playerMove(int x,int y);
void gotoxy(int x,int y);
  main()
 {
   system("cls");
   printMaze();
   int x = 3;
   int y = 3;
   while(true)
    {
     playerMove(x,y);
     if(x < 20)
      {
        x=x + 1;
      }
     if (x == 20)
     {
        gotoxy(x-1,y);
        cout<< " ";
        x=3;
     }
    }
 }
void playerMove()
{

}
 void printMaze()
  {
   cout<< "##########################################################" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "#                                                        #" <<endl;
   cout<< "##########################################################" <<endl;
  }
 void gotoxy(int x,int y)
  {
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }