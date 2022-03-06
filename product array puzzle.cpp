#include<stdio.h>
int main(){
	int t,n,i,q;
	printf("Enter the no. of test cases : ");
	scanf("%d",&t);
	while(t>0){
		int s=1;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Please give %d input.",n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s*a[i];
	}
	for(i=0;i<n;i++){
	q=s/a[i];
	printf("%d ",q);
}
printf("\n");
	t--;
}
return 0;
}
