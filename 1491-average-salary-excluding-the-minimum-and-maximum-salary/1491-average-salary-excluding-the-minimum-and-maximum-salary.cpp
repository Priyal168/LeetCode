class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int n = salary.size();
        for(int i=0;i<salary.size();i++){
            sum = sum + salary[i];
        }
        int min = *min_element(salary.begin(), salary.end());
        int max = *max_element(salary.begin(), salary.end());
        sum = sum - (min+max);
        return sum/((n-2)*1.0);
    }
};