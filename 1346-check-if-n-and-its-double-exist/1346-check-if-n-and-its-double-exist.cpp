class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if(i!=j && arr[i]*2==arr[j] || i!=j && arr[j]*2==arr[i]){
                    return true;
                }
            }
        }
        return false;
    }
};