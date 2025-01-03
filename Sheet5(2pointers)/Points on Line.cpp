#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> points(n);
    
    // Input the points
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }

    long long result = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        while (points[right] - points[left] > d) {
            left++;
        }
        long long count = right - left;
        if (count >= 2) {
            result += count * (count - 1) / 2;
        }
    }

    cout << result << endl;
    return 0;
}
