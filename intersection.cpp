#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// ques :-) Intersection of two arrays
//Ques link :-) https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    
    vector<int> ans;
    int i =0 , j = 0 ;
    
    while(i<n && j <m){
        
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            
            i++;
        }else{
            
            j++ ; 
        }
    }
    return ans;
    
}

int main(){

    int n =6 ;
    int arr1[n] = {1, 2, 2, 2, 3, 4};
     
    int m =4;
    int arr2[m] = {2, 2, 3, 3};
    
    // cout<<findArrayIntersection(arr1[],n ,arr2, m);

    return 0 ; 
}