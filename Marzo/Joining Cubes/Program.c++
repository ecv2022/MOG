#include <bits/stdc++.h>
using namespace std;
string N;
int P=0,Z=0,R=0;
int main() {
    cin>>N;
    for(int i=0;i<N.size();i++){
        if(N[i]=='0'){
            R++;
        }
        else{
            Z++;
        }
    }
    R>Z?cout<<Z*2:cout<<R*2;

    return 0;
}