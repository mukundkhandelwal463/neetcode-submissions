class Solution {
public:

    bool canShip(vector<int>& weights, int capacity, int days) {

        int day = 1;
        int load = 0;

        for (int w : weights) {

            if (load + w <= capacity) {
                load += w;
            }
            else {
                day++;
                load = w;
            }
        }

        return day <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (canShip(weights, mid, days)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};