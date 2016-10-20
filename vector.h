#include "point.h"

class Vector{
	private:
		Point start;
		Point end;
	public:
		Vector(Point a,Point b){
			start=a;
			end=b;
		}
		void setPoint_s(Point);
		void setPoint_e(Point);
		Point getPoint_s();
		Point getPoint_e();
		double distance_points();
};
