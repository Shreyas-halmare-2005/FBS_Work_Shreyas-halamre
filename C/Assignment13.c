#include <stdio.h>
#include <stdlib.h>

void add_arr(int*,int);
void min_arr(int*,int);
void max_arr(int*,int);

int main(){
 	int *arr, n;
 	printf("Enter the number elements:");
 	scanf("%d", &n);
 	
 	arr = (int*)malloc(n * sizeof(int));
 	
 	if(arr == NULL){
 		printf("Memory allocation failed");
 		return 1;
	 }
 	
 	add_arr(arr,5);
 	min_arr(arr,5);
 	max_arr(arr,5);
 	
 	free(arr);
}
void add_arr(int* arr,int n){
	printf("Enter %d elements: ", n);
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



void add_arr(int*,int);
void search_arr(int*,int);

int main(){
	int *arr , n;
 	printf("Enter the number elements:");
 	scanf("%d", &n);
 	
 	arr = (int*)malloc(n * sizeof(int));
 	
 	if(arr == NULL || n <= 0){
 		printf("Invalid size of memory");
 		free(arr);
 		return 1;
	 }
 	
 	printf("Enter the Array:\n");
 	add_arr(arr,5);
 	search_arr(arr,5);
 	
 	free(arr);
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


void add_arr(int*,int);
void sum_arr(int*,int);

int main(){
	int *arr , n;
 	printf("Enter the number of elements:");
 	scanf("%d", &n);
 	
 	arr = (int*)malloc(n * sizeof(int));
 	
 	if(arr == NULL || n <= 0){
 		printf("Invalid size of memory");
 		free(arr);
 		return 1;
	 }
 	
 	add_arr(arr,5);
 	sum_arr(arr,5);
 	
 	free(arr);
}
void add_arr(int* arr,int n){
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void search_arr(int* arr, int n)
{
    int search;
    int found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            printf("Number found at index %d\n", i);
            break;
        }
    }

    if (found == 0)
    {
        printf("Number not found");
    }
}


void add_arr(int*,int);
void Even_arr(int*,int);
void Odd_arr(int*,int);

void main(){
	int arr[5];

 	printf("Enter the Array:");
 	
 	add_arr(arr,5);
 	
 	Even_arr(arr,5);
 	Odd_arr(arr,5);
}
void add_arr(int *arr,int n){
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void Even_arr(int *arr,int n){
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



void add_arr(int*, int);
void sum_arr(int*, int, int*, int*);

int main()
{
    int *arr, *brr, *crr;
    int n = 5;

    arr = (int*)malloc(n * sizeof(int));
    brr = (int*)malloc(n * sizeof(int));
    crr = (int*)malloc(n * sizeof(int));

    if (arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");

        free(arr);
        free(brr);
        free(crr);

        return 1;
    }

    printf("Enter the Array 1:\n");
    add_arr(arr, n);

    printf("Enter the Array 2:\n");
    add_arr(brr, n);

    printf("Third array is:\n");
    sum_arr(crr, n, arr, brr);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}

void add_arr(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void sum_arr(int* crr, int n, int* arr, int* brr)
{
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
        printf("%d ", crr[i]);
    }
}



void add_arr(int* ,int);
void merge_arr(int *,int,int*,int*);

int main(){
	int arr[5], int brr[5], int crr[5];
	int n = 5;
	
	arr = (int*)malloc(n * sizeof(int));
	brr = (int*)malloc(n * sizeof(int));
	crr = (int*)malloc(2 * n * sizeof(int));
	
	if(arr == NULL || brr == NULL || crr == NULL){
		printf("Memory allocation failed");
		
		free(arr);
		free(brr);
		free(crr);
		return 1;
	}
	
	printf("Enter the Array 1:");
 	add_arr(arr,n);
 	
 	printf("Enter the Array 2:");
 	add_arr(brr,n);
 	
 	printf("Merge array 1 and array 2 is:\n");
 	merge_arr(crr,2 * n, arr, brr);
 	
 	free(arr);
 	free(brr);
 	free(crr);
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sum_arr(int *crr,int n,int* arr,int* brr){
	for (int i=0;i<n;i++){
    	crr[i]=arr[i];
	}
	for(int i=0;i<5;i++){
		crr[i + n/2] = brr[i];
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",crr[i]);
	}
}



void add_arr(int*,int);
void sort_arr(int*,int);

int main(){
    int *arr;
    int n=5;
    
    arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL){
    	printf("Memory allocation failed");
    	return 1;
	}
	
    printf("Enter the Array 1:");
 	add_arr(arr,5);
 	
 	printf("Sorted Array: ");
	sort_arr(arr,5);	
	
	free(arr);
}
void add_arr(int* arr,int n){
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sort_arr(int* arr,int n){
		for (int i=0;i<n;i++){
		
		for(int j=i + 1;j<n;j++){
			
		  if(arr[i] > arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}	
	}
	printf("%d ",arr[i]);
	}
}