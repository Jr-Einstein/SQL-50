class Solution {
public:
    int reverse(int x) {
        long long reversenum = 0;
        while(x != 0){
            int ld = x % 10;
            reversenum = (reversenum * 10) + ld;
            x = x / 10;
        }
        if(reversenum < INT_MIN || reversenum > INT_MAX){
            return 0;
        }
        return reversenum;
    }
};