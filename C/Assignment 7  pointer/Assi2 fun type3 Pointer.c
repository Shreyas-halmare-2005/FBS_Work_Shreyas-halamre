#include <stdio.h>

void operations(int* ,int* ,char*);
void triangles(int*,int*,int*);
void Greatest_no(int*,int*,int*);
void User_marks(int*);
void Discount_price(double*);
void Divisible_by(int*);
void Check_age(int*);

void main(){
	 int a1, b1;
   printf("Enter the number\n");
   scanf("%d%d",&a1,&b1);
   char op;
   printf("enter the operator");
   scanf("%c",&op);
    operation(&a1,&b1,&op);
    
    int side1, side2,side3;
    printf("enter the sides of triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    triangle(&side1,&side2,&side3);
    
    int no1,no2,no3;
    printf("Enter the number\n");
    scanf("%d%d%d",&no1,&no2,&no3);
    greatest_no(&no1,&no2,&no3);
    
    int m1;
    printf("Enter the marks\n");
    scanf("%d",&m1);
    user_marks(&m1);
    
    double p1;
    printf("Enter the price\n");
    scanf("%d",&p1);
    discount_price(&p1);
    
    int no;
    printf("Enter the number\n");
    scanf("%d",&no);
    divisible_by(&no);
    
    int ag;
    printf("Enter the age\n");
    scanf("%d",&ag);
    check_age(&ag);
    
}
void operation(int *x,int *y,char* op){
		 *op = '*';	
	if(*op=='+'){
		printf("sum of = %d \n\n",*x+ *y);
	}else if(*op=='-'){
		printf("sub of = %d \n\n",*x-*y);
    }else if(*op=='*'){
		printf("multi of = %d \n\n",*x* *y);
    }else if(*op=='/'){
		printf("div of = %d \n\n",*x / *y);
    }else if(*op=='%'){
		printf("modu of = %d \n\n",*x% *y);
    }
}
void triangle(int *a, int *b, int *c){
	if(*a==*b && *b==*c){
		printf("equliteral \n\n");
	}else if(*a==*b || *b==c || *a==*c){
		printf("isoscales \n\n");
	}else{
		printf("scalen \n\n");
	}
}
void greatest_no(int *n1,int *n2,int *n3){
	if(*n1>*n2){
		if(*n1>*n3)
		printf("greater = %d\n\n",*n1);
		else
		printf("greater = %d\n\n",*n3);
	}else{
		if(*n2>*n3)
		printf("greater = %d\n\n",*n2);
		else
		printf("greater = %d\n\n",*n3);
	}	
}
void user_marks(int *marks){
	if(*marks>75){
		printf("Distinction = %d\n\n",*marks);
    }else if(*marks>65){
    	printf("First class = %d\n\n",*marks);
	}else if(*marks>55){
		printf("Second class = %d\n\n",*marks);
	}else if(*marks>40){
		printf("pass class = %d\n\n",*marks);
	}else if(*marks<40){
		printf("Fail = %d\n\n",*marks);
	}
}
void discount_price(double *price){
	char choice = 'y';
	double tprice;
	double discount;
	
	if(choice=='n'){
		if(*price>=500){
			discount = *price*0.20;
		}else {
			discount = *price*0.10;
		}
	}else if(*price>=600){
		discount = *price*0.15;
	}
	tprice = *price-discount;
	
	if(discount==0)
		printf("Final price = %.2lf\n\n",tprice);
		else
	printf("Actual price = %.2lf discount = %.2lf final price = %.2lf\n\n",tprice,discount,tprice);
}
void divisible_by(int *no){
		if(*no%3==0 && *no%5==0){
		printf("Divisible by both = %d\n\n",*no);
	}else if(*no%3==0){
		printf("Divisible by 3 but not by 5\n\n");
	}else if(*no%5==0){
		printf("Divisible by 5 but not by 3\n\n");
	}else{
		printf("Not divisible by both\n\n");
	}
}
void check_age(int *age){
	if(*2age<=12){
		printf("child = %d\n\n",*age);
	}else if(*age<=19){
	    printf("Teenager = %d\n\n",*age);	
	}else if(*age<=59){
	    printf("Adult = %d\n\n",*age);	
	}else if(*age>=60){
	    printf("Senior = %d\n\n",*age);	
	}
}
