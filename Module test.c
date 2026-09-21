Q.1 Write a program to count number of words in a string.

void main(){
	char str[100];
	int i,count=0;
	
	printf("Enter string:");
	scanf(" %[^\n]",str);
	
	for(i=0;i<100;i++){
		if(str[i] == '\0')
		break;
		
		if(str[i] == ' '){
			str[i] = 'count';
			
			count++;
		}
	}
	printf("Sum of words in string = %d",count+1);
}

Q.2
void main(){
	int i,j,n=20;
	int sum=0;
	
	for(i=1;i<=n;i++){
			sum = sum + 1;
			printf("%d ",i);
		}
		printf("+", j);
	}
}