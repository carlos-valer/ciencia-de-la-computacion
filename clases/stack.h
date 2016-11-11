#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <class T> class Stack{
	public:
		std::vector <T> array;
		
	private:
		Stack();
		void push(const T &);
		void pop();
		T &top()const;
		bool empty()const;
//		Stack &operator+(Stack <T>a, Stack <T>b);  //void
		
};

#endif
