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
  vector<int> lista;
  int n = 0;
  int m = 0;
  int d = 0;
  int count = 0;
  map<int, int> mapa;

  cin >> n;
  cin >> m;
  cin >> d;

  int e = n * m;

  for (int i = 0; i < e; i++) {
    int a = 0;

    cin >> a;
    mapa[a]++;
  }

  map<int, int>::iterator it = mapa.begin();
  map<int, int>::iterator end = mapa.end();
  int residuo = it->fi % d;

  if (it->se == e) {
    cout << count << endl;
    return 0;
  }
  while (it != end) {
    if (it->fi % d != residuo) {
      cout << "-1" << endl;
      return 0;
    }
    for (int i = 0; i < it->se; i++)
      lista.push_back(it->fi);
    it++;
  }

  int mediana = round((lista.size() - 1) / 2);
  int min = lista[mediana];

  it = mapa.begin();
  while (it != end) {
    count += (abs(it->fi - min) / d) * it->se;
    it++;
  }
  // cout <<  << endl;
  cout << count << endl;
  return 0;
}
