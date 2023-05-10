#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;

void solve()
{
  int n, a[102], maxx = 0, cnt1 = 0, cnt0 = 0;
  cin >> n;
  loop(i, n)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    for (int j = i; j < n; ++j)
    {
      for (int k = j; k < n; ++k)
      {
        if (a[k] == 1)
          cnt1++;
        else
          cnt0++;
      }
      int w = count(a, a + n, 1);
      int ans = (w + cnt0) - cnt1;
      maxx = max(maxx, ans);
      cnt1 = 0;
      cnt0 = 0;
    }
  }
  cout << maxx;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  int t = 1;
  //cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}