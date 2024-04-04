#include <bits/stdc++.h>
using namespace std;
string N,R;
long long Calculo(string Value, char a, char b){
    for(int i=0;i<Value.size();i++){
        if(Value[i]==a){
            Value[i]=b;
        }
    }
    return stoi(Value);
}
int main() {
    cin>>N>>R;
    cout<<Calculo(N,'6','5')+Calculo(R,'6','5')<<" "<<Calculo(R,'5','6')+Calculo(N,'5','6');
    return 0;
}