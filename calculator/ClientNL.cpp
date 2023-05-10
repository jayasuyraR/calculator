#include<iostream>
#include"Result.cpp"
using namespace std;
void NL(int a[],int len){
  double result=a[0];
  for (int i = 1; i < len; i+=2)
  {
      switch (a[i])
      {
       case 1:
          result+=a[i+1];
          break;
       case 2:
          result-=a[i+1];
          break;
       case 3:
          result*=a[i+1];
          break;
       case 4:
          result/=a[i+1];
          break;
      default:
          break;
      } 
     
  }
   Resultfun(result);
  }


