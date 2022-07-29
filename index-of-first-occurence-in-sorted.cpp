// You have to find the index of the array for which elements you are searching
// arr[] = {5, 10, 10, 20, 20}
// x = 10
// Time complexity = O(logn)
// This can be solved using recursion but in that case the auxilary space will be O(logn) so thats why the itrative approach is better.

#include<iostream>
using namespace std;

int firstOcc(int arr[] , int n, int x)
{
    int low = 0 , high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if(arr[ mid ] < x)
        {
            low = mid + 1;
        }
        else{
            if(mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 10, 10, 20, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<firstOcc(arr,n,x);
    return 0;
}
