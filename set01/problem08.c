#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);
int input_array_size()

{
   int n;
  printf("enter the number:");
  scanf("%d",&n);
  printf("enter the element in array:");
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_n_array(int n, int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}
void output(int n, int a[n], int sum)
{
   int i;
  for(i=0;i<n-1;i++)
    {
      printf("%d+",a[i]);
    }
  printf("%d=%d",a[n-1],sum);
 
}
int main()
{
  int n,sum;
   n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_array(n,a);
  output(n,a,sum);
  return(0);
}





