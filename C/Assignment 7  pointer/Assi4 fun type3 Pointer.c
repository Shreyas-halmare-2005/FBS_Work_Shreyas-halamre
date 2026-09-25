#include <stdio.h>

void Armstrong_no(int*);
void Prime_no(int*);
void Perfect_no(int*);
void Strong_no(int*);
void Menu_driven(int*,int*);

void main(){
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	Armstrong_no(&no);
	
	no;
	printf("\nEnter the number\n");
	scanf("%d",&no);
	Prime_no(&no);
	
	no;
	printf("\nEnter the number\n");
	scanf("%d",&no);
	Perfect_no(&no);
	
	no;
	printf("\nEnter the number\n");
	scanf("%d",&no);
	Strong_no(&no);
	
	int num1,choice1;
	printf("\nenter the number \n");
	scanf("%d",&num1);
	printf("press the choice to perform operations \n");
	printf("1.To check number is even or odd. \n");
	printf("2.To check number is prime or not.\n");
	printf("3.To check number is pallindrome or not. \n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number. \n");
	printf("6.To find sum of digits. \n");
	scanf("%d",&choice1);
	Menu_driven(&num1,&choice1);
}

void Armstrong_no(int *n){
	int i, temp, rem, sum;
	for (i=1;i<=*n;i++){
		temp = i;
		sum = 0;
		while(temp > 0){
			rem = temp%10;
			sum = sum + rem *rem*rem;
			temp = temp/10;
		}
		if (sum==i)
		printf("%d ",i);
	}
}
void Prime_no(int *n){
	int i,j, flag=0;
   for(i=2;i<=*n;i++){
   	   flag=0;
   	
	for (j=2;j<i;j++){
	    if(i%j==0){
	    	flag=1;
	    	break;
		}		
	}
	if(flag==0)
		printf("%d ",i); 
	}
}
void Perfect_no(int *n){
	int i,j, sum;
	
	for(i=1;i<=*n;i++){
	   sum=0;
	for(j=1;j<i;j++){
		if(i%j==0)
		sum=sum+j;
	}
	if(sum==i)
	printf("%d ",i);
	}
}
void Strong_no(int *n){
	int i,j, sum,temp,digit,flag;
	
	for(i=1;i<=*n;i++){
		temp=i;	
		sum=0;
		while(temp>0){
			digit = temp%10;
			flag = 1;
		for(j=1;j<=digit;j++){
			flag=flag*j;
	}
	  sum = sum + flag;
	  temp = temp /10;
	}
	if(sum==i)
		 printf("%d ",i);
	}
}
void Menu_driven(int *num,int *choice){
	if(*choice==1)
	{
		if(*num%2==0)
		    printf("%d is even",*num);
		else
		    printf("%d is odd",*num);
	}
	
	else if(*choice==2)
	{
		int prime=0;
		for(int i=2;i<*num;i++)
		{
			if(*num%i==0)
			    prime=1;
		}
		if(prime==0)
		    printf("%d is prime number",*num);
		else
		    printf("%d is not prime number",*num);
	}
	
	else if(*choice==3)
	{
		int tem=*num;
		int rem,rev=0;
		while(tem>0)
		{
			rem=tem%10;
			rev=rev*10+rem;
			tem=tem/10;
		}
		if(rev==*num)
		    printf("%d is pallindrome",*num);
		else
		    printf("%d is not palindrome",*num);
	}
	
	else if(*choice==4)
	{
		if(*num==0)
		    printf("number is zero");
		else if(*num>0)
		    printf("number is positive");
		else if(*num<0)
		    printf("number is negative");
		else
		    printf("invalid number");
	}
	
	else if(*choice==5)
	{
		int tem=*num;
		int rev=0,rem;
		while(tem>0)
		{
			rem=tem%10;
			rev=rev*10+rem;
			tem=tem/10;
		}
		printf("the reverse of %d is:%d",*num,rev);
	}
	
	else if(*choice==6)
	{
		int tem=*num;
		int rem,sum=0;
		while(tem>0)
		{
			rem=tem%10;
			sum=sum+rem;
			tem=tem/10;
		}
}
}