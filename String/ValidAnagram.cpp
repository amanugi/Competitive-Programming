bool isAnagram(string s, string t) {
        int slen = s.length();
        int tlen = t.length();
        
        if(tlen > slen || slen != tlen)
            return false;
        
        map<char,int> cnt1;
        map<char,int> cnt2;

        for(int i=0;i<slen;i++){
            cnt1[s[i] - 'a']++;
        }
        
        for(int i=0;i<tlen;i++){
            cnt2[t[i] - 'a']++;
        }
        
        if(cnt1 == cnt2)
            return true;
        else
            return false;
    }
}
