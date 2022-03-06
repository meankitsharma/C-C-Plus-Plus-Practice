#include<stdio.h>
int main(){
	FILE *fp;
	char c;
	printf("Write the file name to open\n");
	fp=fopen("good.txt","w");
	fprintf(fp,"Hi ankit want to insert something ?");
	fclose(fp);
	fp=fopen("good.txt","r");
	if(fp==NULL){
		printf("File is empty");
	}else{
		c=fgetc(fp);
		while(c!=EOF){
			printf("%c",c);
			c=fgetc(fp);
		}
		fclose(fp);
	}
}
