import java.lang.*;

public class Solution {
    public int solve(ArrayList<Integer> A, int B){
        int len=A.size();
        int sum=0;
        for(int i=0;i<B;i++)
        {
            sum=sum+A.get(i);
        }
        int ans=sum;
        int j=len-1;
        for(int i=B-1;i>=0;i--)
        {
            sum=sum+A.get(j)-A.get(i);
            ans=Math.max(ans,sum);
            j--;
        }
        return ans;
    }
}