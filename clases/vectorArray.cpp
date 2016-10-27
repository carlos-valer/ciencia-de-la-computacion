#include <iostream>
#include "VectorArray.h"

using namespace std;

VectorArray::VectorArray()
{
	size=0;
	vectors= new Vector[size];
}

VectorArray::VectorArray(const Vector v[], const int t)
{
	size=t;
	vectors= new Vector[size];
	for(int i=0;i<size;i++)
	{
		vectors[i]=v[i];
	}
}

VectorArray::VectorArray(const VectorArray &v )
{
	size=v.size;
	vectors= new Vector[size];
	for(int i=0;i<size;i++)
	{
		vectors[i]=v.vectors[i];
		
	}
}
void VectorArray::print_VectorArray()
{
	for(int i=0; i<size ;i++)
	{
		vectors[i].printVector();
		cout<<endl;
	}
	
}
void VectorArray::push_back_VectorArray(const Vector &v)
{
	++size;
	vectors=new Vector[size];
	vectors[size-1]=v;
}
void VectorArray::insert_VectorArray(const int index, const Vector &v)
{
	int len=size-index;
	Vector *temp=new Vector[len];
	for(int i=0;i<len;i++)
	{
		temp[i]=vectors[i+index];
	}
	vectors[index]=v;
	++size;
	VectorArray(vectors,size);
	for(int i=0,j=index+1; i<len ; i++,j++)
	{
		vectors[j]=temp[i];
	}
}
void VectorArray::remove_VectorArray(const int index)
{
	int len=size-index-1;
	Vector *temp= new Vector[len];
	for(int i=0;i<len;i++){
		temp[i]=vectors[i+index+1];
	}
	--size;
	VectorArray(vectors,size);
	for(int i=0;i<len;i++){
		vectors[index+i]=temp[i];
	}
}
const int VectorArray::get_VectorSize()
{
	return size;
}
void VectorArray::clear_VectorArray()
{
	size=0;
	delete[] vectors;	
}
