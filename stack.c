#include<stdio.h>
#include<stdlib.h>

//made by kunsh manghwani 
//basic of c language stack
struct node{
	int a;
	struct node* next;
}*head,*ptr,*tptr;

void pop(){
	if(head == NULL){
		printf("\nthe stack is empty ");
		return;
	}
	ptr=head;
	head=head->next;
	free(ptr);
}

void push(){
	int d;
		ptr = (struct node*)malloc(sizeof(struct node));
		printf("\n enter element ");
		scanf("%d",&d);
		ptr->a = d;
		ptr->next=head;
		head=ptr;
}

void display(){
	if(head == NULL){
		printf("\nthe stack is empty ");
		return;
	}
	tptr=head;
	while(tptr!=NULL){
		printf("%d\t",tptr->a);
		tptr=tptr->next;
	}
}

int main(){
	int c;
	
	while(1){
		printf("\n1--push\n2--pop\n3--display\n4--exit\nEnter Choice: ");
	scanf("%d",&c);
		if(c==4){
			break;
		}
		switch(c){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				printf("wrong choice");
		}
	}
	
	return 0;
}
