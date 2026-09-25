#include <stdio.h>

//1. Print a solid square pattern
void main(){
	int n=4;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//2. Print a right-angled triangle pattern
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//3. Print an inverted right-angled triangle pattern 
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//4. pyramid pattern
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//5. Print an inverted pyramid pattern
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=i; j>1; j--){
			printf(" ");
		}
		for(int j=i;j<=n;j++){
			printf("* ");
		}
		printf("\n");
		printf("\n");
	}
}

//6. Print a half pyramid using numbers
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}

//7. Print a Floyd’s triangle pattern
void main(){
	int n=5,num=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

//8. Print a pattern of stars in diamond shape
void main(){
	int n=4;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
   	for(int i=1;i<4;i++){
		for(int j=1;j<4-i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//9. Print a hollow square pattern
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}

//10. Print a hollow square with diagonal pattern
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n||j==i)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}













