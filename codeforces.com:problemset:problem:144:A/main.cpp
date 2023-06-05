#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define endls "\n\n\n"
#define fi first
#define se second
#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using ll = long long;

int main() {
  fast;
  vector<int> v;
  pair<int, int> max = {INT_MIN, 0};
  pair<int, int> min = {INT_MAX, 0};
  int n = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int a = 0;

    cin >> a;
    if (a > max.fi) {
      max.fi = a;
      max.se = i;
    }
    if (a < min.fi || (a == min.fi && i > min.se)) {
      min.fi = a;
      min.se = i;
    }
  }

  int res = max.se;

  if (max.se > min.se)
    res += (n - 1) - (min.se + 1);
  else
    res += (n - 1) - (min.se);
  cout << res << endl;
  return 0;
}
