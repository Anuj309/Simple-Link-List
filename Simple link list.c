#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
//struct node *new;
struct node *temp;
struct node *start=NULL;
 

 void Create(){
 	struct node *new;
     new = (struct node *)malloc(sizeof(struct node));
     if (new == NULL){
       printf("Memory allocation Failed !\n");
}
       
 	printf("Enter the value : ");
 	scanf("%d",&new->data);
 	new->next=NULL;
 	if(start==NULL)
 	{
 		start=temp=new;
	 }
	 else{
	 	temp->next=new;
	 	temp=temp ->next;
	 }
	 
 }
 void Display(){
 	struct node*q;
 	q=start;
 	
 	while(q!=NULL){
 		printf("%d ",q->data);
 		q=q->next;
                  }
              }
void Quit() {
    printf("Exiting program.\n");
    exit(0);
}
//Insertion in Simple link list
// At beginning
void At_beg(){
	struct node *new;
	new =(struct node *)malloc(sizeof(struct node));
	scanf("%d",&new->data);
	new ->next =NULL;
	new ->next =start;
	start = new;
	printf("New node is inserted at beginning");
}
//At End 
void At_End(){
	struct node *new;temp;temp=start;
	new=(struct node *)malloc(sizeof(struct node));
	printf ("Enter value : ");
	scanf("%d",&new -> data);
	new->next =NULL;
	while(temp -> next!=NULL){
		temp = temp -> next;
	}
	temp ->  next =new;
	temp=temp->next;
	printf("New node inserted at end");
}
//At Between 
void At_btw(){
	struct node *new;
	struct node *q;
	int pos;
	new = (struct node *)malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d",&new ->data);
	printf("Entyer the position");
	scanf("%d",&pos);
    q=start;
    for(int i=1;i<pos-1;i++){
    	q=q->next;
	}
	new->next=q->next;
	q->next=new;
	printf("new node inserted at position %d",pos);
}
// Deletion from link list 
// Deletion at beginning
void del_At_Beg(){
	struct node *temp;
	temp = start;
	start = temp -> next;
	printf("deleted node is Done ");

	free(temp);
}
//Deletion at End
void del_At_End(){
    struct node *q;
    struct node *temp;
    temp =start;
    while(temp ->next !=NULL){
        q=temp;
        temp=temp->next;
    }
    printf("deleted node is %d", q->next->data);
    q->next =NULL;
    free(temp);
}
//Deletion At any position
void del_At_Btw(){
    struct node *q;
    struct node *p;
    int btw;
    printf("Enter the position :");
    scanf("%d",&btw);
    q = start;
    for(int i =1;i<btw -1;i++){
        q=q->next;
    }
    p=q->next;
    q->next= p->next;
    printf("deleted node is %d",p->data);
    free(p);
}
int main(){
 	int choice;
 	    
 	    while(1){
 	    	printf("\n1.Create\n");
 	    	printf("2.Display\n");
		    printf("3.Insert at Beginning\n");
		    printf("4.Insert at End\n");
		    printf("5.Insert at Between\n");
		    printf("6.Delete at Beginning\n");
		    printf("7.Delete at End\n");
		    printf("8.Delete at Any Position\n");
		    printf("9.Quit\n");
		    printf("Enter choice :\n");
		    scanf("%d",&choice);
		        
		        
		        switch(choice){
		        	       case 1:
		        		 Create();
		        		 break;
		        	       case 2:
					    Display();	
					    break;
					case 3:
                                            At_beg();
						break;
				        case 4:
					    At_End();
						break;
					case 5:
					    At_btw();
						break;	
					case 6:
					    del_At_Beg();
						break;
					 case 7:
					    del_At_End();
						break;
				         case 8:
					    del_At_Btw();
						break;
					  case 9:
					    Quit();
						break;	
					default:
					   printf("Choice is invalid. Try Again.\n");	    
				            }
	     	 } 
			  return 0;	 
    }
