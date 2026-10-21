#include <iostream>
using namespace std;
int main(){int a[]={4,8,15,16,23,42},target=23;for(int i=0;i<6;i++)if(a[i]==target){cout<<"Index: "<<i<<'\n';return 0;}cout<<"Not found\n";}