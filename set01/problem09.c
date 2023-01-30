#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

float input()
{
  float n;
  printf("Enter a number");
  scanf("%f",&n);
  return n;
}

float square_root(float n){
  float x1=4;
  while(fabs(x1*x1-n)>0.0001){
    x1=(x1+n/x1)/2;
  }
  return x1;
}


void output(float n,float sqrroot)
{
  printf("The sqrroot number %f is %f",n,sqrroot);
}

float main(){
  float n,sqrroot;
  n=input();
  sqrroot= square_root(n);
  output(n,sqrroot);
  return 0;
}