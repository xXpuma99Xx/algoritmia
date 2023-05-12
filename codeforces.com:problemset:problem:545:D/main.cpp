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
  map<int, int> m;
  int sum = 0;
  int count = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int t = 0;

    cin >> t;
    if (!m.count(t))
      m[t] = 1;
    else
      m[t]++;
  }

  map<int, int>::iterator it = m.begin();

  while (it != m.end()) {
    if (sum <= it->fi) {
      count++;
      sum += it->fi;
      if (it == m.begin() and it->se > 1) {
        count++;
        sum += it->fi;
      }
    }
    it++;
  }
  cout << count << endl;
  return 0;
}
