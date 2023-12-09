#include <iostream>
using namespace std;

int main()
{
   int n,m;
   cin >> n;

   int arr[n][n];

   int num = 1, row = 0, col = 0;

   for (int i = 0; i < n * n; ++i)
   {
      arr[row][col] = num++;

      if ((row + col) % 2 == 0)
      {
         if (row == n - 1)
         {
            ++col;
         }
         else if (col == 0)
         {
            ++row;
         }
         else
         {
            --col;
            ++row;
         }
      }
      else
      {
         if (col == n - 1)
         {
            ++row;
         }
         else if (row == 0)
         {
            ++col;
         }
         else
         {
            ++col;
            --row;
         }
      }
   }

   for (int i = 0; i < n; ++i)
   {
      for (int j = 0; j < n; ++j)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}