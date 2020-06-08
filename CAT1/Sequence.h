#pragma once
#include<cstddef>
#include<stdexcept>
#include<new>
#include<algorithm>
#include<iostream>
using std::out_of_range;
using std::bad_alloc;
using std::cout;
using std::endl;

class Sequence
{
public:
	// Constructor
	// creates an empty array of size 2
	Sequence();

    Sequence(const Sequence& se) throw(bad_alloc);

	//Overloaded assignment operator
	Sequence & operator=(const Sequence& se) throw(bad_alloc);

	// Copy Constructor
	void copySequence(const Sequence& se) throw(bad_alloc);

	// Destructor
	~Sequence();

	// Methods

	void insert(double);

	void insert(double[], int);

	int find(double);

	int size() const;

	double sum();

	double mean();

	double median();

	double stddev();
    
    void print();
    
    void swap(double *x,double *y);

	Sequence & concatenate(const Sequence& se); 
private: 
	double* arr;
	int arrSize;
	int maxSize;
    
};