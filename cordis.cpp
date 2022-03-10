#include <bits/stdc++.h>
using namespace std;
string CheckPowerofFive(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        int x = pow(5, i);
        if (x < n)
            n = n - x;
        if (n == 0)
            return "Passed";
    return "Failed";
    }
}
int main()
{
    int x;
    int numberscheck[] = {31, 26, 130, 35, 128};
    int numbers[] = {394376, 421875, 390625, 781250, 484377};
    for (int i = 0; i < 5; i++)
        cout << numberscheck[i] << ": " << CheckPowerofFive(numberscheck[i]) << endl;
    
    printf("\n#********************************#\n");
    
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << ": " << CheckPowerofFive(numbers[i]) << endl;
}

// class Solution
// {
// public:
//     bool solve(int n, int x)
//     {
//         //base
//         if (n == 0)
//             return true;

//         //choices
//         while (x <= n)
//         {
//             if (solve(n - x, x * 5) == true)
//             {
//                 return true;
//             }
//             x = x * 5;
//         }
//         return false;
//     }
//     bool checkPowerofThree(int n)
//     {
//         int x = 1;
//         return solve(n, x);
//     }
// };
