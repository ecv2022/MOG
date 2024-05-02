#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> Z;
vector<pair<long long,string>> R;
long long N;
long long F(int i){
	long long Value=0;
	for(int z=0;z<Z[i].size();z++){
		Value+=int(Z[i][z]);
	}
	return Value;
}
void Sort(){
	pair<long long,string> rm;
	while(!N){
		for(int z=0;z<N-1;z++){
			if(R[z].first>R[z+1].first){
				rm=R[z];
				R[z]=R[z+1];
				R[z+1]=rm;
			}
		}
		N=true;
	}
}
int main()
{
	cin>>N;
	Z.resize(N);
	for(int i=0;i<N;i++){
		cin>>Z[i];
	}
	for(int i=0;i<N;i++){
		R.push_back(pair<int, string>(F(i), Z[i]));
	}
	Sort();
	for(int i=0;i<N;i++){
		cout<<R[i].second<<"\n";
	}
	return 0;
}

