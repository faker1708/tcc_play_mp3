#include<windows.h>
int main()
{
	mciSendString("play a.mp3 wait", 0, 0, 0);
}
/* 

tcc a.c -lwinmm

*/