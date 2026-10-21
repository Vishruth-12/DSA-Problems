#include <iostream>
using namespace std;
int main(){int a[]={2,5,8,12,16,23,38},target=16,l=0,r=6;while(l<=r){int m=l+(r-l)/2;if(a[m]==target){cout<<m<<'\n';return 0;}if(a[m]<target)l=m+1;else r=m-1;}cout<<"Not found\n";}