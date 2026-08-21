class Solution {
public:

    long long gcd(long long a, long long b) {
        while(b) {
            long long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    long long countValid(vector<int>& coins, long long x) {

        int n = coins.size();
        long long count = 0;

        for(int mask = 1; mask < (1 << n); mask++) {

            long long L = 1;
            int bits = 0;

            for(int j = 0; j < n; j++) {

                if(mask & (1 << j)) {

                    L = lcm(L, coins[j]);
                    bits++;
                }
            }

            long long ways = x / L;

            if(bits % 2 == 1)
                count += ways;
            else
                count -= ways;
        }

        return count;
    }

    long long findKthSmallest(vector<int>& coins, int k) {

        long long low = 1;

        long long high =
            1LL * k * (*min_element(coins.begin(), coins.end()));

        while(low < high) {

            long long mid = low + (high - low) / 2;

            if(countValid(coins, mid) >= k) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};