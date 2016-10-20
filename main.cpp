#include<iostream>
#include "vector.h"

using namespace std;

int main () {
	Point p;
	Point a(2.0,3.0);
	Vector v(p,a);
	p = a;
	a.modify_point(3.3,2.3);
	cout<<v.distance_points();
	a.print_point();
	return 0;
}
