#include <bits/stdc++.h>
using namespace std;
long long a,b,MayorTotal=1,Mayor=1;
vector<long long> R;
int main() {
    cin>>a>>b;
    R.resize(a);
    for(int i=0;i<a;i++){
        cin>>R[i];
    }
    for(int i=1;i<a;i++){
        if(R[i]-R[i-1]<=b){
            Mayor++;
            if(Mayor>MayorTotal){
                MayorTotal=Mayor;
            }
        }
        else{
            Mayor=1;
        }
    }
    cout<<MayorTotal;
    return 0;
}