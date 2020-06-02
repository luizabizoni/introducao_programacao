#include <iostream>

using namespace std ;

int main (){

	bool a, b, c;
	float x, y;
	int l;

	a = 0;
	b = 1;
	c = 0;
	x = 11.5;
	y = 3.2;
	x = x + 1;

	if (c || ((x+y>5) || (!a && b)))
	{
		l = 0;
	} else
	{
		l = 1;
	}

	cout << "\n" << l << "\n";
	
	system ("pause") ;
	return 0 ;
}