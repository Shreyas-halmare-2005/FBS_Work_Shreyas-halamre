#include <stdio.h>

int sum_num();
int check_prime();
int check_armstrong();
int check_perfectno();
int num_factorial();
int num_strong();
int num_pallindrome();
int sum_firlast();

void main(){
	int a1=sum_num();
	printf("The sum of no is:%d\n\n",a1);
	
	int a2=check_prime();
	if(a2==1)
	  printf("not prime\n\n");
	else
	  printf("prime\n\n");
	  
	int a3=check_armstrong();
	  if(a3==1)
	  printf("Armstrong\n\n");
	else
	  printf("Not Armstrong\n\n");
	  
	 int a4=check_perfectno();
	 if(a4==1)
	  printf("Perfect number\n\n");
	else
	  printf("Not perfect\n\n");
	  
	int a5=num_factorial();
	  printf("Factorial is %d\n\n",a5);
	  
	int a6=num_strong();  
	if(a6==1)
	  printf("Strong number\n\n");
	else
	  printf("Not strong\n\n");
	  
	int a7=num_pallindrome();
	if(a7==1)
	  printf("Palindrome\n\n");
	else
	  printf("Not Palindrome\n\n");  
	  
	int a8=sum_firlast();  
	printf("Sum of no= %d\n\n", a8);
}
int sum_num(){
	int start=1, end=5;
	int sum=0;
	
	while(start<=end){
		sum= sum+start;
		
		start++;
	}
    return sum;
}
int check_prime(){
		int n=7;
	 int i=2, flag=0;
 	
 	while(i<n){
 		if(n%i==0){
 			return 1;
			 }
 		i++;
	 } if(i==n)
	 	return 0;
}
int check_armstrong(){
	int n = 154;
	int temp = n;
	int rem ,sum = 0;
	
	while(n>0){
		rem = n%10;
		sum = sum+rem*rem*rem;
		n = n/10;
	} 
	if(sum==temp){
		return 1;
	}else{
		return 0;
	}
}
int check_perfectno(){
	int n = 25;
	int i = 1, sum = 0;
	
	while(i<n){
		if(n%i==0)
		sum = sum + i;
		
		i++;
	}
	if(sum==n){
		return 1;
	}else{
		return 0;
	}
}
int num_factorial(){
	int i=1, no=8;
	int sum=1;
	
	while(i<=no){
		sum= sum*i;
		
		i++;
	}
	return sum;
}
int num_strong(){
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
	  return 1;
	else
	  return 0;
}
int num_pallindrome(){
	int n=121;
	int temp=n, reverse=0;
	int rem;
	while(n>0){
		rem = n%10;
		reverse = reverse*10+rem;
		n = n/10;
	}
	if(reverse==temp)
	return 1;
	else
	return 0;
}
int sum_firlast(){
	int n = 12345;
	int first, last, sum;
	
	last = n%10;
	while(n>=10){
		n = n/10;
	}
	first = n;
	sum = first + last ;
	return sum;
}