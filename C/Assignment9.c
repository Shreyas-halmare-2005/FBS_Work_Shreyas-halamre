 #include <stdio.h>

 Find minimum and maximum number in array with function
 
void add_arr(int*,int);
void min_arr(int*,int);
void max_arr(int*,int);

void main(){
 	int arr[5];
 	printf("Enter the number elements:");
 	
 	add_arr(arr,5);
 	min_arr(arr,5);
 	max_arr(arr,5);
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void min_arr(int* arr,int n){
		int min = arr[0];
		
    	for(int i=1;i<n;i++){
	   if(arr[i] < min)
	   	min = arr[i];
   }
   	printf("Minimum number:%d\n",min);
}
void max_arr(int* arr,int n){
	int max = arr[0];
	
	for(int i=1;i<n;i++){
		 if(arr[i] > max)
	   	max = arr[i];
	}
	printf("maximum number:%d\n",max);
}

 Search the given number in array.with function  

void add_arr(int*,int);
void search_arr(int*,int);
void main(){
	int arr[5];
 	printf("Enter the Array:");
 	
 	add_arr(arr,5);
 	
 	search_arr(arr,5);
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void search_arr(int* arr,int n){
	int search;
	int found=0;
	printf("Enter the number to search\n");
	scanf("%d",&search);
	for(int i=0;i<n;i++){
		if(arr[i]==search){
			found = 1;
			printf("Number found at index %d",i);
			break;
		}
	}
	if (found==0){
		printf("Number not found");
	}
}

Find sum of all numbers.with function  

void add_arr(int*,int);
void sum_arr(int*,int);
void main(){
	int arr[5];
 	printf("Enter the Array:");
 	
 	add_arr(arr,5);
 	
 	sum_arr(arr,5);
}
void add_arr(int* arr,int n){
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sum_arr(int* arr,int n){
	int i, sum=0;
	
	for (i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum of number:%d",sum);
}

 Find odd and even among the numbers.with function  

void add_arr(int*,int);
void Even_arr(int*,int);
void Odd_arr(int*,int);
void main(){
	int arr[5];
	int brr[5];
	int crr[5];
 	printf("Enter the Array:");
 	
 	add_arr(arr,5);
 	
 	Even_arr(arr,5);
 	Odd_arr(arr,5);
}
void add_arr(int*,int){
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void Even_arr(int*,int){
	printf("Enter the %d number:\n",n);
		for (i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
	
	for (i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum of number:%d",sum);
}
void Odd_arr(int*,int){
	printf("Enter the %d number:\n",n);
		for (i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
	
	for (i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum of number:%d",sum);
}

Take two array and add sum in third array with function

void add_arr(int* ,int);
void sum_arr(int *,int,int*,int*);
void main(){
	int arr[5];
	int brr[5];
	int crr[5];
	
	printf("Enter the Array 1:");
 	add_arr(arr,5);
 	
 	printf("Enter the Array 2:");
 	add_arr(brr,5);
 	
 	printf("third array is:\n");
 	sum_arr(crr,5,arr,brr);
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sum_arr(int *crr,int n,int* arr,int* brr){
	for (int i=0;i<5;i++){
		crr[i] = arr[i]+brr[i];
			printf("%d ",crr[i]);
	}
}

 Merge two arrays with function

void add_arr(int* ,int);
void merge_arr(int *,int,int*,int*);
void main(){
	int arr[5];
	int brr[5];
	int crr[5];
	
	printf("Enter the Array 1:");
 	add_arr(arr,5);
 	
 	printf("Enter the Array 2:");
 	add_arr(brr,5);
 	
 	printf("Merge array 1 and array 2 is:\n");
 	merge_arr(crr,10,arr,brr);
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sum_arr(int *crr,int n,int* arr,int* brr){
	for (int i=0;i<5;i++){
    	crr[i]=arr[i];
	}
	for(int i=0;i<5;i++){
		crr[i + 5] = brr[i];
	}
	
	for(int i=0;i<10;i++){
		printf("%d ",crr[i]);
	}
}

 Sort the array.with function

void add_arr(int*,int);
void sort_arr(int*,int);
void main(){
    int arr[5];
    printf("Enter the Array 1:");
 	add_arr(arr,5);
 	
 	printf("Sorted Array: ");
	sort_arr(arr,5);	
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sort_arr(int* arr,int n){
		for (int i=0;i<5;i++){
		
		for(int j=i + 1;j<5;j++){
			
		  if(arr[i] > arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}	
	}
	printf("%d ",arr[i]);
	}
}


