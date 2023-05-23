#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(argc,argv)
int argc;
char *argv[];
{
	int i;
	int ii;
	int iii;
	char c[2080];
	char *cc;
	if (argc>1){
		iii=strlen(argv[1]);
		if (iii<2070){
			strcpy(c,argv[1]);
			for(i=0;i<iii;i++){
				c[i]=tolower(c[i]);
			}
			printf("%s",c);
		} 
		
	}else{	
		printf("");
	}
	return 0;
}