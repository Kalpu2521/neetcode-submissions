class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;
        while(j<t.length() &&i<s.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        
        }
        if(i==s.length()){
            return t.length()-j;
        }
    }
};