#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int z=0;
long long a,b,m;
vector<long long> Range(2);
long long F(long long X){
	long long Resultado=0;
	for(long long i=2;i<=sqrt(X);i++){
		if(X%i==0){
			Resultado+=i+(X/i);
		}
	}
	if(Resultado>X){
		return X;
	}
	return -1;
}
int main()
{
	cin>>a>>b;
	Range[0]=-1;
	Range[1]=-1;
	for(long long i=a;i<=b;i++){
		m=F(i);
		if(m!=-1){
			Range[0]=m;
			break;
		}
	}
	for(long long i=b;i>=a;i--){
		m=F(i);
		if(m!=-1){
			Range[1]=m;
			break;
		}
	}
	cout<<Range[0]<<" "<<Range[1];
	return 0;
}

