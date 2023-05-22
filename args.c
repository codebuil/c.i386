#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc,char *argv[]){
	int i;
	int ii;
	int iii;
	int n;
	char *cc;
	if(argc>2){
		ii=0;
		i=argc;
		ii=atoi(argv[1]);
		ii=ii+2;
		if(ii<i){
			printf("%s",argv[ii]);
		}else{
			return 1;
		}
	}else{
		return 1;
	}
	return 0;
}