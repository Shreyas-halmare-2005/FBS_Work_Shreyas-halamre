#include <stdio.h>

//1.Student (rollNo, name, marks) 

struct student{
	int rollno;
	char name[20];
	int marks;
};
void main(){
	struct student s1,s2;
	s1.rollno=101;
	strcpy(s1.name,"tejas");
	s1.marks=97;
	
	printf("-------STUDENT DATA--------\n");
	printf("Rollno:%d\n",s1.rollno);
	printf("Name:%s\n",s1.name);
	printf("Marks:%d\n",s1.marks);
    
   printf("Enter rollno name and marks of a student:\n");
   scanf("%d",&s2.rollno);
   scanf("%s",s2.name);
   scanf("%d",&s2.marks);	

	printf("-------STUDENT DATA--------\n");
	printf("Rollno:%d\n",s2.rollno);
	printf("Name:%s\n",s2.name);
	printf("Marks:%d\n",s2.marks);
}


//2.Employee (id, name, salary) 

struct Employee{
	int Id;
	char name[20];
	int salary;
};
void main(){
	struct Employee e1,e2;
	e1.Id = 111;
	strcpy(e1.name,"vivek");
	e1.salary =50000;
	printf("-----Employee Data------\n");
	printf("Id:%d\n",e1.Id);
	printf("Name:%s\n",e1.name);
	printf("Salary:%d\n",e1.salary);
	
	printf("Enter Id name and salary of a employee:\n");
   scanf("%d",&e2.Id);
   scanf("%s",e2.name);
   scanf("%d",&e2.salary);	
   	printf("-----Employee Data------\n");
	printf("Id:%d\n",e2.Id);
	printf("Name:%s\n",e2.name);
	printf("Salary:%d\n",e2.salary);
}


//3.Admin (id, name, salary, allowance) 

struct Admin{
	int Id;
	char name[20];
	int salary;
	float allowance;
};
void main(){
struct Admin a1,a2;
	a1.Id = 111;
	strcpy(a1.name,"vivek");
	a1.salary =50000;
	a1.allowance = 10000;
	printf("-----Admin Data------\n");
	printf("Id:%d\n",a1.Id);
	printf("Name:%s\n",a1.name);
	printf("Salary:%d\n",a1.salary);
	printf("Allowance:%.2f\n",a1.allowance);
	
	printf("Enter Id name salary and allowance of a admin:\n");
   scanf("%d",&a2.Id);
   scanf("%s",a2.name);
   scanf("%d",&a2.salary);	
   scanf("%f",&a2.allowance);
   	printf("-----Admin Data------\n");
	printf("Id:%d\n",a2.Id);
	printf("Name:%s\n",a2.name);
	printf("Salary:%d\n",a2.salary);
	printf("Allowance:%.2f\n",a2.allowance);
}


//4.HR (id, name, salary, commission) 

struct HR{
	int Id;
	char name[20];
	int salary;
	float commission;
};
void main(){
struct HR a1,a2;
	a1.Id = 111;
	strcpy(a1.name,"vivek");
	a1.salary =50000;
	a1.commission = 10000;
	printf("-----HR Data------\n");
	printf("Id:%d\n",a1.Id);
	printf("Name:%s\n",a1.name);
	printf("Salary:%d\n",a1.salary);
	printf("commission:%.2f\n\n",a1.commission);
	
	printf("Enter Id name salary and commission of a HR:\n");
   scanf("%d",&a2.Id);
   scanf("%s",a2.name);
   scanf("%d",&a2.salary);	
   scanf("%f",&a2.commission);
   	printf("-----HR Data------\n");
	printf("Id:%d\n",a2.Id);
	printf("Name:%s\n",a2.name);
	printf("Salary:%d\n",a2.salary);
	printf("commission:%.2f\n",a2.commission);
}


//5.SalesManager (id, name, salary, incentive, target) 

struct Salesmanager{
	int Id;
	char name[20];
	int salary;
	float intensive;
	int target;
};
void main(){
struct Salesmanager a1,a2;
	a1.Id = 111;
	strcpy(a1.name,"vivek");
	a1.salary =50000;
	a1.intensive = 10000;
	a1.target = 5;
	printf("-----Salesmanager Data------\n");
	printf("Id:%d\n",a1.Id);
	printf("Name:%s\n",a1.name);
	printf("Salary:%d\n",a1.salary);
	printf("intensive:%.2f\n",a1.intensive);
	printf("Target:%d\n\n",a1.target);
	
	printf("Enter Id name salary intensive and target of a Salesmanager:\n");
   scanf("%d",&a2.Id);
   scanf("%s",a2.name);
   scanf("%d",&a2.salary);	
   scanf("%f",&a2.intensive);
   scanf("%d",&a2.target);
   	printf("-----HR Data------\n");
	printf("Id:%d\n",a2.Id);
	printf("Name:%s\n",a2.name);
	printf("Salary:%d\n",a2.salary);
	printf("intensive:%.2f\n",a2.intensive);
	printf("Target:%d\n\n",a2.target);
}



struct Date{
	int date;
	int month;
	int year;
};
void main(){
	struct Date d1,d2;
	d1.date=15;
	d1.month=5;
	d1.year=2004;
	printf("___Calender Date___\n");
	printf("Enter the date month and year\n");
	if(d1.month >= 1 && d1.month <= 12 && d1.date >= 1 
	&& d1.date <= 31 && d1.year > 0){
	printf("%d:",d1.date);
	printf("%d:",d1.month);
	printf("%d\n\n",d1.year);
	}
	
	printf("Enter the date month and year\n");
	scanf("%d",&d2.date);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);
	if(d2.month >= 1 && d2.month <= 12 && d2.date >= 1 
	&& d2.date <= 31 && d2.year > 0){
	printf("%d:",d2.date);
	printf("%d:",d2.month);
	printf("%d",d2.year);
}
}



