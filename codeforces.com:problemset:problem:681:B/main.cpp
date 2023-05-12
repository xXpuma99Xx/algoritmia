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

int casa = 1234567;
int carro = 123456;
int computadora = 1234;

using ll = long long;

const int maxn = INT_MAX;

int cociente(int n, int num) { return n / num; }

int residuo(int n, int num) { return n % num; }

bool calc_computadora(int n) {
  int posibles = cociente(n, computadora);

  for (int c = posibles; c >= 0; c--) {
    int res = residuo(n - (c * computadora), computadora);

    if (res == 0)
      return true;
  }
  return false;
}

bool calc_carro(int n) {
  int posibles = cociente(n, carro);

  for (int b = posibles; b >= 0; b--) {
    int sobrante = n - (b * carro);

    if (calc_computadora(sobrante))
      return true;
  }
  return false;
}

bool calc_casa(int n) {
  int posibles = cociente(n, casa);

  for (int a = posibles; a >= 0; a--) {
    int sobrante = n - (a * casa);

    if (calc_carro(sobrante))
      return true;
  }
  return false;
}

int main() {
  fast;
  int n = 0;

  cin >> n;
  if (calc_casa(n))
    cout << "yes";
  else
    cout << "no";
  return 0;
}
