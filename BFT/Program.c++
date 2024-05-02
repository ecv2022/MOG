#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long> z;
int main()
{
	long long N=99999999,M=-1,R,Z;
	cin>>R;
	for(int i=0;i<R;i++){
		cin>>Z;
		z.push_back(Z);
	}
	sort(z.begin(), z.end());
	cout<<z[R-1]-z[0];
	return 0;
}

