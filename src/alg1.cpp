#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
#include<set>
#include<string>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;
    int* v = (int*) malloc(n*sizeof(int));
    for (int j = 0; j < n; ++j) cin >> v[j];

    cout << "n=" << n << endl;
    cout << "[";
    for (int j = 0; j < n; ++j) {
      cout << v[j];
      if (j != n-1) cout << ",";
    }
    cout << "]" << endl;

    free(v);
  }
  return 0;
}



