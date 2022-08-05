class Solution {
public:
    bool isHappy(int n) {
        while(true)
		{
			int num=0;
			if(n < 10)  break; 
			while(n>0)
			{
				int rem = n%10;
				num += rem*rem;
				n /= 10;
			}
			n = num;
		}
		if(n == 1 || n == 7)    return true;
		return false;
    }
};