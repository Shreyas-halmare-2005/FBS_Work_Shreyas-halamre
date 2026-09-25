#include <stdio.h>

void print_number();
void print_table();
void sum_num();
void check_prime();
void check_armstrong();
void check_perfectno();
void num_factorial();
void num_strong();
void num_pallindrome();
void sum_firlast();

int main()
{
	print_number();
	print_table();
	sum_num();
    check_prime();
    check_armstrong();
    check_perfectno();
    num_factorial();
    num_strong();
    num_pallindrome();
    sum_firlast();
}
void print_number(){
		int i=1;
	
	while(i<=10){
		printf("%d ",i ) ;
		
		i++;
	}
	printf("\n");
}
void print_table(){
		int n=5;
	int i=1;
	while(i<=10){
		printf("%d \n\n",n*i);
		
		i++;
	}
}
void sum_num(){
	int start=1, end=5;
	int sum=0;
	
	while(start<=end){
		sum= sum+start;
		
		start++;
	}
	printf("sum = %d\n\n",sum);
}
void check_prime(){
		int n=7;
	 int i=2, flag=0;
 	
 	while(i<n){
 		if(n%i==0){
 			flag=1;
 			break;
			 }
 		i++;
	 } if(flag==0){
	 	printf("Prime\n\n");
	 }else{
	 	printf("Not prime\n\n");
	 }
}
void check_armstrong(){
	int n = 154;
	int temp = n;
	int rem ,sum = 0;
	
	while(n>0){
		rem = n%10;
		sum = sum+rem*rem*rem;
		n = n/10;
	} 
	if(sum==temp){
		printf("Armstrong no = %d\n\n",sum);
	}else{
		printf("Not armstrong\n\n");
	}
} 
void check_perfectno(){
	int n = 28;
	int i = 1, sum = 0;
	
	while(i<n){
		if(n%i==0)
		sum = sum + i;
		
		i++;
	}
	if(sum==n){
		printf("Perfect no\n\n");
	}else{
		printf("Not perfect\n\n");
	}
}
void num_factorial(){
	int i=1, no=8;
	int sum=1;
	
	while(i<=no){
		sum= sum*i;
		
		i++;
	}
	printf("sum = %d\n\n",sum);
}
void num_strong(){
	int num = 145, rem , fact=1, sum = 0;
	int temp = num;
	
	while(temp>0){
		rem = temp%10;
		fact = 1;
		for(int i =1;i<= rem;i++){
			fact = fact * i;
		}
		temp = temp/10;
		sum = fact + sum;
	}
	if (num==sum)
	printf("No is strong\n\n");
	else
	  printf("not strong\n\n");
}
void num_pallindrome(){
	int n=121;
	int temp=n, reverse=0;
	int rem;
	while(n>0){
		rem = n%10;
		reverse = reverse*10+rem;
		n = n/10;
	}
	if(reverse==temp)
	printf("Palindrome\n\n");
	else
	printf("Not Palindrome\n\n");
}
void sum_firlast(){
	int n = 12345;
	int first, last, sum;
	
	last = n%10;
	while(n>=10){
		n = n/10;
	}
	first = n;
	sum = first + last ;
	printf("sum = %d\n\n", sum);
}
















