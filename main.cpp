//wersja 2.4
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int x;//zmienna wyboru
	cout<<"Menu wyboru:"<<endl;
	cout<<"1. funkcja liniowa"<<endl;
	cout<<"2. Funkcja kwadratowa"<<endl;
	cout<<"Wybierz funkcje: ", cin>>x;
	
	float a, b, A, B, C;//funkcja linoiowa
	float aa, bb, cc, delta, x1, x2;//funkcja kwadratowa
	
	switch( x )
	{
	case 1:
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
		    break;
	   
	case 2:
		cout<<"\nfunkcja kwadratowa"<<endl;
		cout<<"podaj a: ", cin>>aa;
		cout<<"podaj b: ", cin>>bb;
		cout<<"podaj c: ", cin>>cc;
		
		if(aa==0)
			{
				cout<<"To jest funkcja linoiowa"<<endl;
				x1=-cc/bb;
				cout<<"miejsce zerowe to: "<<x1;
			}
			else
			{
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
		}
	    break;
	   
	default:
	    cout<<"Poda³eœ z³¹ wartoœæ";
	    break;
	}		
	return 0;
}
