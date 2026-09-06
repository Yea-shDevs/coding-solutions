class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        vector<int> answer;

        int value[7] = {1, 5, 10, 50, 100, 500, 1000};
        char symbol[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];

            int index = 0;

            for(int j = 0; j < 7; j++) {
                if(symbol[j] == ch) {
                    index = j;
                    break;
                }
            }

            answer.push_back(value[index]);
        }

        for(int j = 1; j < answer.size(); j++) {
            if(answer[j] < answer[j-1]||answer[j] == answer[j-1]) {
                continue;
            }
            else {
                answer[j] = answer[j] - answer[j-1];
                answer[j-1] = 0;
            }
        }

        for(int k = 0; k < answer.size(); k++) {
            sum = sum + answer[k];
        }

        return sum;
    }
};