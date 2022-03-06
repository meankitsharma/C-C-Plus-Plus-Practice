#include<stdio.h>
int main(){
	int t;
	printf("enter no. of test cases:\n");
	scanf("%d",&t);
	while(t>0){
		int i,j,m,n,k;
		printf("enter the n*m matrix no. of rows and column :");
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
			for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("Enter the no. to search for :");
		scanf("%d",&k);
		int flag=0;
			for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]==k){
					flag=1;
					break;
				}
				
		}
		}
		printf("\n%d\n",flag);
		
		t--;
	}
}
