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
	char c[2080];
	char *cc;
	if(argc>1){
		i=strlen(argv[1]);
		if (i<2070){
			strcpy(c,argv[1]);
			cc=strstr(c,".");
			if (cc!=NULL){
				cc[0]=32;
			}
		}else{
			return 1;
		}
		printf("%s",c);
	}
	return 0;
}