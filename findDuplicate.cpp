#include <iostream>
using namespace std;

// Ques :-) Find duplicate number in an array

//  Ques link :-) https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0;


int duplicate(int *arry, int n){

    int ans = 0 ; 
    
    for(int i=0; i<n; i++){
        ans = ans^arry[i];
    }
    for(int i=1; i<n; i++){
        ans = ans^ i ;
    }
    
    return ans ;
}

int main (){
    // cout<<"Welcome to dupicate problem."; 

    // int n = 9;
    int n = 2;
    // int arry[n] = {2, 3, 3, 5 , 6, 7};
    int arry[n] = { 1, 2};

    cout<<duplicate(arry, n);
    // duplicate(arry, n);

    return 0;
}


// Ans = https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1