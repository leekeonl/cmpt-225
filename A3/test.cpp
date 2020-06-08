#include <iostream> // I/O library.
#include <algorithm> // Includes sort()
#include <ctime> // access to the system clock
#include <time.h> // access to "wall clock"
#include "Qsort.h" // our quicksort (and insertion sort)
using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

void printArray( char s[], int A[], int lo, int hi ){
  // call like this: printArray( "A1", A1, 0, SIZE-1 );
  // useful for debugging
  cout << s << " [ " ;
  for( int i = lo ; i < hi ; i++ ){
    cout << A[i] << ", " ;
  }
  cout << A[hi] << " ]" ;
  cout << endl;
}

int main (int argc, char * const argv[]) {

   int SIZE = 10000; // size of array to sort.
   int TIMES = 10 ; // number of times to run - mean is reported.

   srand( time(NULL) ); // seed the random number generator.

   clock_t start, finish ;// used to time function calls.

   double sort_time = 0;
   double quicksort_time = 0 ;
   double insertion_sort_time = 0 ;
    double quicksort_time2 = 0 ;
    double quicksort_time3 = 0 ;
    double selection_sort_time = 0;
    double quicksort_time4 = 0 ;

   int *A1 = new int[SIZE];
   int *A2 = new int[SIZE];
   int *A3 = new int[SIZE];
   int *A4 = new int[SIZE];
    int *A5 = new int[SIZE];
    int *A6 = new int[SIZE];
    int *A7 = new int[SIZE];

   for( int t = 0 ; t < TIMES ; t++ ){
       
       // the way of inserting element
       
        // reverse order
      for(int i = 0 ; i < SIZE ; i++ ){ 
         int x = SIZE - i ; // reverse-ordered 
         // int x = ( x == 2*(x/2) ?  SIZE - i : i );
         // int x = rand() % SIZE*10;
         A1[i] = x ;
         A2[i] = x ;
         A3[i] = x ;
         A4[i] = x ;
        A5[i] = x ;
        A6[i] = x ;
      }
//       
//       //order array 
//       for(int i = 0 ; i < SIZE ; i++ ){ 
//         
//         A1[i] = i;
//         A2[i] = i;
//         A3[i] = i;
//         A4[i] = i;
//        A5[i] = i;
//        A6[i] = i;
//        A7[i] = i;
//      }

//        //all same element
//       for(int i = 0 ; i < SIZE ; i++ ){ 
//         
//         A1[i] = 1;
//         A2[i] = 1;
//         A3[i] = 1;
//         A4[i] = 1;
//         A5[i] = 1;
//       A6[i] = 1;
//        A7[i] = 1;
//      }
//       
//       
//       //random element
//       
//         for(int i = 0 ; i < SIZE ; i++ ){ 
//         
//        int x = rand() % SIZE*10;
//         A1[i] = x ;
//         A2[i] = x ;
//         A3[i] = x ;
//         A4[i] = x ;
//        A5[i] = x ;
//        A6[i] = x ;
//        A7[i] = x ;
//      }
//       
      start = clock();
      sort(A1,A1+SIZE);
      finish = clock();
      sort_time += elapsed_time(start,finish);

      start = clock();
      QuickSort(A2,0,SIZE-1);
      finish = clock();
      quicksort_time += elapsed_time(start,finish);

      start = clock();
      InsertionSort(A3,0,SIZE-1);
      finish = clock();
      insertion_sort_time += elapsed_time(start,finish);
      
      start = clock();
      QuickSort2(A4,0,SIZE-1);
      finish = clock();
       quicksort_time2 += elapsed_time(start,finish);
//       
//       start = clock();
//      QuickSort3(A5,0,SIZE-1);
//      finish = clock();
//      quicksort_time3 += elapsed_time(start,finish);
//       
       
      start = clock();
      SelectionSort(A6,0,SIZE-1);
      finish = clock();
      selection_sort_time += elapsed_time(start,finish);

       
      start = clock();
      QuickSorting(A7,0,SIZE-1);
      finish = clock();
      quicksort_time4 += elapsed_time(start,finish);

   }
    
    
    cout << "SIZE:" << SIZE << endl;
    cout << "C++ sort: " << sort_time / TIMES << endl ;
//    cout << "Quicksort: " << quicksort_time / TIMES << endl ;  
    cout << "Insertion Sort: " << insertion_sort_time / TIMES << endl ;
    cout << "Quicksort: mid pivot: " << quicksort_time2 / TIMES << endl ; //mid pivot
//    cout << "Quicksort: random pivot " << quicksort_time3 / TIMES << endl ;
    cout << "Selection Sort: " << selection_sort_time / TIMES << endl;
    cout << "Quicksort different alg: " <<  quicksort_time4 / TIMES<<endl;
    

   return 0;
}