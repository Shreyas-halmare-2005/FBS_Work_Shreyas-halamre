#include<stdio.h>

int evenodd(int);
int leap_year(int);
int Posi_nege(int);
char upper_lower(char);
int pallindrome(int);
int vote(int);

void main(){
	int even1;
   printf("Enter the number\n");
   scanf("%d",&even1);
   int s1=evenodd(even1);
   if(s1==1)
	printf("no is even\n\n");
	else
	printf("no is odd\n\n");
	
    int leap1;
   printf("Enter the year\n");
   scanf("%d",&leap1);
   int s2=leap_year(leap1);
   if(s2==1)
		printf("this year is leaf\n\n");
    else
    	printf("this is not a leaf year\n\n");
    	
    int posi;
   printf("Enter the number\n");
   scanf("%d",&posi);
   int s3=Posi_nege(posi);	
   if(s3==1)
	printf("is positive\n\n");
    else
	printf("is negative\n\n");
	
	char alpha;
    printf("Enter the alphabet\n");
   scanf("%c",&alpha);
   char s4=upper_lower(alpha);
   if (s4>='A' && s4<='Z'){
		printf("this is upper case\n");
	}else
		printf("this is lower case\n\n");
		
	int pal;
   printf("Enter the number\n");
   scanf("%d",&pal);
   int s5=pallindrome(pal);
   if(s5==1)
		printf("It is Palindrom\n\n");
	 else
	    printf("It is not Palindrom\n\n");
	    
	int age;
    printf("Enter the Age\n");
   scanf("%d",&age);
    int s6=vote(age);    
    if(s6==1){
		printf("It can vote\n\n");
	}else {
		printf("It cannot vote\n\n");
	}
}

int evenodd(int x){
	if(x%2==0)
		return 1;
	else
		return 0;
}
int leap_year(int year){
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
int Posi_nege(int no){
	if(no>0)
		return 1;
	else
		return 0;
}
char upper_lower(char ch){
	if (ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
}
int pallindrome(int a){
	int r=0;
	if(a==r)
		return 1;
	else
		return 0;
}
int vote(int a){
    if(a>=18)
 	    return 1;
	else
		return 0;	
}












