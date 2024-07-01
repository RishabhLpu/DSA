#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes() {
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1};
    int maxCount = 0;
    int currentCount = 0;

    for (int num : nums) {
        if (num == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    cout << maxCount;
    return maxCount;
}

int main() {
    findMaxConsecutiveOnes();
    return 0;
}
