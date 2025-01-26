#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char title[100];
    char author[100];
    int year;
    int id;
} Book;

void addBook(Book **library, int *count);
void viewBooks(Book *library, int count);
void modifyBook(Book *library, int count);
void deleteBook(Book **library, int *count);
void freeLibrary(Book *library);

int main()
{
    Book *library = NULL;
    int bookCount = 0;
    int choice;

    do
    {
        printf("\n=== Dynamic Library Manager ===\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Modify Book Details\n");
        printf("4. Delete a Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook(&library, &bookCount);
            break;
        case 2:
            viewBooks(library, bookCount);
            break;
        case 3:
            modifyBook(library, bookCount);
            break;
        case 4:
            deleteBook(&library, &bookCount);
            break;
        case 5:
            freeLibrary(library);
            printf("Exiting program. Memory deallocated.\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addBook(Book **library, int *count)
{
    *library = realloc(*library, (*count + 1) * sizeof(Book));
    if (*library == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("\nEnter book details:\n");
    printf("Title: ");
    getchar();
    fgets((*library)[*count].title, 100, stdin);
    (*library)[*count].title[strcspn((*library)[*count].title, "\n")] = '\0';

    printf("Author: ");
    fgets((*library)[*count].author, 100, stdin);
    (*library)[*count].author[strcspn((*library)[*count].author, "\n")] = '\0';
    printf("Year: ");
    scanf("%d", &(*library)[*count].year);

    (*library)[*count].id = *count + 1;
    (*count)++;

    printf("Book added successfully!\n");
}

void viewBooks(Book *library, int count)
{
    if (count == 0)
    {
        printf("\nNo books in the library.\n");
        return;
    }

    printf("\nLibrary contains the following books:\n");
    for (int i = 0; i < count; i++)
    {
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Year: %d\n\n", library[i].year);
    }
}

void modifyBook(Book *library, int count)
{
    if (count == 0)
    {
        printf("\nNo books to modify.\n");
        return;
    }

    int id;
    printf("\nEnter the ID of the book to modify: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            printf("\nEnter new details for the book:\n");
            printf("Title: ");
            getchar();
            fgets(library[i].title, 100, stdin);
            library[i].title[strcspn(library[i].title, "\n")] = '\0';

            printf("Author: ");
            fgets(library[i].author, 100, stdin);
            library[i].author[strcspn(library[i].author, "\n")] = '\0';

            printf("Year: ");
            scanf("%d", &library[i].year);

            printf("Book details updated successfully!\n");
            return;
        }
    }

    printf("Book with ID %d not found.\n", id);
}

void deleteBook(Book **library, int *count)
{
    if (*count == 0)
    {
        printf("\nNo books to delete.\n");
        return;
    }

    int id;
    printf("\nEnter the ID of the book to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++)
    {
        if ((*library)[i].id == id)
        {

            for (int j = i; j < *count - 1; j++)
            {
                (*library)[j] = (*library)[j + 1];
            }
            (*count)--;

            *library = realloc(*library, (*count) * sizeof(Book));
            if (*library == NULL && *count > 0)
            {
                printf("Memory reallocation failed!\n");
                exit(1);
            }

            printf("Book deleted successfully!\n");
            return;
        }
    }

    printf("Book with ID %d not found.\n", id);
}

void freeLibrary(Book *library)
{
    free(library);
}
