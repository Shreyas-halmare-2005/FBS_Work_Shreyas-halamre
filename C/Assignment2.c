#include <stdio.h>


//1. operator (+,-,/,*,%) based on that perform

void main(){
	int a = 25, b = 15;
	char op = '*';
	
	if(op=='+'){
		printf("sum of = %d",a+b);
	}else if(op=='-'){
		printf("sub of = %d",a-b);
    }else if(op=='*'){
		printf("multi of = %d",a*b);
    }else if(op=='/'){
		printf("div of = %d",a/b);
    }else if(op=='%'){
		printf("modu of = %d",a%b);
    }	
}


//2. triangle is equilateral, isosceles, or scalene

void main(){
	int s1=7, s2=7, s3=7;
	if(s1==s2 && s2==s3){
		printf("equliteral");
	}else if(s1==s2 || s2==s3 || s1==s3){
		printf("isoscales");
	}else{
		printf("scalen");
	}
}


//3. Greatest of three numbers using nested if-else

void main(){
	int a=30, b=15, c=50;
	if(a>b){
		if(a>c)
		printf("greater = %d",a);
		else
		printf("greater = %d",c);
	}else{
		if(b>c)
		printf("greater = %d",b);
		else
		printf("greater = %d",c);
	}
}


//4.Ask the user to enter marks

void main(){
	int marks = 56;
	if(marks>75){
		printf("Distinction = %d",marks);
    }else if(marks>65){
    	printf("First class = %d",marks);
	}else if(marks>55){
		printf("Second class = %d",marks);
	}else if(marks>40){
		printf("pass class = %d",marks);
	}else if(marks<40){
		printf("Fail = %d",marks);
	}	
}


//5.price discount and total price

void main(){
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
		printf("Final price = %.2lf",tprice);
		else
	printf("Actual price = %.2lf discount = %.2lf final price = %.2lf",price,discount,tprice);
}


//6.check if it is divisible by 3, 5, or both.

void main(){
	int no = 15;
	if(no%3==0 && no%5==0){
		printf("Divisible by both = %d",no);
	}else if(no%3==0){
		printf("Divisible by 3 but not by 5");
	}else if(no%5==0){
		printf("Divisible by 5 but not by 3");
	}else{
		printf("Not divisible by both");
	}
}

//7. Age and check if the person is: 

void main(){
	int age = 25;
	
	if(age<=12){
		printf("child = %d",age);
	}else if(age<=19){
	    printf("Teenager = %d",age);	
	}else if(age<=59){
	    printf("Adult = %d",age);	
	}else if(age>=60){
	    printf("Senior = %d",age);	
	}
}






