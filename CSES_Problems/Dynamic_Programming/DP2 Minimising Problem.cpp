/******************************************************************************

Satyam RajPurohit

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int n, x;
  cin >> n >> x;
  int C[n];
  for (int i = 0; i < n; i++)  //input of coins set
    cin >> C[i];
  int M[n + 1][x + 1];  //Meomoization Tablr
  M[0][0] = 0;
  if (x == 0)  // 0 sum can be made by 0 coins
    {
      cout << 0;
      return 0;
    }
  for (int i = 0; i < x; i++) 
    M[0][i + 1] = INT_MAX;   //assigning number of coins to be infinity(here INT_MAX) which can't be achievable
  for (int j = 0; j < n; j++)
    {
      M[j + 1][0] = 0;
    }
  for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < x + 1; j++)
	{
	  M[i][j] = M[i - 1][j];
	  if (j >= C[i - 1] && (M[i][j] > M[i][j - C[i - 1]])) 
	    {
	      M[i][j] = M[i][j - C[i - 1]] + 1;
	    }
	}
    }
  if (M[n][x] == INT_MAX)
    cout << -1;
  else
    cout << M[n][x];


  return 0;
}
