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
// At begining
void At_beg(){
	struct node *new;
	new =(struct node *)malloc(sizeof(struct node));
	scanf("%d",&new->data);
	new ->next =NULL;
	new ->next =start;
	start = new;
	
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
}

int main(){
 	int choice;
 	    
 	    while(1){
 	    	printf("\n1.Create\n");
 	    	printf("2.Display\n");
		    printf("3.Insert at Begining\n");
		    printf("4.Insert at End\n");
		    printf("5.Quit\n");
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
					    Quit();
						break;	
					default:
					   printf("Choice is invalid. Try Again./n");	    
				            }
	     	 } 
			  return 0;	 
    }
