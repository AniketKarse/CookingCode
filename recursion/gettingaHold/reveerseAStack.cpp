class Solution {
private:
    void insertBottom(stack<int>& st, int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int top = st.top();
        st.pop();
        insertBottom(st,x);
        st.push(top);

    }
public:
    void reverseStack(stack<int> &st) {
        // Your code goes here
        if(st.empty()) return;

        int top = st.top();
        st.pop();
        reverseStack(st);
        insertBottom(st,top);

    }
};
