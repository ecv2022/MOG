#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long> Posicion(2,0);
vector<int> Giros={1,-1,-1,1};
string Direccions;
long long Cantidad, Avanzar, Giro;
int Final(){
	int Resultado=0;
	if(Posicion[0]==0&&Posicion[1]==0){
		return 0;
	}
	Resultado+=1;
	for(int i=0;i<=1;i++){
		if(Posicion[i]!=0){
			Resultado+=1;
		}
	}
	if(((Posicion[0]>0&&Giro==0)||(Posicion[1]>0&&Giro==3)||((Posicion[0]<0&&Giro==2))||(Posicion[1]<0&&Giro==1))){
		Resultado+=1;
	}

	return Resultado;
}
void CalculoPosicion(){
	cin>>Direccions;
	if(Direccions=="F"){
		cin>>Avanzar;
		if(Giro%2==0){
			Posicion[Giro%2]+=Avanzar*Giros[Giro];
		}
		else{
			Posicion[Giro%2]+=Avanzar*Giros[Giro];
		}
	}
	else if(Direccions=="L"){
		Giro=(Giro+1)%4;
	}
	else if(Direccions=="R"){
		Giro-=1;
		if(Giro==-1){
			Giro=3;
		}
	}

}
int main()
{
	cin>>Cantidad;
	for(long long i=0;i<Cantidad;i++){
		CalculoPosicion();
	}
	cout<<Final();

	return 0;
}

