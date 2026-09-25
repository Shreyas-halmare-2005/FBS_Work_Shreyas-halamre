#include <stdio.h>

void Add_cal(int*,int*);
void Area_circle(float*);
void Temp_cal(float* );
void Swap_no(int*,int*);
void Avg_no(float* ,float* ,float* ,float* ,float* );
void Squ_cube(int* );
void Min_hour(int* );
void Peri_rect(float* ,float*);
void Area_tri(float* ,float*);

void main(){
	int a, b;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	Add_cal(&a,&b);
	
	float c;
	printf("Enter the radius\n");
	scanf("%f",&c);
	Area_circle(&c);
	
	float temp;
	printf("Enter the temperature\n");
	scanf("%f",&temp);
	Temp_cal(&temp);
	
	int no1,no2;
	printf("Enter two number\n");
	scanf("%d%d",&no1,&no2);
	Swap_no(&no1,&no2);
	
	float s1,s2,s3,s4,s5;
	printf("Enter the marks of subject\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	Avg_no(&s1,&s2,&s3,&s4,&s5);
	
	float bas, hei;
	printf("Enter two number\n");
	scanf("%f%f",&bas,&hei);
	Area_tri(&bas,&hei);
	
	int sq;
	printf("Enter two number\n");
	scanf("%d",&sq);
	Squ_cube(&sq);
	
	int min;
	printf("Enter two mint\n");
	scanf("%d",&min);
	Min_hour(&min);
	
	float leng ,wid;
	printf("Enter the len and wid of rectangle\n");
	scanf("%d%d",&leng,&wid);
	Peri_rect(&leng,&wid);
}
void Add_cal(int *ad1,int *ab2){
	int add=*ad1+*ab2;
	printf("Addition of two inti:%d \n\n",add);
}
void Area_circle(float *radius){
	float area = 3.14 * *radius * *radius;
	printf("Area of circle :%f \n\n",area);
}
void Temp_cal(float *cel){
    float f ;
	f = (*cel* 9/5) + 32;
	printf("Temperature is %f cel of fahr is:%f\n\n",f);
}
void Swap_no(int* no1,int* no2){
	int temp;
	temp = *no1;
	*no1 = *no2;
	*no2 = temp;
	printf("no1 = %d no2 = %d \n\n",*no1, *no2);
}
void Avg_no(float *num1, float *num2, float *num3, float *num4, float *num5){
	float avg;
	avg=(*num1+*num2+*num3+*num4+*num5)/5.0;
	printf("The avg of num is:%f\n\n",avg);
}
void Area_tri(float *base,float *height){
	float area;
	area = 0.5 * *base * *height;
    printf("The area of triangle is:%f\n\n",area);
}
void Squ_cube(int* no){
	int square ,cube;
	square = *no * *no;
	cube = *no * *no * *no;
	printf("square is = %d\n cube is = %d \n\n",square,cube);
}
void Min_hour(int* min){
    int hours, mintes;
 	hours = *min / 60;
 	mintes = *min % 60;
 	printf("hour is = %d\n\n",hours);
 	printf("Remianing min = %d \n\n",mintes);
}
void Peri_rect(float *length, float *width){
	int perimeter;
	perimeter = 2 * (*length + *width);
	printf("The peri of rectangle is %f\n\n",perimeter); 
}





