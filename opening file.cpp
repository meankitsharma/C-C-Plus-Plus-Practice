#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char name[10];
	char c;
	printf("Type the file name to open\n");
	scanf("%s",&name);
	fp=fopen(name,"r");
	if(fp==NULL){
		printf("File is empty");
		exit(0);

	}
	else{
		c=fgetc(fp);
		while(c!=EOF){
			printf("%s",c);
			c=fgetc(fp);
		}
		fclose(fp);
		
	}
	
}
