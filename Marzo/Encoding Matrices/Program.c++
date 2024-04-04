#include <bits/stdc++.h>
using namespace std;

long long N;
string Dato;
vector<string> M;

char Problem(){
    int One=0, Cero=0;
    for(int i=0;i<N;i++){
        for(int z=0;z<N;z++){
            if(M[i][z]=='0'){
                Cero++;
            }
            else{
                One++;
            }
        }
    }
    if(Cero==One){
        return M[0][0];
    }
    else if(Cero>One){
        return '0';
    }
    else{
        return '1';
    }
}
void Solve(char Mayor){
    for(int i=0;i<N;i++){
        for(int z=0;z<N;z++){
            if(M[i][z]==Mayor){
                cout<<"*";
            }
            else{
                cout<<"o";
            }
        }
        cout<<"\n";
    }
}
int main() {
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>Dato;
        M.push_back(Dato);
    }
    Solve(Problem());
    return 0;
}