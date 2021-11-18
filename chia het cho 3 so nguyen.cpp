#include <bits/stdc++.h>
using namespace std;

long long boisochung3so(long long a, long long b, long long c)
{
  long long z = (a * b) / __gcd(a, b);
  return (z * c) / __gcd(z, c);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b, c;
    long long d;
    cin >> a >> b >> c >> d;
    long long k, n, m, l, g;
    k = boisochung3so(a, b, c);

    n = pow(10, d - 1);
    g = pow(10, d) - 1;
    if (k > g)
    {
      cout << "-1" << endl;
      continue;
    }
    m = n / k;
    if (k * m == n)
      l = n; 
    else
      l = k * m + k; 
    if (l >= n && l <= g)
      cout << l << endl;
    else
      cout << "-1" << endl;
  }
}