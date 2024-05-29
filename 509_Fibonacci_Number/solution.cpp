#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int ans = 0;
    int fib(int n)
    {

        if (n == 0 || n == 1)
        {
            return n;
        }
        ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
};

int main()
{
    Solution sol;
    int num = 11;
    int ans = sol.fib(num);
    cout << "Fibonacci " << num << ":" << ans << endl;

    return 0;
}