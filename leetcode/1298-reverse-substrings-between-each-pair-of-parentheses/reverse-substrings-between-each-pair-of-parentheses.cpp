class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == ')') {
                string temp = "";
                while (st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }
                st.pop(); // Remove the '(' from the stack

                for (char reversed_ch : temp) {
                    st.push(reversed_ch);
                }
            } else {
                st.push(ch);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
