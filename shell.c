#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//gcc.exe -o shell.exe shell.c

int main(){
	char line[4097];
	printf("\ec\e[44;30m\r\n");
	line[0]=0;
	while(strstr(line,"exit")==NULL){
	printf("\r\n$>");
	fgets(line,4096,stdin);
	system(line); 	
	}
	return 0;

}