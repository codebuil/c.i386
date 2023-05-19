#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//gcc.exe -o shell.exe shell.c

int main(int argc,char *argv[]){
	char line[4097];
	int b=0;
	FILE *f1;
	if(argc>1){
		f1=fopen(argv[1],"r");
		if(f1==NULL)f1=stdin;
	}else
	{
		f1=stdin;
	}
	printf("\ec\e[44;30m\r\n");
	line[0]=0;
	while(strstr(line,"exit")==NULL){
		if(!(argc>1))printf("\r\n$>");
		fgets(line,4096,f1);
		if(line[0]==0 || line[0]=='\n' || line[0]=='\r'){
			break;
		}else
		{
			system(line);
		} 
		if((feof(f1) && argc>1)){
			break;
		}	
	}
	if(argc>1)fclose(f1);
	return 0;

}