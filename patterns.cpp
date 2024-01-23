#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern2(int n)
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern3(int n)
/*
1
1 2
1 2 3
1 2 3 4
*/
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern4(int n)
/*
1
2 2
3 3 3
4 4 4 4
*/
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern5(int n)
/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern6(int n)
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern7(int n)
/*
        *
      * * * 
    * * * * * 
*/
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
/*
   * * * * * * *
     * * * * *
       * * *
         *
*/
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= 2 * i - 2; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n) - (2 * i) + 1; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= 2 * i - 2; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
/*
        *
      * * * 
    * * * * * 
    * * * * *
      * * *
        *
*/
{
    // upper half
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // lower half
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n) - (2 * i) + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
/* 
        *
        * * 
        * * * 
        * * * *
        * * *
        * *
        *
*/
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int c = (i + j) % 2 == 0 ? 0 : 1;
            cout << c << " ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= (2 * n) - (2 * i); k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            c = c + 1;
            cout << c << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j << " ";
        }
        for (char j = 'A' + i - 2; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        ch = 'E';
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= (2 * i) - 2; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= (2 * n) - (2 * i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= (2 * n) - (2 * i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i; k++)
        {
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        for (int j = 0; j < (2 * n) - 1; j++)
        {
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14(n);
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        // pattern19(n);
        // pattern20(n);
        // pattern21(n);
        // pattern22(n);
    }
    return 0;
}
