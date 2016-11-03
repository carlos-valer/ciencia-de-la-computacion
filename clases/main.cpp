#include<iostream>
#include "triangulo.h"
#include "rectangulo.h"

using namespace std;

int main () {
	Point p1(0,0),p2(0,4),p3(5,0);
	Triangulo t(p1,p2,p3);
	cout<<t.area();

	return 0;
}
