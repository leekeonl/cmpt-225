#include <iostream>
#include "Sequence.h"

using namespace std;
void basicTest();

int main(){
    Sequence seq;
    Sequence seq2;
    double array[2];
    for (int i = 0; i < 2;i++){
        array[i] = i*10;
    }
    // so here call or make sequence.

    seq.insert(8);
    seq.insert(12);
    seq.insert(array,2);
    seq.insert(24);
    seq.print();
    seq2.insert(6);
    seq2.insert(7);
    seq2.print();
    seq.concatenate(seq2);
    seq.print();
    seq2.print();
//
//
    
    cout << "the 8 is located on " <<seq.find(8)<<endl;
    cout <<  "the size of the array is "<<seq.size() << endl;
    cout << "the sum of the array is " << seq.sum() << endl;
    cout << "the mean of the array is " << seq.mean() <<endl;
    cout << "the median of the array is " << seq.median() << endl;
    cout << "the standard deviation of the array is " << seq.stddev() <<endl;
//    basicTest();

}
void basicTest()
{
	Sequence sq1;
	double numbers[] = { 1.1,2.2,3.3 };
	int n = 3;
 
    // insertion test
	sq1.insert(3.14);
	sq1.insert(numbers, n);
    
    sq1.print();

	int pies = sq1.find(3.14);
    
//    cout << pies << endl;
    
	int sqSize = sq1.size();
//        cout << sqSize << endl;
	double sqSum = sq1.sum();
//            cout << sqSum << endl;
	double sqMean = sq1.mean();
//                cout << sqMean << endl;

	double sqMedian = sq1.median();

	double sqStddev = sq1.stddev();
//                    cout << sqStddev << endl;

	Sequence sq2(sq1);
//    sq1.print();
    sq2.print();
    
    sq2.concatenate(sq1);
    sq2.print();
	Sequence sq3 = sq2.concatenate(sq1);
 
	cout << "end basic test" << endl;
}