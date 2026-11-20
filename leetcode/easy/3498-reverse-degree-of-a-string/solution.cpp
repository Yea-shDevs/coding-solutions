class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int count = 1;
        for (char ch : s) {
            int product = count*('z'-ch+1);
            sum += product;
            count++;
        }
        return sum;
    }
};