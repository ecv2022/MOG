#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> a(3);
vector<int> Resultados(3);
int Find(int Numero){
	bool R=true;
	for(int z=1;z<9;z++){
		for(int x=0;x<3;x++){
			if(a[x]==z||Resultados[x]==z){
				R=false;
				break;
			}
		}
		if(R){
			return z;
		}
		R=true;
	}
	return -1;
}
int main()
{
	cin>>a[0]>>a[1]>>a[2];
	Resultados[0]=-1;
	Resultados[1]=-1;
	Resultados[2]=-1;
	for(int z=0;z<3;z++){
		Resultados[z]=Find(a[z]);
	}
	cout<<Resultados[0]<<" "<<Resultados[1]<<" "<<Resultados[2];
	return 0;
}

