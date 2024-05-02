using namespace std;
#include <bits/stdc++.h>
int Maximo=0,Posicion=0,a,Hit=0;
struct Pair{
    int Poder,Posicion;
};
bool Ordenar(Pair &a, Pair &b){
    return a.Poder>b.Poder;
}
Pair DragonModify;
vector<Pair> Dragones(3), Caballeros(3);
vector<int> Resultados(3);
bool Modificar(){
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            if(Caballeros[x].Poder>Dragones[y].Poder&&Maximo<Dragones[y].Poder){
                Maximo=Dragones[y].Poder;
                a=y;
            }
            else if(Dragones[y].Poder!=9999&&Maximo==0){
                a=y;
            }
        }
        if(Maximo!=0){
            Hit++;
        }
        Resultados[Caballeros[x].Posicion-1]=Dragones[a].Posicion;
        Dragones[a].Poder=9999;
        Maximo=0;
    }
    if(Hit<=1){
        return false;
    }
    return true;
}
int main() {
    for(int i=0;i<3;i++){
        cin>>Caballeros[i].Poder;
        Caballeros[i].Posicion=i+1;
    }
    for(int i=0;i<3;i++){
        cin>>Dragones[i].Poder;
        Dragones [i].Posicion=i+1;
    }
    sort(Caballeros.begin(),Caballeros.end(),Ordenar);
    sort(Dragones.begin(),Dragones.end(),Ordenar);
    if(Modificar()){
        cout<<"POSSIBLE"<<"\n";
        for(int i=0;i<3;i++){
            cout<<Resultados[i]<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE";
    }   
    return 0;
}