class MinStack {
public:
    vector<pair<int,int>> stck;
    
    MinStack() { }
    
    void push(int val) {
        if(stck.empty()){
            pair<int,int> element = make_pair(val, val);
            stck.push_back(element);
        }else{
            pair<int,int> element;
            element.first = val;
            element.second = min(val, stck.back().second);
            stck.push_back(element);
        }
    }
    
    void pop() { stck.pop_back(); }
    int top() { return stck.back().first; }
    int getMin() { return stck.back().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */