class Solution {
public:
    int findComplement(int n) {
        int m=n;
        int temp=0;
        //edge case
        if(n==0){
            return 1;
        }
        while(m!=0){ 
            temp=(temp<<1) | 1;
            m=m>>1;
        }
        return ((~n) &temp);
    }
        
    
};