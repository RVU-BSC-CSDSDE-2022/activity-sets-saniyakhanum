#include<stdio.h>
struct complex {
	int real;
	int img;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main(){
  Complex a,b,sum;
  a = input_complex();
  b = input_complex();
  sum = add_complex(a,b);
  output(a,b,sum);
}

Complex input_complex(){
  Complex a;
  printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
  return(a);
}
















