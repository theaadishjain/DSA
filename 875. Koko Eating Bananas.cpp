class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = findmax(piles);
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalH = caltotalhours(piles, mid);
            
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return (int)low; 
    }
    
    long long findmax(vector<int>& piles) {
        long long maxi = LLONG_MIN;
        for (int pile : piles) {
            maxi = max(maxi, (long long)pile);
        }
        return maxi;
    }
    
    long long caltotalhours(vector<int>& piles, long long hourly) {
        long long totalH = 0;
        for (int pile : piles) {
            totalH += (pile + hourly - 1) / hourly;
        }
        return totalH;
    }
};
