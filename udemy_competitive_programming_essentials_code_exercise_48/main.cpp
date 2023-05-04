#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

#define endl '\n'
#define endls "\n\n\n"
#define fi first
#define se second
#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

map<int, string> initialize_map() {
  map<int, string> diccionario;

  diccionario[2] = "abc";
  diccionario[3] = "def";
  diccionario[4] = "ghi";
  diccionario[5] = "jkl";
  diccionario[6] = "mno";
  diccionario[7] = "pqrs";
  diccionario[8] = "tuv";
  diccionario[9] = "wxyz";
  return diccionario;
}

vector<pair<int, string>> numeros_seleccionados(string digits) {
  map<int, string> diccionario = initialize_map();
  vector<pair<int, string>> numeros;

  for (int i = 0; i < digits.length(); i++) {
    char digito[] = {digits[i]};
    int n = stoi(digito);

    if (diccionario.count(n))
      numeros.push_back(pair<int, string>(n, diccionario[n]));
  }
  return numeros;
}

void obtener_combinaciones(vector<string> *combinacion_numeros,
                           string combinacion,
                           vector<pair<int, string>> numeros, int it) {
  for (int i = 0; i < numeros[it].se.length(); i++) {
    combinacion += numeros[it].se[i];
    if (it == numeros.size() - 1)
      combinacion_numeros->push_back(combinacion);
    else
      obtener_combinaciones(combinacion_numeros, combinacion, numeros, it + 1);
    combinacion.pop_back();
  }
}

vector<string> letterCombinations(string digits) {
  vector<string> combinacion_numeros;

  if (digits.length()) {
    vector<pair<int, string>> numeros = numeros_seleccionados(digits);

    obtener_combinaciones(&combinacion_numeros, "", numeros, 0);
  }
  return combinacion_numeros;
}

int main() {
  fast;

  vector<string> subsets = letterCombinations("");

  return 0;
}
