#include <stdio.h>

//1.Write a program to scan string from user then scan a single character and search it
//in a accepted string.
void main(){
	char str[100];
	char ch;
	int i, found=0;
	
	printf("Enter string: ");
	scanf("%[^\n]",str);
	
	printf("Enter the Character: ");
	scanf(" %c",&ch);
	
	for(i=0;i<100;i++){
		if(str[i] == '\0')
		break;
		
		if(str[i] == ch){
			found = 1;
			break;
		}
	}
	if(found == 1)
	printf("Character Found: %c",ch);
	else
	printf("Character not found");
}

//2.WAP Replace all Occurrences of ‘a’ with $ in a String
void main(){
	char str[100];
	int i;
	
	printf("Enter string:");
	scanf("%[^\n]",str);
	
	for (i=0;i<100;i++){
		if(str[i] == '\0')
		break;
		
		if(str[i] == 's'){
			str[i] = '$';
		}
	}
	printf("After replacing: %s", str);
}


//3.Remove the nth Index Character from a Non-Empty String
void main(){
	char str[100];
	int i,n;
	
	printf("Enter string:");
	scanf("%[^\n]",str);
	
	printf("Enter the index to remove:");
	scanf("%d",&n);
	
	for (i=n;i<100;i++){
		if(str[i] == '\0')
		break;
		
		str[i] = str[i + 1];
	}
	printf("After removing Char : %s",str);
}

//4.Form a New String where the First Character and the Last Character have
//been Exchanged
void main(){
	char str[100];
	char temp;
	int len;
	
	printf("Enter string:");
	scanf("%[^\n]", str);
	
	len = strlen(str);
	
	temp = str[0];
	str[0] = str[len - 1];
	str[len - 1] = temp ;
	
	printf("New string :%s",str);
}

//5.Count the Number of Vowels in a String
void main(){
	char str[100];
	int i,count = 0;
	
	printf("Enter string:");
	scanf("%[^\n]", str);
	
	for (i=0;i<100;i++){
		if(str[i] == '\0')
		break;
		
		if(str[i]=='a'|| str[i]=='e'||str[i]=='i'
		||str[i]=='i'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'
		||str[i]=='U'){
			count++;
		}
	}
	printf("Number of vowles = %d", count);
}

//6.Take in a String and Replace Every Blank Space with special symbol.
void main(){
	char str[100];
	int i;
	
	printf("Enter string:");
	scanf("%[^\n]",str);
	
	for(i=0;i<100;i++){
		if(str[i] == '\0')
		break;
		
		if(str[i] == ' ')
		str[i] = '$';
	}
	printf("After Removing: %s", str);
}


//7.Remove the Characters of Odd Index Values in a String
void main(){
	char str[100];
	int i, j = 0;
	
	printf("Enter a string:");
	scanf("%[^\n]",str);
	
	for(i=0; str[i] != '\0';i++){
		if(i % 2 == 0){
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	
	printf("String after removing odd index: %s", str);
}


//8.Calculate the Number of Words Present in a String
void main(){
	char str[50];
	int i, count = 0;
	
	printf("Enter a string:");
	scanf("%[^\n]", str);
	
	for(i=0;str[i] != '\0';i++){
		
		if(str[i]== ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
			count++;
		}
	}
	if(str[0] != '\0'){
		count++;
	}
	printf("Number of words = %d", count);
}


//9.Take in Two Strings and Display the Larger String without Using Built-in
//Functions
void main(){
	char str1[100], str2[100];
	int i, len1 = 0, len2 = 0;
	
	printf("Enter first string:");
	scanf("%[^\n]", str1);
	
	printf("Enter second string:");
	scanf(" %[^\n]", str2);
	
	for(i=0;str1[i]!='\0';i++){
		len1++;
	}for(i=0;str2[i]!='\0';i++){
		len2++;
	}
	
	if(len1 > len2){
		printf("Large string: %s", str1);
	}
	else if(len1 < len2){
		printf("Large string: %s", str2);
	}
	else{
		printf("Both string are equal.");
	}
}


//10.Write a program to check the string is palindrome or not.
void main(){
	char str[100];
	int i, len = 0, flag = 0;
	
	printf("Enter A string:");
	scanf("%[^\n]", str);
	
	for(i = 0;str[i]!='\0';i++){
		len++;
	}
	
	for(i=0;i < len / 2; i++){
		
		if(str[i] != str[len - i - 1]){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("String is pallandrome");
	}
	else{
		printf("String is not pallendrome");
	}
}











































