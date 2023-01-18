#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int n)
{
    while(low<=high){
        int mid=(low+high-1)/2;
        if(arr[mid]==n)return mid+1;

        if(arr[mid]>arr[low])low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int searchNumber;
    cin>>searchNumber;
    cout<< binarySearch(arr,0,n,searchNumber);
}
