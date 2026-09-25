#include <stdio.h>

void evenodd();
void leap_year();
void Posi_nege();
void upper_lower();
void pallindrome();
void vote();

int main()
{
	evenodd();
	leap_year();
	Posi_nege();
	upper_lower();
	pallindrome();
	vote();
}
void evenodd(){
	int no= 125;
	if( no%2==0){
		printf("no is even \n");
	}
	else{
		printf("no is odd \n\n");
	}
}
void leap_year(){
	      int year= 1990;	
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("this year is leaf\n");
	}else{
		printf("this is not a leaf year\n\n");
	}
}
void Posi_nege(){
	int no=-29;
	if(no>0){
		printf("is positive\n");
	}else{
		printf("is negative\n\n");
	}	
}
void upper_lower(){
	char ch= 'E';
	if (ch>='A'&& ch<='Z'){
		printf("this is upper case\n");
	}else{
		printf("this is lower case\n\n");
	}	
}
void pallindrome(){
	int a=12321,r=0;
	if(a==r){
		printf("It is Palindrom\n");
	} else{
	    printf("It is not Palindrom\n\n");	
	}	
}
void vote(){
	int a=25;
	if(a>=18){
		printf("It can vote\n");
	}else {
		printf("It cannot vote\n\n");
	}	
}
