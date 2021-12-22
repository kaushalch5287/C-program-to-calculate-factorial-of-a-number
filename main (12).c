/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int c, n, f = 1;
printf("Enter a number to calculate its factorial\n");
 scanf("%d", &n);
 for (c = 1; c <= n; c++)
 f = f * c;
printf("Factorial of %d = %d\n", n, f);
return 0;
}
