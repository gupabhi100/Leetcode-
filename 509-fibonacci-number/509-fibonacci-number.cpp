class Solution {
public:
    int fib(int n) {
        if(n<2)
            return n;
        
        int fib1=fib(n-1)+fib(n-2);
        return fib1;
    }
};