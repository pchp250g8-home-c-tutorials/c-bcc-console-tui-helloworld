#include <stdio.h>
#include <tchar.h>
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
   _setcursortype(_NOCURSOR);
   clrscr();
   gotoxy(10,10);
   cprintf("%s","Hello,World!!!");
   gotoxy(11,10);
   cprintf("%s","Conio Library");
   getch();
}
