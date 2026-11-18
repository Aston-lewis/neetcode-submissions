class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>ht;
        if(s.size() !=t.size()){
            return false;
        }
        for(char c:s){
            ht[c]++; 
            
        }
        for(char c:t){
            ht[c]--; 
            if(ht[c] < 0){
                return false; 
            }

        }
        return true; 
        
        
    }
};
