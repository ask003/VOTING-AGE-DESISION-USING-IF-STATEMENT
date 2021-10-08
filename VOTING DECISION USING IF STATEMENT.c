
#include <stdio.h>

int main()
{
  int age;
  printf("ENTER THE AGE: ");
  scanf("%d",&age);
  if(age>=18)
  {
      printf("ELIGEBLE TO VOTE");
  }
  else
  printf("NOT ELIGEBLE TO VOTE,WAIT UNTIL YOUR AGE IS 18");

    return 0;
}