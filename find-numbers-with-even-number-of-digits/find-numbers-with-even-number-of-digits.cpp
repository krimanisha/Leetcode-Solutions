class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count2=0;
        for(int i=0; i<nums.size(); i++){
            int n=nums[i];
            int count1=0;
            while(n>0){
                int r=n%10;
                n=n/10;
                count1++;
            }
            if(count1%2==0){
            count2++;
        }
        }
        
        return count2;
    }
};