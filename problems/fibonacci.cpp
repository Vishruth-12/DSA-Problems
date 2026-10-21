#include <iostream>
using namespace std;
int main(){int n=10,a=0,b=1;for(int i=0;i<n;++i){cout<<a<<' ';int next=a+b;a=b;b=next;}cout<<'\n';}