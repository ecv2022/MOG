#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
	cin>>a;
	int z=0;
	string Inicial;
	if(a[0]=='0'){
		Inicial="01";
	}
	else{
		Inicial="10";
	}
	for(int x=0;x<a.size();x++){
		if(a[x]!=Inicial[x%2]){
			z++;
		}
	}
	cout<<z;
	return 0;
}

