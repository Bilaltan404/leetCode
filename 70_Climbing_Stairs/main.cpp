#include <iostream>

using namespace std;
static const int _ = []()
{
    ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution
{
public:
    int climbStairs(int n)
    {

        if (n == 1 || n == 2)
        {
            return n;
        }

        int n1 = 1, n2 = 2, temp = 0;
        for (int i = 3; i <= n; ++i)
        {
            temp = n2;
            n2 = n1 + n2;
            n1 = temp;
        }

        return n2;
    }
};

int main()
{
    return 0;
}