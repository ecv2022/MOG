#include <bits/stdc++.h>
using namespace std;
string a,b,R="",z;
long long r,Min=97,Max=122,q=0;
int main() {
    cin>>a>>b;
    cin>>r;
    for(int i=0;i<r;i++){
        if((int)a[i]<=(int)b[i]){
            R.push_back((char)((int)b[i]-(int)a[i])+Min);
        }
        else{
            R.push_back(((char)((((int)b[i]-Min))+(Max-(int)a[i]))+Min)+1);
        }
    }
    for(int i=r;i<a.size();i++){
        if((int)a[i]<=(int)b[i]){
            if(R[q]!=((char)((int)b[i]-(int)a[i])+Min)){
                cout<<-1;
                return 0;
            }
        }
        else{
            if(R[q]!=((char)((((int)b[i]-Min))+(Max-(int)a[i]))+Min)+1){
                cout<<-1;
                return 0;
            }
        }
        q=(q+1)%R.size();
    }
    cout<<R;
    return 0;
}