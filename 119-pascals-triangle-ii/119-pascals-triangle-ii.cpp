class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret(rowIndex + 1, 1);
        long C = 1;
        for (int i = 1; i < rowIndex; i++) {
            C = C * (rowIndex - i + 1) / i;
            ret[i] = C;
        }
        return ret;
    }
};