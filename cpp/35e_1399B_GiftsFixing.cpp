#include <bits/stdc++.h>

int main() {
    long long temp, min_a, min_b, cnt;
    int t, n;
    std::vector<long long> ans;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> n;
        std::vector<long long> a, b;

        for (int j = 0; j < n; j++) {
            std::cin >> temp;
            a.push_back(temp);

            if (j == 0) {
                min_a = temp;
            }

            min_a = std::min(min_a, temp);
        }

        for (int j = 0; j < n; j++) {
            std::cin >> temp;
            b.push_back(temp);

            if (j == 0) {
                min_b = temp;
            }

            min_b = std::min(min_b, temp);
        }

        cnt = 0;

        for (int j = 0; j < n; j++) {
            cnt += std::max((a[j] - min_a), (b[j] - min_b));
        }

        ans.push_back(cnt);
    }

    for (auto i : ans) {
        std::cout << i << "\n";
    }

    return 0;
}
