class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }

        long s = 1, l = x / 2, ans;
        while(s <= l){
            long mid = (s + l) / 2;
            long sqr = mid * mid;
            if(sqr == x){
                return mid;
            }
            if(sqr <= x){
                s = mid + 1;
                ans = mid;
            }
            else{
                l = mid - 1;
            }
        } 

        return ans;
    }
};
