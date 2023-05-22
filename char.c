#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(argc,argv)
int argc;
char *argv[];
{
	int conms=80;
	int i;
	int ii;
	int iii;
	int n;
	char c[2080];
	if (argc>2){
		i=atoi(argv[1]);
		strcpy(c,"");
		ii=strlen(argv[2]);
		if(i*ii<2070){
			for(n=0;n<i+1;n++){
				strcat(c,argv[2]);
			}
			printf("%s",c);
		}
	}else{	
		printf("");
	}
	return 0;
}