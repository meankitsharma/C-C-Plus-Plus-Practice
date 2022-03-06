#include<stdio.h>
int main(){
	int t,n,i,f;
	printf("Enter no. of test cases : ");
	scanf("%d",&t);
	while(t>0){
	
	printf("\nEnter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d array : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter no. to search for : ");
   scanf("%d",&f);
   int flag=0;
   for(i=0;i<n;i++){
   	if(a[i]==f){
   		flag=1;
   		break;
   	}
   }
   if(flag==1){
   	printf("%d",i);
   }
   else{
   	printf("-1");
   }
   
}
t--;
}
