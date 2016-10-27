#include <iostream>
#include "PointArray.h"
using namespace std;

PointArray::PointArray(){
	tam=0;
	points=new Point[tam];
}
PointArray::PointArray(const Point p[],const int t){
	tam=t;
	points=new Point[tam];
	
	for(int i=0;i<tam;i++){
		points[i]=p[i];
	}
}
PointArray::PointArray(const PointArray &p)
{
	tam=p.tam;
	points=new Point[tam];
	
	for(int i=0;i<tam;i++){
		points[i]=p.points[i];
	}
}

void PointArray::printArray(){
	for(int i=0;i<tam;i++){
		points[i].print_point();
	}
}
void PointArray::push_back(const Point &p){
	++tam;
	PointArray(points,tam);
	points[tam-1]=p;
}
void PointArray::insert(const int index, const Point &p){
	int len=tam-index;
	Point *temp=new Point[len];
	for(int i=0;i<len;i++)
	{
		temp[i]=points[i+index];
	}
	points[index]=p;
	++tam;
	PointArray(points,tam);
	for(int i=0,j=index+1; i<len ; i++,j++)
	{
		points[j]=temp[i];
	}
	
}
void PointArray::remove(const int index)
{
	int len=tam-index-1;
	Point *temp= new Point[len];
	for(int i=0;i<len;i++){
		temp[i]=points[i+index+1];
	}
	--tam;
	PointArray(points,tam);
	for(int i=0;i<len;i++){
		points[index+i]=temp[i];
	}
}
const int PointArray::getSize(){
	return tam;
}
void PointArray::clear(){
	tam=0;
	points=new Point[tam];
	delete points;
}
