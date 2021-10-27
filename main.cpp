//wersja 1.2
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float a, b;
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

	
	
	return 0;
}
