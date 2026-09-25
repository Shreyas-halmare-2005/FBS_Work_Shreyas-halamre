#include <stdio.h>

void even_cal(int);
void leap_year(int);
void Posi_nege(int);
void upper_lower(char);
void pallindrome(int);
void vote(int);

int main()
{
   int even1;
   printf("Enter the number\n");
   scanf("%d",&even1);
   even_cal(even1);
   
   int leap1;
   printf("Enter the year\n");
   scanf("%d",&leap1);
   leap_year(leap1);
   
   int posi;
   printf("Enter the number\n");
   scanf("%d",&posi);
   Posi_nege(posi);
   
   char alpha;
    printf("Enter the alphabet\n");
   scanf("%d",&alpha);
   upper_lower(alpha);
   
   int pal;
   printf("Enter the number\n");
   scanf("%d",&pal);
   pallindrome(pal);
   
   int age;
    printf("Enter the Age\n");
   scanf("%d",&age);
   vote(age);
}
void even_cal(int x){
		if(x%2==0){
		printf("no is even\n\n");
	}
	else{
		printf("no is odd\n\n");
	}
}
void leap_year(int y){
		if(y%4==0 && y%100!=0 || y%400==0){
		printf("this year is leaf\n\n");
	}else{
		printf("this is not a leaf year\n\n");
	}
}
void Posi_nege(int p){
	int no=-29;
	if(no>0)
		printf("is positive\n\n");
	else
		printf("is negative\n\n");
}
void upper_lower(char q){
	char ch= 'E';
	if (ch>='A'&& ch<='Z'){
		printf("this is upper case\n\n");
	}else{
		printf("this is lower case\n\n");
	}
}
void pallindrome(int s){
	int a=12321, r=0;
	if(a==r){
		printf("It is Palindrom\n\n");
	} else{
	    printf("It is not Palindrom\n\n");	
	}
}
void vote(int s){
	int a=25;
		if(a>=18){
		printf("It can vote\n\n");
	}else {
		printf("It cannot vote\n\n");
	}
}







