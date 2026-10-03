#include <bits/stdc++.h>
using namespace std;

class KthLargest {
    int k;
    priority_queue<int, vector<int>, greater<int>> minHeap;

public:
    KthLargest(int k, vector<int> nums) {
        this->k = k;

        for (int x : nums)
            add(x);
    }

    int add(int value) {
        minHeap.push(value);

        if (minHeap.size() > k)
            minHeap.pop();

        return minHeap.top();
    }
};

int main() {
    KthLargest obj(
        3,
        {4, 5, 8, 2}
    );

    cout << obj.add(3) << endl;
    cout << obj.add(5) << endl;
    cout << obj.add(10) << endl;
    cout << obj.add(9) << endl;
    cout << obj.add(4) << endl;

    return 0;
}
