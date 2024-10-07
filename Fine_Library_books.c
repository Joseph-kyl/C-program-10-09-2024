// Library system
#include <stdio.h>

int main() {
    
    int bookID, dueDate , returnDate , DaysOverdue , fineRate , fineAmount;
   
    printf("Enter the bookID: ");
    scanf("%d",&bookID);
    
    printf("Enter the dueDate: ");
    scanf("%d",&dueDate);
    
    printf("Enter the returnDate: ");
    scanf("%d",&returnDate);
    
    DaysOverdue = returnDate - dueDate;
    
    if (DaysOverdue <=7){
         fineRate = 20;
    } else  if (DaysOverdue <=14){
         fineRate = 50;
    } else  if (DaysOverdue <=14){
         fineRate = 50;
    } else  if (DaysOverdue >=15){
         fineRate = 100;
    }
    
    fineAmount = DaysOverdue * fineRate;
    
    printf("bookID: %d\n", bookID);
    printf("dueDate: %d\n", dueDate);
    printf("returnDate: %d\n", returnDate);
    printf(":DaysOverdue: %d\n", DaysOverdue);
    printf("fineRate: %d\n", fineRate);
    printf("fineAmount: %d\n", fineAmount);


    return 0;
}