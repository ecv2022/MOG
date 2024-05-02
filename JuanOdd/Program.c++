#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long D,Z;
long long Problem(){
	long long T=0;
	Z=D%5;
	D/=5;
	for(int i=1;i<Z*2;i+=2){
		T+=i;
	}
	return D*1+D*3+D*5+D*7+D*9+T;
}
int main()
{
	cin>>D;
	cout<<Problem();
	return 0;
}

