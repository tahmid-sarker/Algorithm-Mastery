#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << i << " " << i * i << " " << i * i * i << endl;
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
    }
    return 0;
}