// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include<iostream>
#include<vector>
using namespace std;
bool isBadVersion(int n);  // for my own reference

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1;
        int e = n;
        long int mid;
        
        
        if(isBadVersion(1))
            return 1;
        
        while(s<=e)
        {
            mid = s+(e-s)/2;
            
            if(isBadVersion(mid))
            {
                if(!isBadVersion(mid-1))
                    return mid;
                else
                    e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return mid;
    }
};