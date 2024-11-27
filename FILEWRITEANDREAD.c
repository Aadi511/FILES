#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i;
	FILE * fp;
	char c[100];
	fgets(c,sizeof(c), stdin);
	fp = fopen("INPUT.txt", "w");
	if(fp == NULL){
		printf("Error opening file for writing!\n");
		return 1;
	}
	fprintf(fp, "%s", c);
	fclose(fp);
	int n = strlen(c);
	
	fp = fopen("INPUT.txt", "r");
	if(fp == NULL){
		printf("Error opening file for writing!\n");
		return 1;
	}	
	printf("Reading data");
	for(i=0;(c[i] = fgetc(fp))!= EOF;i++){
		printf("%c", c[i]);
	}
	fclose(fp);
	return 0;
}
