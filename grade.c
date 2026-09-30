#include <stdio.h>

int main()
{
   int marks;
    /* C program to find a student's grade. */
   
   printf("\n-----------------------------------");
    printf("\nEnter the marks between 0 and 100:");
   
   printf("\nEnter the mark: ");
   if (scanf("%d", &marks) != 1)
   {
       printf("\nInvalid input. Please enter a whole number.\n");
       return 1;
   }
   
   if (marks < 0 || marks > 100)
   {
    printf("\nPlease enter marks between 0 and 100.\n");
   }
   else
   {
       switch (marks / 5)
       {
           case 20:
           case 19:
           case 18:
           case 17:
               printf("\nYour grade is: A\n");
               break;
           case 16:
           case 15:
           case 14:
               printf("\nYour grade is: B\n");
               break;
           case 13:
           case 12:
           case 11:
               printf("\nYour grade is: C\n");
               break;
           case 10:
           case 9:
           case 8:
               printf("\nYour grade is: D\n");
               break;
           default:
               printf("\nYour grade is: F (Fail)\n");
               break;
       }
   }

 return 0;
}