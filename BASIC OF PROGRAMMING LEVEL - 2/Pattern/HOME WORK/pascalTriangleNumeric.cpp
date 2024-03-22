/*


1 
1 1
1 2 1 
1 3 3 1
1 4 6 4 1





*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            // Calculate the binomial coefficient
            int coefficient = factorial(row) / (factorial(row - col) * factorial(col));

            // Print the coefficient with spaces for better formatting
            cout << coefficient << " ";
        }
        cout << endl;
    }

    return 0;
}
