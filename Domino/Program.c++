#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
	cin>>a>>b>>c>>d;
	if(a==c||a==d||b==c||b==d){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}

