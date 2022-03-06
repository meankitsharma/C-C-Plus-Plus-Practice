#include<stdio.h>
int main(){
	int t;
	printf("enter no. of test cases:\n");
	scanf("%d",&t);
	while(t>0){
		int i,m,n;
		printf("enter the m  no. of rows :");
		scanf("%d",&m);
		int a[m];
		for(i=0;i<m;i++){
			
				scanf("%d",&a[i]);
			
		}
			for(i=0;i<m;i++){
			
				printf("%d ",a[i]);
	
		}
		printf("Enter the no. to search for :");
		scanf("%d",&n);
		int d,flag=0;
		d=m/2;
		if(n>d){
				for(i=d;i<m;i++){
		
				if(a[i]==n){
					flag=1;
					break;
				}
				
		}
			
		}
		else{for(i=0;i<d;i++){
		
				if(a[i]==n){
					flag=1;
					break;
				}
				
		}
		}
		
		
		printf("\n%d\n",flag);
		
		t--;
	}
}

