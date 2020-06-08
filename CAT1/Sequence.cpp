#include <iostream>
#include"Sequence.h"
#include <stdexcept>
#include <cmath>
#include <algorithm>


using namespace std;


//private: 
//	double* arr;
//	int arrSize;
//	int maxSize;
//    


// Makes an empty array of size 2
Sequence::Sequence()
{
	arr = new double[2];
    for (int i = 0; i < 2;i++){
        arr[i] = 0;
    }
	maxSize = 2;
	arrSize = 0;  
}


// Makes a copy of se
Sequence::Sequence(const Sequence& se) throw(bad_alloc)
{
	copySequence(se);
}


// Makes a copy of se
Sequence& Sequence::operator=(const Sequence& se) throw(bad_alloc) 
{
        Sequence copy = se;
        std::swap( *this, copy );
        return *this;
}


// Deallocates memory
Sequence::~Sequence()
{
    int i;
    for (i = 0; i < arrSize;i++){
        delete arr;
        arr = nullptr;
    }
//	delete arr;
	arr = nullptr;
}


// copies perameter into calling object
void Sequence::copySequence(const Sequence& se) throw(bad_alloc)
{
	// Deep Copy
	arrSize = se.arrSize;
	maxSize = se.maxSize;

	// Copy the underlying array
	arr = new double[arrSize];
	for (int i = 0; i < maxSize; ++i)
	{
		arr[i] = se.arr[i];
	}
}


// Inserts it's double perameter at the next availiable index
// ins
void Sequence::insert(double value)
{

    int totalSize=arrSize+1;
    if (totalSize > maxSize) {
        double* oldArr=arr;
        arr=new double[totalSize];

    for(int i=0;i<arrSize;i++){ 
    
        arr[i]=oldArr[i];
        }
    }


	if (maxSize == arrSize)
	{
        maxSize++;
        cout << "full" <<endl;
	}
	arr[arrSize] = value;
    arrSize++;

    
}

//inserts  aryas a
void Sequence::insert(double array[], int size)
{
    int i;
    int j;
    int totalSize=arrSize+size;

    if (totalSize > maxSize) {
        double* oldArr=arr;
        arr=new double[totalSize];

    for(j=0;j<arrSize;j++){ 
    
        arr[j]=oldArr[j];
        }
    }

    for (i = 0; i < size; i++){
    if (maxSize == arrSize)
	{
        maxSize++;
	}
        arr[arrSize] = array[i];
        arrSize++;
    }
    
}

//returns value equal to the number of sequence elements whose value is equal to its double perameter
int Sequence::find(double value)
{
    for (int i = 0; i < maxSize; i++){
        if(arr[i] == value){
            return i;
        }
    }
	return 0;
}

void Sequence::print(){
    cout << "printing "<< arrSize << " { " ;
    for (int i = 0; i < maxSize; i++){
       cout<< " "<< arr[i];
        if (i < maxSize-1){
            cout << ", ";
        }
     }
    cout << " } "<<endl;
    }

// returns value equal to the number of values in the calling object
int Sequence::size() const
{   
    return arrSize;
}

// returns a value equal to the sum of the values in the calling object
double Sequence::sum()
{
    double sum = 0;

     for (int i = 0; i < maxSize; i++){
        sum += arr[i];
     }
    sum = sum;
    return sum;
}

// return average of values in the calling object
double Sequence::mean()
{
    double total = 0; 
    double mean = 0;
     for (int i = 0; i < arrSize; i++){
        total += arr[i];
     }
    mean = total / arrSize;

    return mean;
}

// return median of values in calling object
double Sequence::median()
{    
    double median =0;

 sort(arr,arr+arrSize);
    
    median = arr[arrSize/2];

    return median;
}

// returns the standard deviation of the values in the calling object
double Sequence::stddev()
{
    int i;
    double stddev = 0;
    
    //using mean
    double total = 0; 
    double mean = 0;
     for (int j = 0; j < arrSize; j++){
        total += arr[j];
     }
    mean = total / arrSize;
    
    for (i = 0; i < arrSize; i++){
        stddev = pow(arr[i] - mean, 2);
    }
    
    return sqrt( stddev / arrSize);
}

// function definition for concatenate()

Sequence& Sequence::concatenate(const Sequence& se){

int totalSize=this->arrSize+se.arrSize;
    //when our current array can not store other sequence so new sequence
if(this->maxSize<totalSize) {
    double* oldArr=arr;
    //make new array like new fried chicken.
    arr=new double[totalSize];
    //copy current array
    for(int i=0;i<this->arrSize;i++){ 
    
    arr[i]=oldArr[i];
    }
    
//assining new max size 
    maxSize=totalSize;
    }
    
    //now concatenate the se sequence into current sequence
    for(int i=arrSize;i<maxSize;i++)
    {
    arr[i]=se.arr[i-arrSize];

    }
    arrSize=maxSize;
return *this;

}
    