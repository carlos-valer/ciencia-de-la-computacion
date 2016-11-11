#include <iostream>
#include "stack.h"

template <class T>
Stack<T>::Stack(){}

template <class T>
void Stack<T>::push(const T &item){
	array.push_back(item);
}


template <class T>
void Stack<T>::pop() {
	if(!(array.empty())){
		array.pop_back();
	}
}



template <class T>
T &Stack<T>::top()const{
	return array.back();      
}


template <class T>
bool Stack<T>::empty()const{
	return array.empty();
}


//template <class T>
//Stack<T> &Stack<T>::operator+(Stack <T>a, Stack <T>b){
//	int i;
//	Stack <T>result;
//	result.array.resize(a.array.size()+b.array.size());
//	
//	for(i=0;i<a.array.size();i++){
//		result.array[i]=a.array[i];
//	}
//	while(j=0;j<b.array.size();j++){
//		result.array[i+j]=b.array[j];
//	}
//	
////	for(int i=0;i<b.array.size();i++){
////		result.array
////		/*result->array.push_back(a.array.front());*/
////	}
//	return result;
//}
