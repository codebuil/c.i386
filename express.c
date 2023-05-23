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
	if (argc>1){
		if (strcmp(argv[1],"0")==0){
			return 1;
		}else{
			return 0;			
		}
	}else{	
		return 1;		
		
	}
	return 1;
}