// Last updated: 15/05/2026, 17:46:29
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);
        stack<int> st;
        int prev_time = 0;

        for (string& log : logs) {
            // Parse the log: "id:type:time"
            stringstream ss(log);
            string fid_str, type, time_str;
            getline(ss, fid_str, ':');
            getline(ss, type, ':');
            getline(ss, time_str, ':');

            int fid = stoi(fid_str);
            int time = stoi(time_str);

            if (type == "start") {
                if (!st.empty()) {
                    res[st.top()] += (time - prev_time);
                }
                st.push(fid);
                prev_time = time;
            } else { // "end"
                res[fid] += (time - prev_time + 1);
                st.pop();
                prev_time = time + 1;
            }
        }
        return res;
    }
};