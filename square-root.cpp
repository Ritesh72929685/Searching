// You have to find the square root of the given no. without using sqrt function.

// ******** Naive Approach ************
// Time complexity = O(sqrt(n))


#include<bits/stdc++.h>
using namespace std;

int sqRootFloor(int x)
{
    int i = 1;
    while(i * i <= x)
    {
        i++;
    }
    return (i - 1);
}
int main()
{
    int x = 15;
    cout<<sqRootFloor(x);
    return 0;
}


//************* Efficient Approach using Binary Approach *************
// Time complexity = O(logn)

/*
#include<iostream>
using namespace std;

int sqRootFloor(int x)
{
    int low = 1 , high = x , ans = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        int sq = mid * mid;
        if( sq == x)
        {
            return mid;
        }
        else if(sq > x)
        {
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int x = 23;
    cout<<sqRootFloor(x);
    return 0;
}

*/






























