#include <stdio.h>

//1. Add two integers 
  
//void main(){
//	int a, b, sum;
//	a=10,b=30;
//	sum=a+b;
//	printf("Add to int = %d",sum);
//}


//2. Area of circle

void main(){
	float radius = 9;
	float area;
	area = 3.14 * radius * radius;
	printf("Area of circle = %0.2f",area);
}


//3. Celsius to Fahrenheit 

void main(){
	int c = 33;
	float f ;
	f = (33 * 9/5) + 32; 
	
	printf("Celsius to Fahrenheit is = %.2f",f);
}

//4. Swap of two no

void main(){
	int no1 = 20, no2 = 40;
	int temp;
	temp = no1;
	no1 = no2;
	no2 = temp;
	printf("no1 = %d no2 = %d",no1, no2);
}


//5.Average of five number

void main(){
	int w1=55, w2=65, w3=70, w4=77, w5=85;
	float average;
	average = (w1+w2+w3+w4+w5) / 5.0;
	
	printf("Average of five no = %.2f",average);
}


//6. Square and cube of no

void main(){
    int no = 12;
	int square ,cube;
	square = no * no;
	cube = no * no * no;
	printf("square is = %d\n cube is = %d",square,cube);	
}


// 7.Minutes into hours and remaining minutes

// void main(){
// 	int min = 150;
// 	int hours, remaining;
//
// 	hours = min / 60;
// 	remaining = min % 60;
// 	
// 	printf("Time is = %d\n",hours);
// 	printf("Remianing min = %d",remaining);
// }


//8.Perimeter of rectangle

void main(){
	float length = 23, width = 15;
	float perimeter;
	perimeter = 2 * (length + width);
	
	printf("Perimeter of rectangle = %.2f",perimeter);
}


//9.Area of triangle

//void main(){
//	float base = 10, height = 15;
//	float area;
//	area = 0.5 * base * height;
//	printf("Area of triangle = %.2f",area);
//}


//10.Input marks of subject and find percentage

//void main(){
//	int s1=85, s2=89, s3=92, s4=78, s5=95;
//	int total;
//	int percentage;
//	
//	total = s1+s2+s3+s4+s5;
//	percentage = total / 5;
//	
//	printf("Total of all subjects = %d\n",total);
//	printf("Total percentage = %d %%",percentage);	
//}











