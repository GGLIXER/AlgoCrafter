#include<iostream> 
using namespace std ;
int main () {

        int num ; cout << " ENTER THE INDEX : " ;
        cin >> num ;
        int array [1000] ;
    for (int i = 0 ; i < num ; i++) {
        cout << " ENTER THE NUMBER : " ; 
        cin >> array [i];

    }    // BUBBLE SORTING...
            bool swapped = 0 ;                         // BEST CASE WITH THE TIME COMPLEXITY OF ORDER OF n [ O(n) ]
        for ( int j = 1 ; j<=num-1 ; j++) {

        for ( int i = 0 ; i<num-1 ; i++) {
            if (array[i] > array[i+1]) {
                swap (array[i] , array[i+1]) ;
                swapped = 1 ;
            } 
        }   
            if (swapped == 0) 
                break ;
        } 
        for ( int j = 0 ; j<num ; j++) {
            cout << array[j] << " " ;
        }
            cout << endl ;

 
                // BUBBLE SORTING..
        // WROST CASE WITH TIME COMPLEXITY OF ORDER [ O(N^2) ]
            for ( int j = 1 ; j<=num-1 ; j++) {

        for ( int i = 0 ; i<num-1 ; i++) {
            if (array[i] > array[i+1]) {
                swap (array[i] , array[i+1]) ;
            } 
        }   
        } 
        for ( int j = 0 ; j<num ; j++) {
            cout << array[j] << " " ;
        }


         // INSERTION SORT...

                int index ; cout << " ENTER THE INDEX OF AN ARRAY : " ;
                cin >> index ;
                    int num2 ; int array[1000] ;
                    for ( int i = 0 ; i < index ; i++) {
                        cout << " ENTER THE NUMBER IN ARRAY : " ;
                        cin >> array[i] ;
                    }

                 for ( int j = 1 ; j <= index-1 ; j++)                  // TIME COMPLEXITY OF WROST CASE IS ORDER OF [O(n^2)]
                for ( int i = j ; i > 0 ; i--) {                        // TIME COMPLEXITY OF BEST CASE IF ORDER OF [O(n)]
                     if ( array[i] < array [i-1]){
                        swap( array[i] , array[i-1]);
                }

            } 
                    for ( int j = 0 ; j<index ; j++) {
                        cout << array[j] << " " ;
                }
        
        // CODE BY ψ [ℍ𝔹] WITH BEST AND WROST CASE OF TIME COMPLEXITY OF N^2 AND N.....





















}

