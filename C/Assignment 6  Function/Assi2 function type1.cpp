#include <stdio.h>

void operaters();
void triangle();
void Greatest_no();
void User_marks();
void Discount_price();
void Divisible_by();
void Check_age();

int main()
{
    operaters();
    triangle();	
    Greatest_no();
    User_marks();
    Discount_price();
    Divisible_by();
    Check_age();
}
void operaters(){
		int a = 25, b = 15;
	char op = '*';
	
	if(op=='+'){
		printf("sum of = %d \n\n",a+b);
	}else if(op=='-'){
		printf("sub of = %d \n\n",a-b);
    }else if(op=='*'){
		printf("multi of = %d \n\n",a*b);
    }else if(op=='/'){
		printf("div of = %d \n\n",a/b);
    }else if(op=='%'){
		printf("modu of = %d \n\n",a%b);
    }	
}

void triangle(){
		int s1=7, s2=7, s3=7;
	if(s1==s2 && s2==s3){
		printf("equliteral \n\n");
	}else if(s1==s2 || s2==s3 || s1==s3){
		printf("isoscales \n\n");
	}else{
		printf("scalen \n\n");
	}
}
void Greatest_no(){
    int a=30, b=15, c=50;
	if(a>b){
		if(a>c)
		printf("greater = %d\n\n",a);
		else
		printf("greater = %d\n\n",c);
	}else{
		if(b>c)
		printf("greater = %d\n\n",b);
		else
		printf("greater = %d\n\n",c);
	}	
}
void User_marks(){
    int marks = 56;
	if(marks>75){
		printf("Distinction = %d\n\n",marks);
    }else if(marks>65){
    	printf("First class = %d\n\n",marks);
	}else if(marks>55){
		printf("Second class = %d\n\n",marks);
	}else if(marks>40){
		printf("pass class = %d\n\n",marks);
	}else if(marks<40){
		printf("Fail = %d\n\n",marks);
	}	
}
void Discount_price(){
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
		printf("Final price = %.2lf\n\n",tprice);
		else
	printf("Actual price = %.2lf discount = %.2lf final price = %.2lf\n\n",price,discount,tprice);
}
void Divisible_by(){
	int no = 15;
	if(no%3==0 && no%5==0){
		printf("Divisible by both = %d\n\n",no);
	}else if(no%3==0){
		printf("Divisible by 3 but not by 5\n\n");
	}else if(no%5==0){
		printf("Divisible by 5 but not by 3\n\n");
	}else{
		printf("Not divisible by both\n\n");
	}	
}
void Check_age(){
int age = 25;	
	if(age<=12){
		printf("child = %d\n\n",age);
	}else if(age<=19){
	    printf("Teenager = %d\n\n",age);	
	}else if(age<=59){
	    printf("Adult = %d\n\n",age);	
	}else if(age>=60){
	    printf("Senior = %d\n\n",age);	
	}
}
