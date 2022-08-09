string Solution::reverseString(string a)
{
    stack<char> x;
    string ans="";
    for(int i=0;i<a.length();i++)
    {
        x.push(a[i]);
    }
    for(int i=0;i<a.length();i++)
    {
        char temp=x.top();
        ans=ans+temp;
        x.pop();
    }
    return ans;

}

