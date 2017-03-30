#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  //freopen("in.txt","r",stdin);
  //freopen("out.txt","w",stdout);

  int f;

  cin>>f;

  if(((12-f)*45)+60 <=300)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}
