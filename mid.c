#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(argc,argv)
int argc;
char *argv[];
{
	int i;
	int ii;
	int iii;
	char c[2080];
	char *cc;
	if (argc>3){
		i=atoi(argv[2]);
		ii=atoi(argv[3]);
		iii=strlen(argv[1]);
		if (iii<2070){
			strcpy(c,argv[1]);
			if (i<2070){
				cc=c+i;
				if (ii+i<2070) cc[ii]=0;
				printf("%s",cc);
			}
		} 
		
	}else{	
		printf("");
	}
	return 0;
}