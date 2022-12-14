// Ques :-) Find unique number in an array
//  Ques link :-) https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i] ;
    }
    
    return ans;
}


int main()
{

    // cout<<"Welcome to code studio Question." <<endl;

    int size = 7;
    int arry[size] = {1, 1, 2, 2, 3, 4, 4};

    cout << findUnique(arry, size);

    return 0;
}