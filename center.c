#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(argc,argv)
int argc;
char *argv[];
{
	int conms=80;
	int i;
	int n;
	char c[1080];
	if (argc>1){
		i=(conms/2)-(strlen(argv[1]))/2;
		if(i<1075){
			for(n=0;n<i+1;n++){
				c[n]=32;
			}
			c[i]=0;
			printf("%s",c);
		}
		printf("%s\n",argv[1]);
	}else{	
		printf("");
	}
	return 0;
}