#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){
  
  double eps=1.0;
  //double N=1000;
  double one=1.0;
  for(int i=1; i<1200;i++){
    eps /= 2.0;
    one = 1.0+ eps;
    printf("%10d %20.16e %20.16e\n ", i, one, eps);
  }

  
}
