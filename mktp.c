#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(argc,argv)
int argc;
char *argv[];
{
	int i;
	int ii;
	int iii;
	int n;
	char r;
	char cc[]="abcdefghijklmnopqrstuvwxyz0123456789000000000000";
	char c[24];
	srand(time(NULL));
	for(n=0;n<12;n++){
		if (n==8){
			r='.';
			c[n]='.';
		}else{
			r=(char)((char) rand())/7;
		c[n]=cc[r];
		}

	}
	c[12]=0;
	printf("/tmp/%s",c);
	return 0;
}