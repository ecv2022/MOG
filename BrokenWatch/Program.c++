#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long> R;
long long CasosPrueba, Span, ManyTimes;
long long Clock(){
	long long TimeTotal=1, First=1;
	for(long long Z=Span;Z!=First;Z=(Z+Span)%60){
		First=(First+1)%60;
		TimeTotal++;
	}
	return TimeTotal;
}
int main()
{
	cin>>CasosPrueba;
	for(long long z=0;z<CasosPrueba;z++){
		cin>>ManyTimes>>Span;
		R.push_back(Clock()*ManyTimes);
	}
	for(long long z=0;z<CasosPrueba;z++){
		cout<<R[z]<<"\n";
	}
	return 0;
}

