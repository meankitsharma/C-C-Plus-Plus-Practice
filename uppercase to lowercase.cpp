#include<stdio.h>
int main(){
	int i=0;
	char a[20];
	gets(a);
	while(a[i]!='\0'){
	
	a[i]=a[i]+32;
	i++;
}
	puts(a);
	
}
