#include<bits/stdc++.h>

using namespace std;

int solve(int n, int key, vector < int > & v) {
  int res = -1;
  for (int i = 0; i < n; i++) {
    if (v[i] == key) {
      res = i;
      break;
    }
  }
  return res;
}

int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};

  // returning the first occurrence index if the element is present otherwise -1
  cout << solve(n, key, v) << "\n";

  return 0;
}
