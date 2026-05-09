#include<Stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a<=0|| b<=0 || c<=0 || (a+b+c !=180))
  {
      printf("invalid value");
      return 0;
  }
  if(a==b && b==c)
  {
      printf("Equilateral");
  }
  else if(a==b || b==c ||a==c)
  {
      printf("Isosceles");
  }
  else
  {
      printf("Isosceles");
  }
}
