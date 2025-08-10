//Binary Search
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int l=0,h=n/2;
        if(n==1) return true;
        while(l<=h){
            int m=(l+h)/2;
            if(pow(2,m)==n) return true;
            if(pow(2,m)>n) h=m-1;
            else l=m+1;
        }
        return false;
    }
};

//Bit manuplation
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};