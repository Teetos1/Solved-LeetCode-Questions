class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--){
            if(i == digits.size() - 1){
                digits[i] = digits[i] + 1;
            }
            if(i == 0 && digits[i] == 10){
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }
            else if(digits[i] == 10){
                digits[i] = 0;
                digits[i - 1] = digits[i - 1] + 1;
            }
        }

        return digits;
    }
};
