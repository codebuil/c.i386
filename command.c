#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//bcc -ansi -o hello hello.c
int main(argc,argv)
int argc;
char *argv[];
{
	char line[4097];
	FILE *f1;
	line[0]=0;
	if(argc>1){
		f1=fopen(argv[1],"r");
		if(f1==NULL)f1=stdin;
	}
	else
	{
		f1=stdin;
	}
	printf("\033c\033[41;30m\n\n");
	while(strstr(line,"exit")==NULL)
	{
		if(!(argc>1))printf("\n$>");
		fgets(line,4096,f1);
		if(line[0]=='\n' || line[0]=='\r' || line[0]==0)break;
		system(line);
	}
	if(argc>1)fclose(f1);
	return 0;
}
