#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d=0;
int main()
{
	cin>>a;
	for(long long i=0;i<a;i++){
		cin>>b>>c;
		if(d<b+c){
			d=b+c;
		}
	}
	cout<<d;
	return 0;
}

