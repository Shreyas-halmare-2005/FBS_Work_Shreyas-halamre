 #include <stdio.h>

1. Find minimum and maximum number in array. 

void main(){
	int arr[100], i , n;
	int min,max;
	printf("Enter the number elements:");
	scanf("%d",&n);
	
	printf("enter the array ele:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min = arr[0];
	max = arr[0];
	
	for(i=1;i<n;i++){
	   if(arr[i] < min){
	   	min = arr[i];
	   }
	   if(arr[i] > max){
	   	max = arr[i];
	   }
	}
	printf("Minimum number:%d\n",min);
	printf("maximum number:%d\n",max);
}

2. Search the given number in array.  

void main(){
	int arr[]= {101,26,38,49,55,68,73,808,999,1210};
	int n=10;
	int search, i , found=0;
	printf("Enter the number to search\n");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
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

3. Find sum of all numbers. 

//void main(){
	int arr[10];
    int n;
	int i,sum=0;
	printf("Enter the sum no\n");
	scanf("%d",&n);
	
	printf("Enter the %d number:\n",n);
		for (i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
	
	for (i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum of number:%d",sum);
}   

4. Find odd and even among the numbers.  

void main(){
	int arr[10];
	int i,n;
	printf("Enter the Number\n");
	scanf("%d",&n);
	
	printf("Enter the %d number\n",n);
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("Even numbers:%d\n",arr[i]);
		}else{
			printf("Odd number:%d\n",arr[i]);
		}
	}
}

5. Print alternate elements in array. 

void main(){
	int arr[100];
	int i,n;
	printf("Enter the size of the array\n:");
	scanf("%d",&n);
	
	printf("Enter the %d elements\n",n);
		for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Alternate elements are:");
	
	for (i=0;i<n;i=i+2){
		printf("%d ",arr[i]);
	}
}

6. Accept array and print only prime numbers of array.  

void main(){
	int arr[100];
	int i,j, count,n;
		printf("Enter the size of the array\n:");
	scanf("%d",&n);
	
	printf("Enter the %d elements\n",n);
		for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Prime number are:");
	for (i=0;i<n;i++){
		count=0;
		
		for(j=1;j<=arr[i];j++){
			if(arr[i]%2==0){
				count++;
			}
		}
		if(count==0){
			printf("%d ",arr[i]);
		}
	}
}

7. Take two array and add sum in third array

void main(){
	int arr[5],brr[5],crr[5];
	
	printf("Enter the 5 elements of arr\n");
	for (int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the 5 elements of brr\n");
	for (int i=0;i<5;i++){
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<5;i++){
		crr[i] = arr[i]+brr[i];
	}
	printf("third array is:\n");
	for(int i=0;i<5;i++){
		printf("%d ",crr[i]);
	}
}

8. Merge two arrays 

void main(){
	int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[10];
    
    for (int i=0;i<5;i++){
    	crr[i]=arr[i];
	}
	for(int i=0;i<5;i++){
		crr[i + 5] = brr[i];
	}
	printf("Merged Array:");
	for(int i=0;i<10;i++){
		printf("%d ",crr[i]);
	}
}

9. Reverse the given array.

void main(){
	int arr[5]={10,12,15,17,19};
	int i;
	printf("Original array: ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nReverse Array: ");
	for(i= 4;i>= 0;i--){
		printf("%d ",arr[i]);
	}
}

10. Sort the array.

void main(){
	int arr[10]= {10,9,5,12,20,2,13,15,13,4};
	int temp;
	
	for (int i=0;i<10;i++){
		
		for(int j=i + 1;j<10;j++){
			
		  if(arr[i] > arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}	
		}
	}
	printf("Sorted Array: ");
	
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}
























































