#include<curses.h>
#include<pthread.h>
#include<signal.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


// vars
pthread_t th1, th2;
int iret1, iret2;


// funcs
void shandler(int s_num)	// didnt work
{
	signal(SIGTSTP, shandler);
	prinf("No Way");
}


void *blank_screen()
{
	signal(SIGTSP,P4%W
)
	while(1)
	{
		system("xset c off dpms force off");
	}
}


void *check_input()
{
	char a[4];
	char *k = a;
	int n = 4;
	
	initscr();
	while(1)
	{
		getnstr(k, n);
		if (strncmp(a, "pswd", n) == 0)
		{
			endwin();
			exit(0);
		}
	}
}


int main(int argc, char **argv)
{
	iret1 = pthread_create(&th1, NULL, blank_screen, NULL);
	iret2 = pthread_create(&th1, NULL, check_input, NULL);
	
	pthread_join(th1, NULL);
	pthread_join(th2, NULL);			
}
