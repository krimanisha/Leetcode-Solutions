class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int last=arr[n-1];
        arr[n-1]=-1;
        for(int i=n-2; i>=0; i--)
        {
            int c=last;
               last=max(arr[i],last);
            arr[i]=c;
        }
        return arr;
    }
};