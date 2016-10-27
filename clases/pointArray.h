#ifndef POINTARRAY_H
#define POINTARRAY_H
#include <new>
#include "point.h"

class PointArray
{
	private:
		int tam;
		Point *points;
		
	public:
		PointArray();
		PointArray(const Point [],const int);
		PointArray(const PointArray &);
		
		void printArray();
		void push_back(const Point &);
		void insert(const int, const Point &);
		void remove(const int);
		const int getSize();
		void clear();
};

#endif
