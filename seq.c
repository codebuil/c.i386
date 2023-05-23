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
	if(argc>3){
		i=atoi(argv[1]);
		ii=atoi(argv[2]);
		iii=atoi(argv[3]);
		if (iii>0 && i<ii && i>-1){
			for(n=i;n<ii;n=n+iii) printf("%d ",n);		
		}

	}
	return 0;
}