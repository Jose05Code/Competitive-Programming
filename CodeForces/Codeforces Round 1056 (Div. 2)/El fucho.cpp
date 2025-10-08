#include <bits/stdc++.h>
using namespace std;

int matches(int n) {
    int winners = n;
    int losers = 0;
    int matches = 0;
    while (winners > 1 || losers > 1) {
        int wp = winners / 2;
        int lp = losers / 2;
        matches += wp + lp;
        int winners_after = winners - wp; // ceil(winners/2)
        int losers_after = losers - lp;   // ceil(losers/2)
        losers = losers_after + wp;       // survivors from losers + new losers
        winners = winners_after;
    }
    matches += 1; // final match when both groups have one team
    return matches;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        cout << matches(n) << '\n'; // DO NOT increment here
    }
    return 0;
}