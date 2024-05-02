#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<long long> A;
	long long Pisos,Paquetes,PC;
	cin>>Pisos>>Paquetes>>PC;
	A.resize(Pisos);
	for(long long a=0;a<Paquetes;a++){
		cin>>A[a];
	}
	if(Paquetes%PC!=0){
		cout<<Paquetes/PC+1;
	}
	else{
		cout<<Paquetes/PC;
	}

	return 0;
}

