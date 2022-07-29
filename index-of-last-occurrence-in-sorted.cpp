// // You have to find the index of the array for which elements you are searching
// arr[] = {5, 10, 10, 20, 20}
// x = 20

// Time complexity = O(logn)


// Itrative Approach

#include<iostream>
using namespace std;

int lastOcc(int arr[] , int n, int x)
{
    int low = 0 , high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == n-1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
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
    cout<<lastOcc(arr,n,x);
    return 0;
}


// ********** Recursive Approach ************

/*
#include<bits/stdc++.h>
using namespace std;

int lastOcc(int arr[] , int low, int high, int n, int x)
{
    
    if(low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if(arr[mid] > x)
    {
        return lastOcc(arr , low , mid -1 , n , x);
    }
    else if(arr[mid] < x)
    {
        return lastOcc(arr, mid + 1 , high , n , x);
    }
    else
    {
        if(mid == n-1 || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else{
            return lastOcc(arr , mid + 1 , high , n , x);
        }
    }

}
int main()
{
    int arr[] = {5, 10, 10, 20, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    int low = 0, high = n - 1;
    cout<<lastOcc(arr,low , high ,n,x);
    return 0;
}

*/
