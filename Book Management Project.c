#include <stdio.h>
#include <string.h>

typedef struct Book{
	int id;
	char name[20];
	char auther[20];
	float price;
	float rating;
}Book;

void display(struct Book b[], int n); 
void addBook(struct Book b[],int *n);
void searchBook(struct Book b[], int n);
void update(struct Book b[],int n);
void deleteBook(struct Book b[], int *n);
void sortprice(struct Book b[], int n);
void sortrating(struct Book b[], int n);
void top3(struct Book b[],int n);

void main(){
    Book b[50];
    int n=10;
	int choice;	
	
	b[0].id = 1;
	strcpy(b[0].name,"Think and Grow Rich");
	strcpy(b[0].auther,"Napoleon Hill");
	b[0].price = 999;
	b[0].rating = 5.0;
	
	b[1].id = 2;
	strcpy(b[1].name,"Can`t Hurt Me");
	strcpy(b[1].auther,"David Goggins");
	b[1].price = 799;
	b[1].rating = 4.0;
	
	b[2].id = 3;
	strcpy(b[2].name,"Atomic Habits");
	strcpy(b[2].auther,"James Clear");
	b[2].price = 899;
	b[2].rating = 4.5;
	
	b[3].id = 4;
	strcpy(b[3].name,"Start with Why");
	strcpy(b[3].auther,"Simon Sinek");
	b[3].price = 659;
	b[3].rating = 4.3;
	
	b[4].id = 5;
	strcpy(b[4].name,"The Power of Now");
	strcpy(b[4].auther,"Eckhart Tolle");
	b[4].price = 559;
	b[4].rating = 3.8;
	
	b[5].id = 6;
	strcpy(b[5].name,"Deep Work");
	strcpy(b[5].auther,"Cal Newport");
	b[5].price = 500;
	b[5].rating = 4.7;
	
	b[6].id = 7;
	strcpy(b[6].name,"The War of Art");
	strcpy(b[6].auther,"Steven Pressfield");
	b[6].price = 499;
	b[6].rating = 4.0;
	
	b[7].id = 8;
	strcpy(b[7].name,"The 5 AM Club");
	strcpy(b[7].auther,"Robin Sharma");
	b[7].price = 669;
	b[7].rating = 4.3;
	
	b[8].id = 9;
	strcpy(b[8].name,"Make Your Bed");
	strcpy(b[8].auther,"William McRaven");
	b[8].price = 399;
	b[8].rating = 3.9;
	
	b[9].id = 10;
	strcpy(b[9].name,"Daring Greatly");
	strcpy(b[9].auther,"Brene Brown");
	b[9].price = 749;
	b[9].rating = 4.4;
	
	do{
		printf("###################################################\n");
		printf("#               BOOK MANAGEMENT SYSTEM            # \n");
		printf("###################################################\n");
		
		printf("\n1.Display All Books");
		printf("\n2.Add Book");
		printf("\n3.Search Book");
		printf("\n4.Update Book");
		printf("\n5.Delete Book");
		printf("\n6.Sorted By Price");
		printf("\n7.Sorted By Rating");
		printf("\n8.Top 3");
		
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		
		if(choice==1){
			display(b, n);
		}
		if(choice==2){
			addBook(b,&n);
		}
		if(choice==3){
			searchBook(b,n);
		}
		if(choice==4){
			update(b,n);
		}
		if(choice==5){
			deleteBook(b,n);
		}
		if(choice==6){
			sortprice(b,n);
		}
		if(choice==7){
			sortrating(b,n);
		}
		if(choice==8){
			top3(b,n);
		}
		if(choice==0){
			printf("\nThank You");
		}
		
	}while(choice != 0);
}

//      DISPLAY ALL BOOKS   //
void display(struct Book b[],int n){
	int i;
	printf("\n---------ALL BOOKS---------");
	for(i=0;i<n;i++){
		printf("\nBOOK ID   : %d",b[i].id);
		printf("\nBOOK NAME : %s",b[i].name);
		printf("\nAUTHER    : %s",b[i].auther);
		printf("\nPRICE     : %.2f",b[i].price);
		printf("\nRATING    : %.1f",b[i].rating);
		
		printf("\n_________________________________\n\n");
	}
}
//        ADD BOOK         //
void addBook(struct Book b[],int *n){
	if(*n >= 50){
		printf("\nStorage is full!");
	}
	printf("\nEnter Book ID :");
	scanf("%d",&b[*n].id);
	
	printf("Enter Book Name :");
	scanf("%s",b[*n].name);
	
	printf("Enter Auther Name :");
	scanf("%s",b[*n].auther);
	
	printf("Enter Price :");
	scanf("%f",&b[*n].price);
	
	printf("Enter Rating :");
	scanf("%f",&b[*n].rating);
	
	*n = *n + 1;
	
	printf("\nBook Added Succesfully\n\n");
}
//          SEARCH BOOK        //
void searchBook(struct Book b[], int n){
	int id;
	int i;
	int found=0;
	
	printf("\nEnter Book ID :");
	scanf("%d",&id);
	
	for(i=0;i<n;i++){
		if(b[i].id == id){
			printf("\nBook Found");
			
		printf("\nBOOK ID   : %d",b[i].id);
		printf("\nBOOK NAME : %s",b[i].name);
		printf("\nAUTHER    : %s",b[i].auther);
		printf("\nPRICE     : %.2f",b[i].price);
		printf("\nRATING    : %.1f\n\n",b[i].rating);
		
		found = 1;
		break;
		}	
	}
	if(found==0){
		printf("\nBook Not Found");
	}
}
//       UPDATE BOOK        //
void update(struct Book b[],int n){
	int i;
	int id;
	int found=0;
	
	printf("\nEnter Book ID to Update :");
	scanf("%d",&id);
	
	for(i=0;i<n;i++){
		if(b[i].id == id){
        printf("\nBOOK NAME  : %s",b[i].name);
		printf("\nAUTHER     : %s",b[i].auther);
		printf("\nOld PRICE  : %.2f",b[i].price);
		printf("\nOld RATING : %.1f\n\n",b[i].rating);
		
		printf("\nEnter New Price :");
	    scanf("%f",&b[i].price);
	    
	    printf("Enter Rating :");
	    scanf("%f",&b[i].rating);
	    
	    printf("\nBook Update Successfully\n\n");
	    
	    found = 1;
		break;
      }
   }
   if(found==0){
		printf("\nBook Not Found\n\n");
	}
}
//        DELETE BOOK       //
void deleteBook(struct Book b[], int *n){
	int i , j , id;
	int found=0;
	
	printf("\nEnter Book ID to Detele:");
	scanf("%d",&id);
	
	for(i=0;i<*n;i++){
		if(b[i].id == id){
			
			for(j=i;j < *n-1;j++){
				b[j] = b[j+1];
			}
			*n= *n - 1;
			printf("\nBook Delete Successfully\n");
			found = 1;
		break;
		}
	}
	if(found==0){
		printf("\nBook Not Found\n\n");
	}
}
//        SORT BY PRICE          //
void sortprice(struct Book b[], int n){
	int i , j;
	Book temp;
	
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(b[i].price > b[j].price){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("\nBooks Sorted By Price");
	display(b,n);
}
//        SORT BY RATING         //
void sortrating(struct Book b[], int n){
	int i , j;
	Book temp;
	
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(b[i].rating < b[j].rating){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("\nBooks Sorted By Rating\n\n");
	display(b,n);
}
//         TOP 3         //
void top3(struct Book b[],int n){
	int i ,j;
	Book temp;
	
	if(n<3){
		printf("\nTop 3 Books least\n");
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(b[i].rating < b[j].rating){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("\n----------Top 3----------\n");
	for(i=0;i<3;i++){
		printf("\nBOOK ID   : %d",b[i].id);
		printf("\nBOOK NAME : %s",b[i].name);
		printf("\nAUTHER    : %s",b[i].auther);
		printf("\nPRICE     : %.2f",b[i].price);
		printf("\nRATING    : %.1f",b[i].rating);
		
		printf("\n_______________________________\n\n");
	}
}


