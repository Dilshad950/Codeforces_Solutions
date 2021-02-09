/*
 ~ Author    : @tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long
#define PI                  3.1415926535897932384626
#define MOD                 1000000007
#define vi                  vector<int>
#define pb                  push_back
#define mp(a, b)            make_pair(a, b)
#define pii                 pair<int, int>
#define mk(arr, n, type)    type *arr = new type[n];
#define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define w(x)                int x; cin >> x; while(x--)
#define all(c)              (c).begin(), (c).end()
#define sz(c)               (int)(c).size()
#define pqmx                priority_queue<int>
#define pqmn                priority_queue<int, vector<int>, greater<int> >
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void solve() {

	int n;
	cin >> n;

	vi red(n);

	FOR (i, 0, n) {
		cin >> red[i];
	}

	int m;
	cin >> m;

	vi blue(m);

	FOR (i, 0, m) {
		cin >> blue[i];
	}

	partial_sum(red.begin(), red.end(), red.begin());
	partial_sum(blue.begin(), blue.end(), blue.begin());

	int max_r = max(0, *max_element(red.begin(), red.end()));
	int max_b = max(0, *max_element(blue.begin(), blue.end()));

	cout << max_r + max_b << '\n';
}


int main() {

	FIO;

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}