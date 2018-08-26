#include<stdio.h>
// Creating template using struct
struct node{
	int value;
	struct node* next;
	};

int main(){
//Creating struct pointer for first node.

struct node* previous;

//Creating a struct pointer named head to hold address of first node.
struct node* head;

//As of now make head point to NULL.
head=NULL;
int i=0;
char c;

//Ask if node is required.
printf("\nNODE REQUIRED ? y OR n");
scanf("%c",&c);
while(c=='y'){

	//Check if a node is already created .
	if(head==NULL){
	previous=(struct node*)malloc(sizeof(struct node));
	head=previous;
	previous->next=NULL;
	//printf("\n%d\t%u",current,current);
	++i;
	printf("ENTER DATA FOR NODE %d :::: INT VALUE",i);
	scanf("%d",&previous->value);
	printf("%d",previous->value);
	}else{
		struct node* current;
		current=(struct node*)malloc(sizeof(struct node));
		++i;
		printf("\nENTER VALUE FOR NODE :%d",i);
		scanf("%d",&current->value);
		previous->next=current;
		current->next=NULL;
		previous=current;
		}

printf("\nNODE REQUIRED ? y OR n");
scanf(" %c",&c);
}

//Displaying
struct node* traverse;
traverse=head;

//printf("\n\tVALUE====%d",traverse->value);
int j=1;
while(traverse!=NULL && j<=i){
	printf("\n\tVALUE OF NODE : %d = %d\n",j,traverse->value);
	traverse=traverse->next;
	++j;
	}
}
