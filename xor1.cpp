#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class xor1
{
public:
 vector<int> returntwice(int arr[],int n)
 {
     vector<int> a;
    if(n==1){
       a.push_back(arr[0]);
       return a;
    }
    else{
    int sum=arr[0],res=0,res1=0;
      for(int i=1;i<n;i++){
       sum=sum^arr[i];  }
       int Number_with_rightmostbit_Set=sum & ~(sum-1);// finding the right most set bit number
       for (int i = 0; i < n; i++) {
         /*Making two no one containing set only and other containing unset only */
        if (arr[i] & Number_with_rightmostbit_Set)
               res=res^arr[i];
        else
              res1=res1^arr[i];
       }
       res=res^sum;
       res1=res1^sum;
       a.push_back(res);
       a.push_back(res1);
       return a;
 }
 }
};

int main(int argc, char const *argv[])
{
    int arr[]={5,6,6,3,3,1,1,5,2,7},res=0;
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
       res=res^arr[i];  }
       if(res==0)
        { cout<<"All the elment are repeated twice";
         return 0;}
    xor1 obj;
    cout<<"Print the two non repeating elements in array"<<endl;
    vector<int> r;
    r=obj.returntwice(arr,n);
     for(int a: r)
       cout<<a<<" ";
    return 0;
}


// used in sorting the array with O(n) time and O(1) space
// class xor1
// {
// public:
//  void permutation(int nums[],int n)
//  {
//     for(int i=0;i<n;i++)
//     {
//         nums[i]=nums[i]+n*(nums[nums[i]]%n);
//     }
//     for(int i=0;i<n;i++)
//     {
//         nums[i]/=n;
//         cout<<nums[i]<<"  ";
//     }
//  }
// };

// int main(int argc, char const *argv[])
// {
//     int num[]={0,2,1,5,4,3};
//     int n=sizeof(num)/sizeof(num[0]);
//     xor1 obj;
//     obj.permutation(num,n);
//     return 0;
// }

