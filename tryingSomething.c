#include <stdio.h>

int main();

int main()
{
    int grade;
  {
    printf("write your grade:\n");
    scanf("%d",&grade);

    if(grade>=90)
    {
        printf("A");
    }
    else if(grade>=80)
    {
        printf("B");
    }
    else if(grade>=70)
    {
        printf("C");
    }
    else
        printf("IDIOT!!!!!!!!!");
  }
  return 0;
}
