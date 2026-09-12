//from leetcode

class MinStack {
public:
stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            st.push({val,min(val,st.top().second)});
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
       
    }
    
    int top() {
        
            return st.top().first;
        
    }
    
    int getMin() {
        
            return st.top().second;
        
    }
};






















//optimized


class MinStack {
public:
    stack<int> st;
    int mini = INT_MAX;

    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        } else {
            if (val > mini) {
                st.push(val);
            } else {
                st.push(2 * val - mini);
                mini = val;
            }
        }
    }

    void pop() {
        if (st.empty()) return;

        if (st.top() > mini) {
            st.pop();
        } else {
            mini = 2 * mini - st.top();
            st.pop();
        }
    }

    int top() {
    	if(st.empty()) return -1;

        if (st.top() > mini)
            return st.top();
        else
            return mini;
    }

    int getMin() {
        return mini;
    }
};



