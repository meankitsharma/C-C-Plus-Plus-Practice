#include"stdio.h"
#include"conio.h"
struct node
{
	int info;
	struct node *link;
}node;
int Createtree(){
	
	struct node *first=NULL,*last=NULL,*new;
    new=malloc(sizeof(node));
    scanf("%d",&(new->info));
    if(first==NULL){
    new->link=first;
    first=new;
    }
    else{
	last->link=new;
	last=new;
    }
    printf("hi");
    }
int main(){
Createtree();
}




