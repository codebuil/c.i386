#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(argc,argv)
int argc;
char *argv[];
{
	if (argc>1){
		printf("%d",strlen(argv[1]));
	}else{	
		printf("0");
	}
	return 0;
}