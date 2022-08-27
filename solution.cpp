class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> ch;
        int s = 0;
        for(int i =0 ; i< gas.size(); i++) {
            ch.push_back(gas[i]-cost[i]);
            s += ch[i];
        }
        if(s < 0 ) {
            return -1;
        }
        int curr = 0;
        int start = 0;
        for (int i =0 ; i<ch.size(); i++) {
            curr += ch[i]; 
            if(curr< 0) {
                start = i+1;
                curr = 0;
            }
        }
        return start;
    }
};
