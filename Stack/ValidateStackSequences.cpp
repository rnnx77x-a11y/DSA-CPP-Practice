// LeetCode: Validate Stack Sequences
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        for (int x : pushed) {
            st.push(x);
            while (!st.empty() && j < (int)popped.size() &&
                   st.top() == popped[j]) {
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};

// Time: O(n); Space: O(n)
// Tests: pushed=[1,2,3,4,5], popped=[4,5,3,2,1] -> true
//        pushed=[1,2,3,4,5], popped=[4,3,5,1,2] -> false
