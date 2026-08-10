class MinStack {
public:

    stack<int> st;
    stack<int> st1;

    MinStack() {
        
    }
    
    void push(int x) {
        if(st.empty()){
            st.push(x);
            st1.push(x);
        }
        else{
            st.push(x);
            st1.push(min(st1.top(),x));
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }

        st.pop();
        st1.pop();
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }

        return st.top();
        
    }
    
    int getMin() {
        if(st.empty()){
            return -1;
        }

        else{
            return st1.top();
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */