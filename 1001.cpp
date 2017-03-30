#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;

int main(){

  //freopen("in.txt","r",stdin);
  //freopen("out.txt","w",stdout);

  unsigned long long a;
  vector<double> v;

  while(cin>>a){
    v.push_back(a);
  }

  for(int i = v.size()-1; i>=0; i--){
    printf("%.4lf\n",sqrt(v.at(i)));
  }
  return 0;
}
