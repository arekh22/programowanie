//wersja 2.0
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	float a, b, A, B, C;
	cout<<"funkcja liniowa w postaci y=ax+b "<<endl;
	cout<<"podaj a: ", cin>>a;
	cout<<"podaj b: ", cin>>b;
	float x;
	if(a==0)
	{
		cout<<"funkcja stala"<<endl;
	}
	else
	{
		x=-b/a;
		cout<<"miejsce zerowe funkcji: "<<x<<endl;
	}
	
	cout<<"\nfunkcja liniowa w postaci kanonicznej"<<endl;
	
	cout<<"podaj A: ", cin>>A;
	cout<<"podaj B: ", cin>>B;
	cout<<"podaj C: ", cin>>C;
	
	float y;
	if(A==0)
	{
		cout<<"funkcja stala"<<endl;
	}
	else
	{
		x=-C/A;
		cout<<"miejsce zerowe funkcji: "<<x<<endl;
	}
	
	float aa, bb, cc, delta, x1, x2;
	cout<<"\nfunkcja kwadratowa"<<endl;
	cout<<"podaj a: ", cin>>aa;
	cout<<"podaj b: ", cin>>bb;
	cout<<"podaj c: ", cin>>cc;
	
	delta = bb*bb -4*aa*cc;
	
	if (delta>0) 
	{
		x1=(-bb-sqrt(delta))/2*aa;
		x2=(-bb+sqrt(delta))/2*aa;
		cout<<"x1= "<<x1<<"\nx2= "<<x2<<endl;
	}
	else if (delta==0)
	{
		x1=-bb/2*aa;
		cout<<"funkcja kwadratowa posiada jedno miejsce zerowe: "<<x1<<endl;
	}
	else
	{
		cout<<"funkcja kwadratowa nie ma miejsc zeroweych"<<endl;
	}
	
	
	return 0;
}
