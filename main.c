// Author: Boyuan Lai bjl5716@psu.edu
// Collaborator: Alex Podlucky app5775@psu.edu
// Collaborator: Ilysa Sanchez-Perez ims5280@psu.edu
// Collaborator: Hetvi Devani hdd5060@psu.edu
// Section: 12
// Breakout: 10
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>

int sum_n(int n)
{
  if (n == 0)
  {
    return n;
  }
  else
  {
    return n+sum_n(n-1);
  }
}

void print_n(const char *s, int n)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    printf("%s\n",s);
    print_n(s,n-1);
    return;
  }
}

int main(void) 
{
  int x = atoi(readline("Enter an int: "));
  printf("Sum is: %d\n", sum_n(x));
  char *y = readline ("Enter a string: ");
  print_n(y,x);
  return 0;
}
