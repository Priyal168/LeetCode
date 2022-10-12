class Solution {
private:
    bool helper(char d){
        char ch = tolower(d);
        if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'){
            return true;
        }
        else {
            return false;
        }
    }
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            if(helper(s[i]) && helper(s[j])){
                swap(s[i] , s[j]);
                i++;
                j--;
            } 
            else if(helper(s[i]) && !helper(s[j])){
                j--;
            }
            else if(!helper(s[i]) && helper(s[j])){
                i++;
            }
            else{
                j--;
                i++;
            }
       }
        return s;
    }
};