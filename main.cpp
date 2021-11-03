//wersja 2.6.
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	
	int x;//zmienna wyboru
	cout<<"Menu wyboru:"<<endl;
	cout<<"1. funkcja liniowa"<<endl;
	cout<<"2. Funkcja kwadratowa"<<endl;
	cout<<"3. Funkcja kwadratowa (postac kanoniczna)"<<endl;
	cout<<"Wybierz funkcje: ", cin>>x;
	
	float a, b, A, B, C;//funkcja linoiowa
	float aa, bb, cc, delta, x1, x2;//funkcja kwadratowa
	float ak, p, q, Ak, Bk, Ck, deltak, xk1, xk2; //funkcja kwadratowa kanoniczna
	
	
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
	    
	case 3:	
	
	cout<<"Funkcja kwadratowa w postaci kanonicznej: y=a(x-p)^2 + q"<<endl; //ax2-2apx+(ap2+q)
	cout<<"podaj a: ", cin>>ak;
	cout<<"podaj p: ", cin>>p;
	cout<<"podaj q: ", cin>>q;
	
	Ak=ak;
	Bk=-2*ak*p;
	Ck=ak*p*p+q;
	deltak=Bk*Bk-4*Ak*Ck;
		
		if(Ak==0)
			{
				cout<<"To jest funkcja linoiowa"<<endl;
				xk1=-Ck/Bk;
				cout<<"miejsce zerowe to: "<<xk1;
			}
			else
			{
				deltak = Bk*Bk -4*Ak*Ck;
		
			if (deltak>0) 
			{
				xk1=(-Bk-sqrt(deltak))/2*Ak;
				xk2=(-Bk+sqrt(deltak))/2*Ak;
				cout<<"x1= "<<xk1<<"\nx2= "<<xk2<<endl;
			}
			else if (deltak==0)
			{
				xk1=-Bk/2*Ak;
				cout<<"funkcja kwadratowa posiada jedno miejsce zerowe: "<<xk1<<endl;
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
