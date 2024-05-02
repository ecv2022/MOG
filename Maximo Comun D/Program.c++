#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,n;
vector<int> Z;
int main()
{
	cin>>a>>b>>c;
	a>=b?d=b:d=a;
	for(int i=d;i>0;i--){
		if(b%i==0&&a%i==0){
			Z.push_back(i);
		}
	}
	sort(Z.begin(), Z.end());
	cout<<Z[Z.size()-c];
	return 0;
}

