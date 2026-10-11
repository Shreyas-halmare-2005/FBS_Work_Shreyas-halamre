#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book
{
    int id;
    char name[50];
    char auther[50];
    float price;
    float rating;
} Book;


void display(Book b[], int n);
void addBook(Book **b, int *n, int *capacity);
void searchBook(Book b[], int n);
void update(Book b[], int n);
void deleteBook(Book b[], int *n);
void sortprice(Book b[], int n);
void sortrating(Book b[], int n);
void top3(Book b[], int n);



int main()
{
    Book *b;

    int n = 10;
    int capacity = 50;
    int choice;


    b = malloc(capacity * sizeof(Book));

    if(b == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }


    b[0].id = 1;
    strcpy(b[0].name, "Think and Grow Rich");
    strcpy(b[0].auther, "Napoleon Hill");
    b[0].price = 999;
    b[0].rating = 5.0;


    b[1].id = 2;
    strcpy(b[1].name, "Can't Hurt Me");
    strcpy(b[1].auther, "David Goggins");
    b[1].price = 799;
    b[1].rating = 4.0;


    b[2].id = 3;
    strcpy(b[2].name, "Atomic Habits");
    strcpy(b[2].auther, "James Clear");
    b[2].price = 899;
    b[2].rating = 4.5;


    b[3].id = 4;
    strcpy(b[3].name, "Start with Why");
    strcpy(b[3].auther, "Simon Sinek");
    b[3].price = 659;
    b[3].rating = 4.3;


    b[4].id = 5;
    strcpy(b[4].name, "The Power of Now");
    strcpy(b[4].auther, "Eckhart Tolle");
    b[4].price = 559;
    b[4].rating = 3.8;


    b[5].id = 6;
    strcpy(b[5].name, "Deep Work");
    strcpy(b[5].auther, "Cal Newport");
    b[5].price = 500;
    b[5].rating = 4.7;


    b[6].id = 7;
    strcpy(b[6].name, "The War of Art");
    strcpy(b[6].auther, "Steven Pressfield");
    b[6].price = 499;
    b[6].rating = 4.0;


    b[7].id = 8;
    strcpy(b[7].name, "The 5 AM Club");
    strcpy(b[7].auther, "Robin Sharma");
    b[7].price = 669;
    b[7].rating = 4.3;


    b[8].id = 9;
    strcpy(b[8].name, "Make Your Bed");
    strcpy(b[8].auther, "William McRaven");
    b[8].price = 399;
    b[8].rating = 3.9;


    b[9].id = 10;
    strcpy(b[9].name, "Daring Greatly");
    strcpy(b[9].auther, "Brene Brown");
    b[9].price = 749;
    b[9].rating = 4.4;


    /* MENU */

    do
    {
        printf("\n\n###################################################");
        printf("\n#              BOOK MANAGEMENT SYSTEM             #");
        printf("\n###################################################");

        printf("\n\n1. Display All Books");
        printf("\n2. Add Book");
        printf("\n3. Search Book");
        printf("\n4. Update Book");
        printf("\n5. Delete Book");
        printf("\n6. Sorted By Price");
        printf("\n7. Sorted By Rating");
        printf("\n8. Top 3");
        printf("\n0. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);


        if(choice == 1)
        {
            display(b, n);
        }

        else if(choice == 2)
        {
            addBook(&b, &n, &capacity);
        }

        else if(choice == 3)
        {
            searchBook(b, n);
        }

        else if(choice == 4)
        {
            update(b, n);
        }

        else if(choice == 5)
        {
            deleteBook(b, &n);
        }

        else if(choice == 6)
        {
            sortprice(b, n);
        }

        else if(choice == 7)
        {
            sortrating(b, n);
        }

        else if(choice == 8)
        {
            top3(b, n);
        }

        else if(choice == 0)
        {
            printf("\nThank You!\n");
        }

        else
        {
            printf("\nInvalid Choice!");
        }

    } while(choice != 0);


    /* Free Heap Memory */
    free(b);

    return 0;
}


/* DISPLAY ALL BOOKS */

void display(Book b[], int n)
{
    int i;

    printf("\n\n--------- ALL BOOKS ---------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBOOK ID   : %d", b[i].id);
        printf("\nBOOK NAME : %s", b[i].name);
        printf("\nAUTHOR    : %s", b[i].auther);
        printf("\nPRICE     : %.2f", b[i].price);
        printf("\nRATING    : %.1f", b[i].rating);

        printf("\n_________________________________\n");
    }
}


/* ADD BOOK */

void addBook(Book **b, int *n, int *capacity)
{
    int id;
    int i;
    int duplicate;


    if(*n >= *capacity)
    {
        printf("\nStorage is full!");
        return;
    }

    do
    {
        duplicate = 0;

        printf("\nEnter Book ID: ");
        scanf("%d", &id);


        /* Check Duplicate ID */

        for(i = 0; i < *n; i++)
        {
            if((*b)[i].id == id)
            {
                duplicate = 1;
                printf("Book ID already exists! Enter another ID.\n");
                break;
            }
        }

    } while(duplicate == 1);


    (*b)[*n].id = id;


    /* Book Name */

    printf("Enter Book Name: ");
    scanf(" %[^\n]", (*b)[*n].name);


    /* Author Name */

    printf("Enter Author Name: ");
    scanf(" %[^\n]", (*b)[*n].auther);


    do
    {
        printf("Enter Price: ");
        scanf("%f", &(*b)[*n].price);

        if((*b)[*n].price < 0)
        {
            printf("Price cannot be negative.\n");
        }

    } while((*b)[*n].price < 0);


    /* Rating */

    do
    {
        printf("Enter Rating (0 - 5): ");
        scanf("%f", &(*b)[*n].rating);

        if((*b)[*n].rating < 0 ||
           (*b)[*n].rating > 5)
        {
            printf("Rating must be between 0 and 5.\n");
        }

    } while((*b)[*n].rating < 0 ||
            (*b)[*n].rating > 5);


    /* Increase Number of Books */

    *n = *n + 1;


    printf("\nBook Added Successfully!\n");
}


/* SEARCH BOOK */

void searchBook(Book b[], int n)
{
    char name[50];
    int i;
    int found = 0;

    printf("\nEnter Book Name: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < n; i++)
    {
        if(strstr(b[i].name, name) != NULL)
        {
            printf("\nBook Found!\n");

            printf("\nBOOK ID   : %d", b[i].id);
            printf("\nBOOK NAME : %s", b[i].name);
            printf("\nAUTHOR    : %s", b[i].auther);
            printf("\nPRICE     : %.2f", b[i].price);
            printf("\nRATING    : %.1f\n", b[i].rating);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nBook Not Found!\n");
    }
}


/* UPDATE BOOK */

void update(Book b[], int n)
{
    int id;
    int i;
    int found = 0;


    printf("\nEnter Book ID to Update: ");
    scanf("%d", &id);


    for(i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            printf("\nBOOK NAME  : %s", b[i].name);
            printf("\nAUTHOR     : %s", b[i].auther);
            printf("\nOLD PRICE  : %.2f", b[i].price);
            printf("\nOLD RATING : %.1f\n", b[i].rating);


            /* New Price */

            do
            {
                printf("\nEnter New Price: ");
                scanf("%f", &b[i].price);

                if(b[i].price < 0)
                {
                    printf("Price cannot be negative.\n");
                }

            } while(b[i].price < 0);


            /* New Rating */

            do
            {
                printf("Enter New Rating (0 - 5): ");
                scanf("%f", &b[i].rating);

                if(b[i].rating < 0 ||
                   b[i].rating > 5)
                {
                    printf("Rating must be between 0 and 5.\n");
                }

            } while(b[i].rating < 0 ||
                    b[i].rating > 5);


            printf("\nBook Updated Successfully!\n");

            found = 1;

            break;
        }
    }


    if(found == 0)
    {
        printf("\nBook Not Found!\n");
    }
}


/* DELETE BOOK */

void deleteBook(Book b[], int *n)
{
    int id;
    int i;
    int j;
    int found = 0;


    printf("\nEnter Book ID to Delete: ");
    scanf("%d", &id);


    for(i = 0; i < *n; i++)
    {
        if(b[i].id == id)
        {
            for(j = i; j < *n - 1; j++)
            {
                b[j] = b[j + 1];
            }


            *n = *n - 1;


            printf("\nBook Deleted Successfully!\n");

            found = 1;

            break;
        }
    }


    if(found == 0)
    {
        printf("\nBook Not Found!\n");
    }
}


/* SORT BY PRICE */

void sortprice(Book b[], int n)
{
    int i;
    int j;

    Book temp;


    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(b[i].price > b[j].price)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }


    printf("\nBooks Sorted By Price\n");

    display(b, n);
}


/* SORT BY RATING */

void sortrating(Book b[], int n)
{
    int i;
    int j;

    Book temp;


    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(b[i].rating < b[j].rating)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }


    printf("\nBooks Sorted By Rating\n");

    display(b, n);
}


/* TOP 3 BOOKS */

void top3(Book b[], int n)
{
    int i;
    int j;

    Book temp;


    if(n < 3)
    {
        printf("\nAt least 3 books are required!\n");
        return;
    }


    Book tempBooks[50];


    for(i = 0; i < n; i++)
    {
        tempBooks[i] = b[i];
    }


    /* Sort Temporary Array By Rating */

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(tempBooks[i].rating < tempBooks[j].rating)
            {
                temp = tempBooks[i];
                tempBooks[i] = tempBooks[j];
                tempBooks[j] = temp;
            }
        }
    }


    /* Display Top 3 */

    printf("\n\n---------- TOP 3 BOOKS ----------\n");


    for(i = 0; i < 3; i++)
    {
        printf("\nBOOK ID   : %d", tempBooks[i].id);
        printf("\nBOOK NAME : %s", tempBooks[i].name);
        printf("\nAUTHOR    : %s", tempBooks[i].auther);
        printf("\nPRICE     : %.2f", tempBooks[i].price);
        printf("\nRATING    : %.1f", tempBooks[i].rating);

        printf("\n_________________________________\n");
    }
}