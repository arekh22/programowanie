//wersja 2.6.
#include <iostream>
#include <cmath>

using namespace std;
	
void kanoniczna (float p, float q, float ak){
	float a,b,c, x1, x2; 
	a = ak;
	b = (-2)*ak*p;
	c = ak*(p*p) + q;
	float delta = b*b -4*a*c;
	x1 = (-b*b - sqrt(delta))/(2*a);
	x2 = (-b*b + sqrt(delta))/(2*a);
	
	cout << "Funkcja w postaci ogolnej ma postac: " <<endl;
	cout << "a= "<<a <<" b= " <<b<<" c= "<<c<<endl;
	cout <<"Funkcja w postaci iloczynowej: "<<endl;
	cout<<"x1= "<<x1<<" x2= "<<x2<<endl;
}	




