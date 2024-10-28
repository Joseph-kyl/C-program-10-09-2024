#include <stdio.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    struct book myBook;

    printf("Enter the title of the book: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);

    printf("Enter the author of the book: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);

    printf("Enter the publication year: ");
    scanf("%d", &myBook.publication_year);

    printf("Enter the ISBN: ");
    scanf("%s", myBook.ISBN);

    printf("Enter the price: ");
    scanf("%f", &myBook.price);

    printf("\nBook Details:\n");
    printf("Title: %s", myBook.title);
    printf("Author: %s", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}