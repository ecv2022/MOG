#include <bits/stdc++.h>
using namespace std;
int Ultimo=2,Especial=-1,z;
vector<int> Resultado;
vector<pair<int,int>> Pares(3);
vector<int> Caballeros(3), Dragones(3), C, D;
int a;
int main() {
    for(int m=0;m<3;m++){
        cin>>a;
        Caballeros[m]=a;
    }
    for(int m=0;m<3;m++){
        cin>>a;
        Dragones[m]=a;
    }
    C=Caballeros;
    D=Dragones;
    sort(C.begin(), C.end());
    sort(D.begin(), D.end());
    for(int r=0;r<3;r++){
        for(int b=0;b<3;b++){
            if(C[r]>D[b]){
                Pares[r].first=C[r];
                Pares[r].second=D[b];
                Especial=b;
            }
        }
        if(Especial==-1){
            Pares[r].first=C[r];
            Pares[r].second=D[Ultimo];
            C[r]=9999;
            D[Ultimo]=9999;
            Ultimo--;
        }
        else{
            D[Especial]=9999;
            C[r]=99999;
        }
    }
    for(int x=0;x<3;x++){
        for(int m=0;m<3;m++){
            if(Caballeros[x]==Pares[m].first){
                for(int z=0;z<3;z++){
                    if(Dragones[z]==Pares[m].second){
                        Resultado.push_back(z+1);
                    }
                }
            }
        }
    }
    int Power=0;
    for(int m=0;m<3;m++){
        if(Pares[m].first>Pares[m].second){
            Power++;
        }
    }
    if(Power<=1){
        cout<<"IMPOSSIBLE";
    }
    else{
        cout<<"POSSIBLE"<<"\n";
        for(int v=0;v<3;v++){
            cout<<Resultado[v]<<" ";
        }
    }
    return 0;
}