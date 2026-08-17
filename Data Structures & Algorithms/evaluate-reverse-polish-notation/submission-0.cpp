class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for(int i = 0; i < tokens.size(); i++) {

            if(tokens[i] != "+" && tokens[i] != "-" &&
               tokens[i] != "*" && tokens[i] != "/")
            {
                st.push(tokens[i]);
            }
            else {
                int s2 = stoi(st.top());
                st.pop();

                int s1 = stoi(st.top());
                st.pop();

                if(tokens[i] == "+") {
                    st.push(to_string(s1 + s2));
                }
                else if(tokens[i] == "-") {
                    st.push(to_string(s1 - s2));
                }
                else if(tokens[i] == "*") {
                    st.push(to_string(s1 * s2));
                }
                else {
                    st.push(to_string(s1 / s2));
                }
            }
        }

        return stoi(st.top());
    }
};