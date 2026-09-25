#include <stdio.h>

//1.Print numbers from 1 to 10 

void main(){
	int i=1;
	
	while(i<=10){
		printf("%d",i);
		
		i++;
	}
}


//2.Print table for given number,Input: n = 5 

void main(){
	int n=5;
	int i=1;
	while(i<=10){
		printf("%d",n*i);
		
		i++;
	}
}


//3.Find sum of numbers from start to end

void main(){
	int start=1, end=5;
	int sum=0;
	
	while(start<=end){
		sum= sum+start;
		
		start++;
	}
	printf("sum = %d",sum);
}


//4.Check the given number is prime or not

 void main(){
 	int n=7;
	 int i=2, flag=0;
 	
 	while(i<n){
 		if(n%i==0){
 			flag=1;
 			break;
			 }
 		i++;
	 } if(flag==0){
	 	printf("Prime");
	 }else{
	 	printf("Not prime");
	 }

 }
 
 
//5.Check the given number is Armstrong number or not 
 
void main(){
	int n = 154;
	int temp = n;
	int rem ,sum = 0;
	
	while(n>0){
		rem = n%10;
		sum = sum+rem*rem*rem;
		n = n/10;
	} 
	if(sum==temp){
		printf("Armstrong no = %d",sum);
	}else{
		printf("Not armstrong");
	}
} 


//6.Check the given number is Perfect number or not

void main(){
	int n = 28;
	int i = 1, sum = 0;
	
	while(i<n){
		if(n%i==0)
		sum = sum + i;
		
		i++;
	}
	if(sum==n){
		printf("Perfect no");
	}else{
		printf("Not perfect");
	}
}


//7.Find factorial of given number

void main(){
	int i=1, no=8;
	int sum=1;
	
	while(i<=no){
		sum= sum*i;
		
		i++;
	}
	printf("sum = %d",sum);
}


//8.Check the given number is Strong number or not

void main(){
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
	printf("No is strong");
	else
	  printf("not strong");
}


//9.Check the given number is Palindrome number or not.

void main(){
	int n=121;
	int temp=n, reverse=0;
	int rem;
	while(n>0){
		rem = n%10;
		reverse = reverse*10+rem;
		n = n/10;
	}
	if(reverse==temp)
	printf("Palindrome");
	else
	printf("Not Palindrome");
}


//10. Find Sum of first and last digit of given number.

void main(){
	int n = 12345;
	int first, last, sum;
	
	last = n%10;
	while(n>=10){
		n = n/10;
	}
	first = n;
	sum = first + last ;
	printf("sum = %d", sum);
}







