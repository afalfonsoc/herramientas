#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int isprime(int a);
int sumprime(int imin, int imax);

int main(void){
  
  printf("isprime(%d)= %d\n", 7, isprime(7));
  printf("sumprime(%d, %d)= %d\n", 50, 300, sumprime(50, 300));
  
  return 0;
}

int isprime(int a){
  for(int ii = 2; ii<a/2; ii++){
    if(a%ii==0) return 0;
  }
  return 1;
}

int sumprime(int imin, int imax){
  int sum =0;
  for(int ii = imin; ii<=imax; ii++){
    if(isprime(ii))
      sum += ii;
  }
  return sum;
}
