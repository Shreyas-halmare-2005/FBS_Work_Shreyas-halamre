#include <stdio.h>

int evenodd();
int leap_year();
int Posi_nege();
char upper_lower();
int pallindrome();
int vote();

void main(){
	int r1=evenodd();
	if(r1==1)
	printf("no is even\n\n");
	else
	printf("no is odd\n\n");
	
	int r2=leap_year();
	if(r2==1)
		printf("this year is leaf\n\n");
    else
    	printf("this is not a leaf year\n\n");
    	
    int r3=Posi_nege();
	if(r3==1)
	printf("is positive\n\n");
    else
	printf("is negative\n\n");	
	
	int r4=upper_lower();
	if(r4==1)
	printf("Uppercase\n\n");
	else
	printf("Lowercase\n\n");
	
	int r5=pallindrome();
	if(r5==1)
	printf("pallindrome\n\n");
	else
	printf("Not pallindrome\n\n");
	
	int r6=vote();
	if(r6==1)
	printf("Elligible to vote\n\n");
	else
	printf("Not Elligible\n\n");
}
int evenodd()
{
	int no= 125;
	if( no%2==0)
		return 1;
	else
		return 0;
}
int leap_year()
{
	    int year= 1990;	
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
int Posi_nege()
{
	int no=-29;
	if(no>0)
		return 1;
	else
		return 0;
}
char upper_lower()
{
	char ch= 'E';
	if (ch>='A'&& ch<='Z')
		return 1;
	else
		return 0;
}
int pallindrome()
{
    int a=12321,r=0;
	if(a==r)
		return 1;
	else
		return 0;
}
int vote()
{
int a=25;
	if(a>=18)
 	    return 1;
	else
		return 0;
}























