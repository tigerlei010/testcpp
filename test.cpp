#include <stdio.h>

int gcd(int a,int b)
{
  int cc = a%b;
  if(cc==0) {
    return b;
  }
  return gcd(b,cc);
}


int main(int argc,char* argv[] )
{
  int a = 1000;
  int b = 24;
  int c = gcd(a,b);
  printf(" gcd of %d and %d = %d \n" , a, b, c);
  return 0;
}

