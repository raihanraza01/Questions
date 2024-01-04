#include<stdio.h>
void fibonacci(int n)
{
   int t1=0, t2=1, nextTerm;
   for(int i=0; i<n; i++)
   {
     printf("%d ", t1);
     nextTerm = t1+t2;
     t1 = t2;
     t2 = nextTerm;
   }
}

int main()
{
   int term;

   printf("Enter the term: ");
   scanf("%d", &term);

   printf("The fibonacci series is: \n");

   fibonacci(term);

   return 0;
}