#include <bits/stdc++.h>
using namespace std;
int W=0,R=0;
string Honi="HONI",Z;
int main() {
    cin>>Z;
    for(int m=0;m<Z.size();m++){
        if(Z[m]==Honi[W]){
            W++;
            if(W==4){
                W=0;
                R++;
            }
        }
    }
    cout<<R;
    return 0;
}