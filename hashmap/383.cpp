class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        //iterating through mag
        for(char c : magazine){
            if(mp.find(c) == mp.end()){
                mp[c] = 1;
            } else{
                mp[c]++;
            }
        }
        //iterate through ransom
        for(char c : ransomNote){
            if(mp.find(c) != mp.end() && mp[c]>0){
                mp[c]--;
            } else {
                return false;
            }
        }
        return true;
    }
};

        /*int m = ransomNote.size();
        int n = magazine.size();
        for(int i=0; i<m-n; i++){
            if(ransomNote.substr(i,n)==magazine){
                return true;
            }
        }
        return false;*/         //passing only 2 cases

        /*int i = ransomNote.find(magazine);
        if(i != string::npos){
            return true;
        }
        return false;*/ //again passing only 2 cases