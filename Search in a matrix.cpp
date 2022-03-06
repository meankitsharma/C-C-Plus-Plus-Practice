#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int m,n,i,j,f;
		scanf("%d%d",&m,&n);
		int a[m][n];
		printf("%d %d",m,n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[m][n]);
			}
		}
		scanf("%d",&f);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(a[i][j]==f)
				{
					printf("1");
				}
			
			}
		}
		printf("0");
		t--;
		
	}
	return 0;
}
