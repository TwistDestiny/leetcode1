#include<iostream>
int main()
{
	
	return 0;
}
class Solution {
public:
    int fib(int n) {
        int s1 = 1, s2 = 0, s = 0;
        if (n <= 1)
            return n;
        else {
            for (int k = 2; k <= n; k++) {
                s = s1 + s2;
                s2 = s1;
                s1 = s;
            }
            return s;
        }
    }
};
