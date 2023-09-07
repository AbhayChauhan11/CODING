#include<iostream>
#include<algorithm>
using namespace std;
class Xor
{
public:
    int findSingle(int arr[], int n)
    {
        int res=0;
        for(int i=0;i<n;i++)
            res=res^arr[i];
        return res;
    }
};
int main(int argc, char const *argv[])
{
    int arr[]={5,1,4,4,3,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Xor obj;
    cout<<"print the only element which is not repeating itself"<<endl;
    cout<<"The digit is "<<obj.findSingle(arr,n)<<endl;
    return 0;
}


// There are many ways to solve this problem 
// Brute-force = Using nested loop to find the non repeating element Time Complexity=O(n^2)
// There are two optimization that we can do in this problem 
/*
1. Using the hashmap or hashset but here 
 (a).logic is simple insert new element and delete the element which is inserted already at the 
 end you are left with only non repeating element.
 disadvantage is time complexity is O(n) and space complexity is O(n).
2. Using the xor logic 
   Time Complexity is O(n) and Space is O(1).
*/