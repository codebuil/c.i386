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
	int iiii;
	int n;
	char c[2080];
	char c1[2080];
	char *cc;
	if(argc>2){
		ii=strlen(argv[1]);
		i=strlen(argv[2]);
		if(ii<1070 && i<1070){
			strcpy(c,argv[1]);
			strcpy(c1,argv[2]);
			iii=0;
			for(n=0;n<ii;n++){
				c[n]=c[n]+c1[iii];
				iii++;
				if(iii>=i)iii=0;
			}
			printf("%s",c);
		}else{
			return 1;
		}
	}else{
		return 1;
	}
	return 0;
}