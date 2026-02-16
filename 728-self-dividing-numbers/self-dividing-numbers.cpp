class Solution {
public:
    bool isSelfDivide(int x) {
        int dup=x;
        while(x>0) {
            int last=x%10;
            if(last==0 || dup%last != 0) {
                return false;
            }
            x=x/10;
        } 
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> self_dividing_nums;
        for(int i=left;i<=right;i++) {
            if(i<10)
                self_dividing_nums.push_back(i);
            else if(isSelfDivide(i))
                self_dividing_nums.push_back(i); 
        }
        return self_dividing_nums;
    }
};