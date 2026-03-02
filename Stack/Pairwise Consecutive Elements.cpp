// GFG Link - https://www.geeksforgeeks.org/problems/pairwise-consecutive-elements/1?utm=codolio


// -------------Solution-----------------
// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s) {
    if(s.empty()) return true;
    
    bool result = true;
    stack<int> temp;
    
    // Push all the elements in temp from s
    while(!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    
    
    while(!temp.empty()) {
        int first = temp.top();
        temp.pop();
        s.push(first);
        
        if(temp.empty()) break; // For handle odd element case
        
        int second = temp.top();
        temp.pop();
        s.push(second);
        
        if(abs(first - second) != 1) {
            result = false;
        }
        
    }
    return result;
}
