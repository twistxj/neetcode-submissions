class Solution {
public:
    bool isValid(string s) {
        stack<char> brack;
        unordered_map<char,char> check = {
            {')','('},
            {']','['},
            {'}','{'}
        };
        for(auto a : s){
            if(check.count(a)){// is it a closing bracket?
                if(!brack.empty() && brack.top() == check[a]){
                    brack.pop();
                }else{
                    return false;
                }
            }
            else{
                brack.push(a);
            }
        }
        return brack.empty();
    }
};
