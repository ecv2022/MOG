#include <bits/stdc++.h>
using namespace std;
long long M,N,Q;
vector<long long> R,Z;
void Cambio(){
    if(0==R[1]){
        Z[0]=0;
    }
    else{
        Z[0]=1;
    }
    if(0==R[M-2]){
        Z[M-1]=0;
    }
    else{
        Z[M-1]=1;
    }
    for(int i=1;i<R.size()-1;i++){
        if(R[i-1]==R[i+1]){
            Z[i]=0;
        }
        else{
            Z[i]=1;
        }
    }
    R=Z;
    Z.empty();
    Z.resize(M,0);
}
int main() {
    cin>>M>>N;
    Z.resize(M,0);
    for(int i=0;i<M;i++){
        cin>>Q;
        R.push_back(Q);
    }
    for(int i=0;i<N;i++){
        Cambio();
    }
    for(int i=0;i<M;i++){
        cout<<R[i]<<" ";
    }
    

    return 0;
}