#include <string>
#include <vector>
int Solution::lengthOfLastWord(const string b) {
    int n = b.length();
    string s = b;
    int a = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == ' '){
            s.pop_back();
            n--;
        }
        else if(s[i] != ' '){
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(s[i] == ' '){
            break;
        }
        else{
            a = a + 1;
        }
    }
    return a;
}
