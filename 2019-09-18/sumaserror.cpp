#include <iostream>
#include <cmath>
#include <cstdio>
 
using namespace std;
typedef float real;

real Suma1(int N){
  real sum=0.0;
  real sign=-1.0; 
  for(int i=1; i<=2*N; i++){
    sum +=sign*i/(i+1.0);
    sign*=-1;
  }
  return sum;
}

real Suma2(int N){
  real sum1=0.0, sum2=0.0;
  for(int i=1; i<=N; i++){
    sum1+=(2*i-1.0)/(2*i);
    sum2+=(2*i)/(2*i+1.0);
  }
  return -sum1+sum2;
}

real Suma3(int N){
  real sum=0.0;
  for(int i=1; i<=N; i++){
    sum+=1.0/((2*i)*(2*i+1));  
  }
  return sum;
}


int main(void){
  for(int n=1; n<=10000; n++){
    real S1=Suma1(n);
    real S2=Suma2(n);
    real S3=Suma3(n);
    real delta1= fabs((Suma1(n)-S3)/S3);
    real delta2= fabs((Suma2(n)-S3)/S3);
    printf("%10d %10.7e %10.7e %10.7e %10.7e %10.7e\n", n, S1, S2, S3, delta1, delta2);
  } 
  return 0;
}
