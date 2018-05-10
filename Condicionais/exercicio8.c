#include <stdio.h>
int main()
{
 int x,y,z;
 printf("Digite 3 num: ");
 scanf("%d %d %d", &x, &y, &z);

 if(x>y)
   if(y>z)
   {
     printf("%3d %3d %3d\n", x,y,z);
   }
   else
    if(x>z)
    {
      printf("%3d%3d%3d\n", x,z,y);
    }
    else
    if(y>z)
    {
      if(x>z)
      {
        printf("%3d%3d%3d\n", y,x,z);
      }
      else
      printf("%3d%3d%3d\n", y,z,x);
    }
    else
    printf("%3d%3d%3d\n", z,y,x);
    return 0;
}
