//wersja 1.4
#include <iostream>

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
	
	
	return 0;
}
