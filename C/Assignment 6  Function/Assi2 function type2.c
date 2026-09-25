#include <stdio.h>

int operaters();
int triangle();
int Greatest_no();
int User_marks();
double Discount_price();
int Divisible_by();
int Check_age();

void main(){
	int a1=operaters();
	if(a1==1)
	printf("invalid operator\n\n");
	else
	printf("result is:%d\n\n ",a1);
	
	int a2=triangle();
	if (a2==1)
		printf("equliteral \n\n");
	else if (a2==2)	
		printf("isoscales \n\n");
	else 
	    printf("scalen \n\n");	
	
	int a3=Greatest_no();   
	if(a3==1) 
	   printf("a greater \n\n");
	else if (a3==2)	
		printf("c greater \n\n");   
	else if (a3==3)	
		printf("b greater \n\n");
	else 
	    printf("c greater \n\n");
		
	int a4=User_marks();
		if(a4==1){
		printf("Distinction \n\n");
    }else if(a4==2){
    	printf("First class \n\n");
	}else if(a4==3){
		printf("Second class \n\n");
	}else if(a4==4){
		printf("pass class \n\n");
	}else {
		printf("Fail \n\n");
	}
	
	double a5=Discount_price();
	   printf("final price = %1f\n\n",a5);
	   
	int a6=Divisible_by();
		if(a6==1){
		printf("Divisible by both\n\n");
	}else if(a6==2){
		printf("Divisible by 3 but not by 5\n\n");
	}else if(a6==3){
		printf("Divisible by 5 but not by 3\n\n");
	}else{
		printf("Not divisible by both\n\n");
	}
	
	int a7=Check_age();
		if(a7==1){
		printf("child \n\n");
	}else if(a7==2){
	    printf("Teenager \n\n");	
	}else if(a7==3){
	    printf("Adult \n\n");	
	}else if(a7==4){
	    printf("Senior \n\n");	
	}	
   
}
int operaters(){
		int a = 25, b = 15;
	char op = '*';
	
	if(op=='+'){
		return a+b;
	}else if(op=='-'){
		return a-b;
    }else if(op=='*'){
		return a*b;
    }else if(op=='/'){
		return a/b;
    }else if(op=='%'){
		return a%b;
    }	
}
int triangle(){
		int s1=7, s2=7, s3=7;
	if(s1==s2 && s2==s3){
		return 1;
	}else if(s1==s2 || s2==s3 || s1==s3){
		return 2;
	}else{
		return 3;
	}
}
int Greatest_no(){
    int a=30, b=15, c=50;
	if(a>b){
		if(a>c)
		return 1;
		else
		return 2;
	}else{
		if(b>c)
		return 3;
		else
		return 4;
	}	
}
int User_marks(){
	 int marks = 56;
		if(marks>75){
		return 1;
    }else if(marks>65){
    	return 2;
	}else if(marks>55){
		return 3;
	}else if(marks>40){
		return 4;
	}else if(marks<40){
		return 5;
	}
}
double Discount_price(){
		char choice = 'y';
	double price = 400, tprice;
	double discount = 0;
	
	if(choice=='y'){
		if(price>=500){
			discount = price*0.20;
		}else {
			discount = price*0.10;
		}
	}else if(price>=600){
		discount = price*0.15;
	}
	tprice = price-discount;
	
	if(discount==0)
		return tprice;
	else
	    return tprice;
}
int Divisible_by(){
	int no = 15;
	if(no%3==0 && no%5==0){
		return 1;
	}else if(no%3==0){
		return 2;
	}else if(no%5==0){
		return 3;
	}else{
		return 4;
	}	
}
int Check_age(){
	int age = 25;
		if(age<=12){
		return 1;
	}else if(age<=19){
	    return 2;	
	}else if(age<=59){
	    return 3;	
	}else if(age>=60){
	     return 4;	
	}
}


