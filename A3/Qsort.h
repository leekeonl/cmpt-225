// Simple Insertion Sort and Quicksort implementations
// for sorting Sorts arrays of ints.

void InsertionSort(int A[], int lo, int hi ){
   // Sorts A[lo] to A[hi].
   for( int i = lo+1 ; i <= hi ; i++ ){
        int pivot = A[i] ;
        int j = i-1 ;
        while( j >= lo && A[j] > pivot ){
           // shift A[j] to the right.
           A[j+1]=A[j];
           j = j-1 ;
        }
        A[j+1]=pivot;
   }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//Simple Selection sort
// with "Matthew Keon Hee Lee " style implementation
// part2
void SelectionSort(int A[], int lo, int hi){
    for (int i = lo ; i <= hi; i++){
        int min_idx = i;
        for (int j = i+1; j < hi; j++){
            if (A[j] <A[min_idx]){
                min_idx = j;
            }
        }
        swap(&A[min_idx], &A[i]);
    }
}


void QuickSort(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
      // Choose a pivot.
      // This is an easy, but poor, choice.
      int pivotIndex = hi ;

      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort(A, lo, i-1 );
      QuickSort(A, i+1, hi );
   }}
    
//With different pivot point
    void QuickSort2(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
      // Choose a pivot.
      // choose the middle pivot
      int pivotIndex = (lo+hi)/2 ;

      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort2(A, lo, i-1 );
      QuickSort2(A, i+1, hi );
   }
}

//With random pivot point
    void QuickSort3(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
      // Choose a pivot.
      // choose the random pivot
      int pivotIndex = rand() % hi ;

      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort3(A, lo, i-1 );
      QuickSort3(A, i+1, hi );
   }
}

//With different 
    void QuickSorting(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
       
       if(lo +10 < hi){
           InsertionSort(A, lo, hi);
       }
       
      // Choose a pivot.
      // choose the middle pivot
      int pivotIndex = (lo+hi)/2 ;

      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSorting(A, lo, i-1 );
      QuickSorting(A, i+1, hi );
   }
}

