#include<iostream>
#include<cmath>

using namespace std;

int adiff(int A, int B){
  int C=abs(A-B);
  while(C>180){
    C=abs(C-360);
  }
  return C;
}

int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244);
}
