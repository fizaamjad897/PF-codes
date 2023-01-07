#include<iostream>
#include<windows.h>
using namespace std;
void printname();
void gotoxy(int x,int y);
  main()
  {
   printname();
   gotoxy(30,17);
  }
  void gotoxy(int x,int y)
  {
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }
  void printname()
 {
 system("cls");
 gotoxy(30,17);
 cout<< "fffffffffffff   iiii  zzzzzzzzzzz             a           " <<endl;
 gotoxy(30,18);
 cout<< "fffffffffffff   iiii  zzzzzzzzzz             a a          " <<endl;
 gotoxy(30,19);
 cout<< "ffff            iiii         zz             aa aa         " <<endl;
 gotoxy(30,20);
 cout<< "ffff            iiii        zz             aa   aa        " <<endl;
 gotoxy(30,21);
 cout<< "fffffffffff     iiii       zz             aa     aa       " <<endl;
 gotoxy(30,22);
 cout<< "fffffffffff     iiii      zz             aaaaaaaaaaa      " <<endl;
 gotoxy(30,23);
 cout<< "ffff            iiii     zz             aaaaaaaaaaaaa     " <<endl;
 gotoxy(30,24);           
 cout<< "ffff            iiii    zz             aa           aa    " <<endl;
 gotoxy(30,25);
 cout<< "ffff            iiii   zz             aa             aa   " <<endl;
 gotoxy(30,26);
 cout<< "ffff            iiii  zzzzzzzzzzz    aa               aa  " <<endl;
 gotoxy(30,27);
 cout<< "ffff            iiii  zzzzzzzzzzz   aa                 aa " <<endl;                  
 }
  
  
