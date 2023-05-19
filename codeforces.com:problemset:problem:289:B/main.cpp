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

const int maxn = INT_MAX;

int main() {
  fast;
  int n = 0;
  int m = 0;
  int d = 0;
  int min = INT_MAX;
  int max = INT_MIN;
  map<int, int> mapa;

  cin >> n;
  cin >> m;
  cin >> d;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int a = 0;

      cin >> a;
      mapa[a]++;
      if (a > max)
        max = a;
      if (a < min)
        min = a;
    }
  }

  map<int, int>::iterator it = mapa.begin();

  while (it != mapa.end()) {
    cout << it->fi << " " << it->se << endl;
    if (it == mapa.begin() && it->se == n * m)
      cout << "0" << endl;
    else if (it->fi % d != 0)
      cout << "-1" << endl;
    else {
    }
    it++;
  }
  return 0;
}
