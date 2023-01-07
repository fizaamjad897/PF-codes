#include<iostream>
using namespace std;
#include<windows.h>
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int main()
{
cout<< "Test";
gotoxy(15,15);
cout<< "My name is Muhammad Irzam";
return 0;
}