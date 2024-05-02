#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<bool> M(11,false);
void Recursividad(int z, int x, string P){
	if(x<=0){
		cout<<P;
		cout<<"\n";
		return;
	}
	for(int a=1;a<=z;a++){
		if(M[a]==false){
			M[a]=true;
			Recursividad(z, x-1, (P+to_string(a)+" "));
			M[a]=false;
		}
	}
}
int main()
{
	int a;
	cin>>a;
	Recursividad(a, a, "");
	return 0;
}

