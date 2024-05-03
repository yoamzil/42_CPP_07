/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->array = NULL;
	this->size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->size = n;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
Array<T>::Array(Array const &original)
{
	this->size = original.size;
	this->array = new T[this->size];
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = original.array[i];
}

template <typename T>
Array<T>  &Array<T>::operator=(Array const &original)
{
	if (this->size > 0)
		delete[] this->array;
	this->array = new T[this->size];
	this->size = original.size;
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = original.array[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= this->size)
		throw std::out_of_range("Out of Bounds");
	return (this->array[index]);
}

template <typename T>
unsigned int    Array<T>::Size(void) const
{
	return (this->size);
}
