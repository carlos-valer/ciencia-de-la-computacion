#ifndef VECTORARRAY_H
#define VECTORARRAY_H
#include "Vector.h"
class VectorArray
{
	private:
		int size;
		Vector *vectors;
		
	public:
		VectorArray();
		VectorArray(const Vector [],const int);
		VectorArray(const VectorArray &);
		
		void print_VectorArray();
		void push_back_VectorArray(const Vector &);
		void insert_VectorArray(const int, const Vector &);
		void remove_VectorArray(const int);
		const int get_VectorSize();
		void clear_VectorArray();
};

#endif
