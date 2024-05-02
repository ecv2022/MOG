#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<char, int> z;
int main()
{
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(z.find(a[i])!=z.end()){
			z[a[i]]++;
		}
		else{
			z[a[i]]=1;
		}
	}
	if(z.size()==2){
		for(int i=0;i<z.size();i++){
			if(z[i]%2!=0){
				cout<<"No";
				return 0;
			}
		}
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}

