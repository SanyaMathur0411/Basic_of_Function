#include <stdio.h>

void swap(int *x, int *y);//function declaration
int main ()
{printf("RA2211042010042\n");

 int a = 100;
 int b = 200;
 printf("Before swap, value of a : %d\n", a );
 printf("Before swap, value of b : %d\n", b );
 
 swap(&a, &b);//call by reference 
 printf("After swap, value of a : %d\n", a );
 printf("After swap, value of b : %d\n", b );
 return 0;
}
void swap(int *x, int *y)
{
 int temp;
 temp = *x; 
 *x = *y; 
 *y = temp; 

 return;
}
