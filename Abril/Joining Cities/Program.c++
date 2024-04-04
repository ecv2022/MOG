#include <bits/stdc++.h>
using namespace std;
vector<int> Z;
int M;
long long R=0;
int main() {
    cin>>M;
    Z.resize(M);
    for(int i=0;i<M;i++){
        cin>>Z[i];
    }
    sort(Z.begin(),Z.end());
    for(int i=0;i<Z.size()-1;i++){
        R+=Z[i]-Z[i+1];
    }
    cout<<R*-1;

    return 0;
}