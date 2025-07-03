#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long a, b, x_king, y_king, x_queen, y_queen;
        cin >> a >> b;
        cin >> x_king >> y_king;
        cin >> x_queen >> y_queen;

        // 8 directions using both (a,b) and (b,a) with ± signs
        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        set<pair<int, int>> king_moves, queen_moves;

        for (int i = 0; i < 8; i++) {
            king_moves.insert({x_king + dx[i], y_king + dy[i]});
            queen_moves.insert({x_queen + dx[i], y_queen + dy[i]});
        }

        int ans = 0;
        for (auto it : king_moves) {
            if (queen_moves.find(it) != queen_moves.end()) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
