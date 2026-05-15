// Last updated: 15/05/2026, 17:43:16
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        for (int i : students)
            q.push(i);
        for (int i = sandwiches.size() - 1; i >= 0; i--) {
            s.push(sandwiches[i]);
        }

        while (!q.empty() && !s.empty()) {
            if (s.top() == q.front()) {
                s.pop();
                q.pop();
            } else {
                int n = q.size();
                int i = 0;
                while (q.front() != s.top() && i < n) {
                    int stud = q.front();
                    q.pop();
                    q.push(stud);
                    i++;
                }
                if (q.front() != s.top())
                    break;
            }
        }
        return q.size();
    }
};