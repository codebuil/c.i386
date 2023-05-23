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
	if (argc>2){
		i=atoi(argv[2]);
		iii=strlen(argv[1]);
		if (iii<2070){
			strcpy(c,argv[1]);
			if (i<iii){
				i=iii-i;				
				cc=c+i;
				printf("%s",cc);
			}
		} 
		
	}else{	
		printf("");
	}
	return 0;
}