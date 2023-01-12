class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int answer = strs[0].length();
        for(int i = 0; i < strs.size(); i++){
            int j = 0;
            while(j < strs[i].length() && strs[i][j] == strs[0][j]){
                j++;
            }
            answer = min(answer, j);
        }

        return strs[0].substr(0, answer);
    }
};
