#include <iostream>
using namespace std;

int main()
{
    int n, m,z;
    cin >> n>> m;

    int arr[1000][1000];
    int arr2[1000][1000];
    int num = 1;
    int num2 = 1;
    int total = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = num;
            num++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            arr2[j][i] = num2;
            num2++;
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == arr2[i][j])
            {
                total++;
            }
        }
    }
    
    cout << total;
}