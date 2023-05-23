#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(argc,argv)
int argc;
char *argv[];
{
	if(argc>2){
		printf("\e[%s;%sf",argv[1],argv[2]);		
	}else{
		return 1;
	}
	return 0;
}