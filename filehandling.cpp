#include<stdio.h>
int main(){
	int code;
	char name[10];
	FILE *fp;
	fp=fopen("fh.txt","w");
	printf("Enter code and name\n");
	scanf("%d%s",&code,&name);
	fprintf(fp,"%d%s",code,name);
	fclose(fp);
	fp=fopen("fh.txt","r");
	fscanf(fp,"%d%s",&code,&name);
	printf("%d %s",code,name);
	fclose(fp);
}
