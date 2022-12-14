#include <iostream>
using namespace std;

// Ques :-) Find ufirst and last position of an element in a sorted array
//  Ques link :-) https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549


int firstOccur(int*arr, int n, int k){

    int s=0, e=n-1; 
    int mid = s + (e-s)/2;

    int ans = -1;

    while (s<=e)
    {
        
        if(arr[mid] == k){
            ans = mid ;
            e = mid- 1;
        }else if( k > arr[mid]){
            s = mid+1;
        }else{
            e = mid - 1 ;
        }

        mid = s + (e-s)/2;
    }

    return ans ;
}
int lastOccer(int*arr, int n, int k){

    int s=0, e=n-1; 
    int mid = s + (e-s)/2;

    int ans = -1;

    while (s<=e)
    {
        
        if(arr[mid] == k){
            ans = mid ;
            s = mid + 1;
        }else if( k > arr[mid]){
            s = mid+1;
        }else{
            e = mid - 1 ;
        }

        mid = s + (e-s)/2;
    }

    return ans ;
}


pair<int, int> findFirstandLast(int*arr, int n, int k){

    pair<int, int> p;
    p.first = firstOccur(arr,  n,  k);
    p.second = lastOccer(arr,  n,  k);

    return p ;
}


int main(){

    // cout<<"Welcome to problems" ;

    int n = 8;
    int arr[n] = {0, 0, 1, 1, 2, 2, 2, 2};


    findFirstandLast(arr, n , 2) ;
    cout<<"The first occurance of number is " <<firstOccur(arr, n , 2) <<endl;
    cout<<"The last occurance of number is " <<lastOccer(arr, n , 2) <<endl;

    // Ques = ) Find total number of Occurance

    int totalOccurance = (lastOccer(arr, n , 2) - firstOccur(arr, n , 2)) + 1 ;

    cout<<"Toal number of occurance of 2 is " <<totalOccurance <<endl ;

    return 0 ;
}

// Ans Link -) https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTab=1