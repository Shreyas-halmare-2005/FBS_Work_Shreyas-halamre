#include <stdio.h>

int operaters(int, int ,char);
int triangle(int, int, int);
int greatest_no(int, int, int);
int user_marks(int);
float discount_price(float);
int divisible_by(int);
int Check_age(int);

void main(){
	int a1, b1;
   printf("Enter the number\n");
   scanf("%d%d",&a1,&b1);
    char op1;
    printf("enter the operator\n");
    fflush(stdin);
    scanf("%c",&op1);
    int s1 = operaters(a1,b1,op1);
    if(s1==0)
    	printf("invalid operator\n");
    else
        printf("the result is:%d \n\n",s1);	
        
   int side1,side2,side3;
    printf("enter the sides of triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    int s2=triangle(side1, side2,side3);    
	if (s2==1)
		printf("equliteral \n\n");
	else if (s2==2)	
		printf("isoscales \n\n");
	else 
	    printf("scalen \n\n"); 
	    
	int no1,no2,no3;
    printf("Enter the number\n");
    scanf("%d%d%d",&no1,&no2,&no3);
    int su3=greatest_no(no1,no2,no3); 
		if(su3==1) 
	   printf("a greater \n\n");
	else if (su3==2)	
		printf("c greater \n\n");   
	else if (su3==3)	
		printf("b greater \n\n");
	else 
	    printf("c greater \n\n"); 
		
	int m1;
    printf("Enter the marks\n");
    scanf("%d",&m1);
    int us1=user_marks(m1);
	if(us1==1){
		printf("Distinction \n\n");
    }else if(us1==2){
    	printf("First class \n\n");
	}else if(us1==3){
		printf("Second class \n\n");
	}else if(us1==4){
		printf("pass class \n\n");
	}else {
		printf("Fail \n\n");
	}	
	
	float p1;
    printf("Enter the price\n");
    scanf("%f",&p1);
    float dis=discount_price(p1);  
	   printf("final price = %f\n\n",dis);
	   
	int no;
    printf("Enter the number\n");
    scanf("%d",&no);
    int div=divisible_by(no);
		if(div==1){
		printf("Divisible by both\n\n");
	}else if(div==2){
		printf("Divisible by 3 but not by 5\n\n");
	}else if(div==3){
		printf("Divisible by 5 but not by 3\n\n");
	}else{
		printf("Not divisible by both\n\n");
	}	  
	
	 int ag;
    printf("Enter the age\n");
    scanf("%d",&ag);
    int ck=Check_age(ag); 
    if(ck==1){
		printf("child \n\n");
	}else if(ck==2){
	    printf("Teenager \n\n");	
	}else if(ck==3){
	    printf("Adult \n\n");	
	}else if(ck==4){
	    printf("Senior \n\n");	
	}	
}
int operaters(int a, int b,char op){
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
int triangle(int s1, int s2, int s3){
	if(s1==s2 && s2==s3){
		return 1;
	}else if(s1==s2 || s2==s3 || s1==s3){
		return 2;
	}else{
		return 3;
	}	
}
int greatest_no(int a, int b, int c){
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
int user_marks(int num){
		if(num>75){
		return 1;
    }else if(num>65){
    	return 2;
	}else if(num>55){
		return 3;
	}else if(num>40){
		return 4;
	}else if(num<40){
		return 5;
	}
}
float discount_price(float price){
		char choice = 'y';
	float tprice;
	float discount = 0;
	
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
int divisible_by(int no){
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
int Check_age(int age){
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
