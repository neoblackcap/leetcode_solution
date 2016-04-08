class Solution {
public:
    int addDigits(int num)
    {
        int dr = 1+((num-1)%9);
        return dr;
    }
};
