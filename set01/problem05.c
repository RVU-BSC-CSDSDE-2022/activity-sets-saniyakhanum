#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
int n;
printf("Enter a number");
scanf("%d",&n);
return n;
}

int compare(int a ,int b, int c)
{
int largest;
if(a>b && a>c){
largest=a;
}

if (b>a && b>c){
largest=b;
}

else {
largest=c;
  }

return largest;
}

void output(int a, int b, int c, int largest)
{
printf("The largest of %d %d %d is %d",a,b,c,largest);
}

int main()
{
int a, b,c, largest;
a=input();
b=input();
c=input();  
largest=compare(a,b,c);
output(a,b,c,largest);
return 0;
}




