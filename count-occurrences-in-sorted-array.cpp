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
int countOccurreneces(int arr[] , int n , int x){
    int first = firstOcc(arr , n, x);
    if(first == -1){
        return 0;
    }
    return (lastOcc(arr , n , x) - first + 1);
}
int main()
{
    int arr[] = {5, 10, 10, 20, 20 , 20 , 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<countOccurreneces(arr,n,x);
    return 0;
}