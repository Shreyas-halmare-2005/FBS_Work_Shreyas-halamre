#include <stdio.h>
#include <string.h>

1.Strlen

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str); 
     
    printf("Length = %d", strlen(str));
}

2.Strcpy

void main()
{
    char str1[100], str2[100];

    printf("Enter string: ");
    gets(str1);

    strcpy(str2, str1);

    printf("Copied string = %s", str2);
}

3.Strcmp

void main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Result = %d", strcmp(str1, str2));
}

4.Strncmp

void main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Result = %d", strncmp(str1, str2, 3));
}

5. strcat

void main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("Combined string = %s", str1);
}

6.strrchr

void main()
{
    char str[100];
    char ch;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Result = %s", strrchr(str, ch));
}

7.Strchr

void main()
{
    char str[100];
    char ch;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Result = %s", strchr(str, ch));
}

8.strstr

void main()
{
    char str[100], sub[50];

    printf("Enter string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    printf("Result = %s", strstr(str, sub));
}

9.strspn

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    printf("Count = %d", strspn(str, "0123456789"));
}
10.strcspn

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    printf("Count = %d", strcspn(str, "0123456789"));
}









