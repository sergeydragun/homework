#ifndef STACK_H
#define STACK_H

#include <cassert> 
#include <iostream>

#include <iomanip> 

template <typename T>
class double_stack
{
private:
	T *stackPtr;                      
	const int size;                   
	int top;                          
public:
	double_stack(int = 10);                  
	double_stack(const double_stack<T> &);          
	~double_stack();                         

	inline void push(const T &);     //item -> top
	inline T pop();                   //delete item from top
	inline void printStack();         //the output of the stack on the screen
	inline const T &Peek(int) const;      //n item from top
	inline int getStackSize() const;    //get size of the stack
	inline T *getPtr() const;         //get the stack pointer
	inline int getTop() const;        //get number of the item
};




template <typename T>
double_stack<T>::double_stack(int maxSize) :
	size(maxSize) 
{
	stackPtr = new T[size]; 
	top = 0; 
}


template <typename T>
double_stack<T>::double_stack(const double_stack<T> & otherStack) :
	size(otherStack.getStackSize()) 
{
	stackPtr = new T[size]; 
	top = otherStack.getTop();

	for (int ix = 0; ix < top; ix++)
		stackPtr[ix] = otherStack.getPtr()[ix];
}


template <typename T>
double_stack<T>::~double_stack()
{
	delete[] stackPtr; 
}


template <typename T>
inline void double_stack<T>::push(const T &value)
{
	
	assert(top < size); 

	stackPtr[top++] = value; 
}


template <typename T>
inline T double_stack<T>::pop()
{
	
	assert(top > 0); 

	stackPtr[--top]; 
}


template <class T>
inline const T &double_stack<T>::Peek(int nom) const
{

	assert(nom <= top);

	return stackPtr[top - nom]; 
}


template <typename T>
inline void double_stack<T>::printStack()
{
	for (int ix = top - 1; ix >= 0; ix--)
		cout << "|" << setw(4) << stackPtr[ix] << endl;
}


template <typename T>
inline int double_stack<T>::getStackSize() const
{
	return size;
}


template <typename T>
inline T *double_stack<T>::getPtr() const
{
	return stackPtr;
}


template <typename T>
inline int double_stack<T>::getTop() const
{
	return top;
}

#endif