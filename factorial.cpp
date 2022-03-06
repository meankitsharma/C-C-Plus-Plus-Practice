#include<stdio.h>
int main(){
	long int n,k=1;
	printf("enter the no ");
	scanf("%d",&n);
	if(n==1)
	printf("%d",n);
	else{
	
    while(n>0){
    	k=k*n;
    	n--;
    }
    printf("\n%d",k);
	}

}
