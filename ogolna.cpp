//ogolna

#include <iostream>
#include <cmath>

using namespace std;

void ogolna(float a, float b, float c){
	float p, q, delta, x1, x2;
	delta=b*b-4*a*c;
	p=-b/2*a;
	q=-delta/(4*a);
	x1=(-b*b - sqrt(delta))/(2*a);
	x2=(-b*b + sqrt(delta))/(2*a);
	
	cout<<"funkcja w postaci kanonicznej: "<<endl;
	cout<<" p= "<<p<<" q= "<<q<<endl;
	cout<<"funkcja w postaci iloczynowej: "<<endl;
	cout<<" x1= "<<x1<<" x2= "<<x2<<endl;
}
