bool findPair(vector<int>&arr, int size, int n)  
{  
    // Initialize positions of two elements  
    int i = 0;  
    int j = 1;  
   sort(arr.begin(),arr.end());
    // Search for a pair  
    while (i < size && j < size)  
    {  
        if (i != j && arr[j] - arr[i] == n)  
        {
            return true;  
        }  
        else if (arr[j]-arr[i] < n)  
            j++;  
        else
            i++;  
    }  
    return false;  
}  
int Solution::solve(vector<int> &A, int B) {
    return findPair(A,A.size(),B);
    
}
