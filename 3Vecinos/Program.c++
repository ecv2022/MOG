#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long N,Z;
	vector<unsigned long long> X;
	cin>>N;
	for(unsigned long long i=0;i<N;i++){
		cin>>Z;
		if(Z%2!=0){
			Z=(((Z+1))*((Z/2)))+(((Z+1)/2))-((2*Z))+1;
		}
		else{
			Z=(((Z+1))*((Z/2)))-((2*Z))+1;
		}
		//Z=(Z+1)*(Z/2)-(2*Z)+1;
		X.push_back(Z%1000000007);
	}
	for(unsigned long long r=0;r<N;r++){
		cout<<X[r]<<"\n";
	}
	return 0;
}

