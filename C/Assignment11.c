#include <stdio.h>

//a. mystrcpy 
void main(){
	char s1[100], s2[100];
	int i = 0;
	
	printf("Enter string:");
	scanf("%99s", s2);
	
	while(s2[i] != '\0'){
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	printf("Copied string = %s", s1);
}

//b. mystrlen 
void main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        i++;
    }

    printf("Length of string = %d", i);

}

//c. mystrcmp  
void main()
{
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    if (s1[i] == s2[i])
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }
}

//d. mystrcat 
void main()
{
    char s1[200], s2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    while (s1[i] != '\0')
    {
        i++;
    }

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';

    printf("Concatenated string = %s", s1);
}


//e. mystrncpy 
void main()
{
    char s1[100], s2[100];
    int i = 0, n;

    printf("Enter a string: ");
    scanf("%99s", s2);

    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100)
    {
        printf("Invalid number");
        return 0;
    }

    while (i < n && s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }

    s1[i] = '\0';

    printf("Copied string = %s", s1);
}


//f. mystrupper
void main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    printf("Uppercase string = %s", str);
}


//g. mystrlower 
void main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("Lowercase string = %s", str);

}


//h. mystrrev 
void main()
{
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string = %s", str);
}


//i. mystrstr
void main()
{
    char str[100], sub[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter substring to search: ");
    scanf("%99s", sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Substring found");
    else
        printf("Substring not found");
}


//j. mystrcasecmp
void main()
{
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = s1[i] + 32;

        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] = s2[i] + 32;

        if (s1[i] != s2[i])
            break;

        i++;
    }

    if (s1[i] == s2[i])
        printf("Both strings are equal");
    else
        printf("Both strings are not equal");
}









