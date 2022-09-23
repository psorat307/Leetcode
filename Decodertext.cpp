https://leetcode.com/problems/decode-the-slanted-ciphertext/

string decodeCiphertext(string encodedText, int rows) {
        int n=encodedText.length();
        int col=n/rows;
        string ans="";
        for(int i=0;i<col;i++){
            string curr="";
            for(int j=i;j<n;j+=col+1){
                curr+=encodedText[j];
            }
            ans+=curr;
        }
        while(ans.back()==' ')ans.pop_back();
        return ans;
    }
  /*
Input: encodedText = "ch   ie   pr", rows = 3
Output: "cipher"
