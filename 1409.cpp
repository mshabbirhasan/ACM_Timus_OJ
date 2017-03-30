#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
  //freopen("in.txt","r", stdin);
  //freopen("out.txt","w",stdout);

  int a, b;
  cin>>a>>b;
  int total = a + b - 1;
  cout<<(total-a)<<" "<<(total-b)<<endl;
  return 0;
}
