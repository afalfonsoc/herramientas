#include <iostream>
#include <cmath>
#include <cstdio>
 
using namespace std;
//typedef float real;

int main(void){
  int n=0;
  double x1p=0, x1m=0, x2p=0, x2m=0;
  float a=1, b=1,c=0;

  for(n=1; n<=10; n++){
    c=pow(10.0,-n);
    float det=sqrt(b*b-4*a*c);
    x1p = (-b+det)/(2*a);
    x1m = (-b-det)/(2*a);
    x2p = (-2*c)/(b+det);
    x2m = (-2*c)/(b-det);
    printf("%10d %10.6f %10.6f %10.6f %10.6f\n", n, x1p, x1m, x2p, x2m);
  }

}
