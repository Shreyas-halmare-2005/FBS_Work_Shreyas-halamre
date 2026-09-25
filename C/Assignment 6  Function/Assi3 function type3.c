#include <stdio.h>

void print_number(int);
void print_table(int);
void Sum_cal(int);
void check_prime(int);
void check_armstrong(int);
void check_perfectno(int);
void cal_factorial(int);
void num_strong(int);
void num_pallindrome(int);
void sum_firlast(int);

void main(){
	int a1;
	printf("Enter the number\n");
	scanf("%d",&a1);
	print_number(a1);
	
	int t1;
	printf("Enter the number\n");
	scanf("%d",&t1);
	print_table(t1);
	
	int s1,l1;
	printf("Enter the two number\n");
	scanf("%d%d",&s1,&t1);
	sum_cal(s1,t1);
	
	int pri1;
	printf("Enter the number\n");
	scanf("%d",&pri1);
	check_prime(pri1);
	
	int arm1;
	printf("Enter the number\n");
	scanf("%d",&arm1);
	check_armstrong(arm1);
	
	int pf1;
	printf("Enter the number\n");
	scanf("%d",&pf1);
	check_perfectno(pf1);
	
	int f1;
	printf("Enter the number\n");
	scanf("%d",&f1);
	cal_factorial(f1);
	
	int st1;
	printf("Enter the number\n");
	scanf("%d",&st1);
	num_strong(st1);
	
	int pal1;
	printf("Enter the number\n");
	scanf("%d",&pal1);
	num_pallindrome(pal1);
	
	int fir1;
	printf("Enter the number\n");
	scanf("%d",&fir1);
	sum_firlast(fir1);
}
void print_number(int a){
		int i=1;
	
	while(i<=a){
		printf("%d ",i ) ;
		
		i++;
	}
	printf("\n\n");
}
void print_table(int t){
    	int n=5;
	int i=1;
	while(i<=t){
		printf("%d ",n*i);
		
		i++;
	}
	printf("\n\n");
}
void sum_cal(int start,int end){
	int sum=0;
	
	while(start<=end){
		sum = sum+start;
		
		start++;
	}
	printf("sum : %d\n\n",sum);
}
void check_prime(int n){
	int i=2;
 	
 	while(i<n){
 		if(n%i==0){
 			
 			break;
			 }
 		i++;
	 } if(i==n){
	 	printf("Prime\n\n");
	 }else{
	 	printf("Not prime\n\n");
	 }
}
void check_armstrong(int no){
	int temp = no;
	int rem ,sum = 0;
	
	while(no>0){
		rem = no%10;
		sum = sum+rem*rem*rem;
		no = no/10;
	} 
	if(sum==temp){
		printf("Armstrong no = %d\n\n",sum);
	}else{
		printf("Not armstrong\n\n");
	}
}
void check_perfectno(int n){
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
void cal_factorial(int no){
		int i=1;
	int sum=1;
	
	while(i<=no){
		sum= sum*i;
		
		i++;
	}
	printf("sum : %d\n\n",sum);
}
void num_strong(int num){
	int rem , fact=1, sum = 0;
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
void num_pallindrome(int n){
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
void sum_firlast(int n){
	int first, last, tem;
	
	last = n%10;
	while(n>=10){
		n = n/10;
	}
	first = n;
	tem = first + last ;
	printf("sum : %d\n\n", tem);
}


