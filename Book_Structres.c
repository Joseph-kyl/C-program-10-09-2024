#include <stdio.h>
#include<string.h>

struct book{
  char Title[30];
  char Author[30];
  int Publication_Year;
  char ISBN[13];
  float Price;
  
}book;
int main() {
strcpy(book.Title,"Introduction to C Programming");
strcpy(book.Author,"John Smith");
book.Publication_Year=2022;
 book.Price=49.99;

strcpy(book.ISBN,"9780131103627");

printf("Title : %s \n",book.Author);
printf("Publication Year: %d \n",book.Publication_Year);
printf("ISBN:%s \n",book.ISBN);
printf("Price : %.2f \n",book.Price);
   

    return 0;
}