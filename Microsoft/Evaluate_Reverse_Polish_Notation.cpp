class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(int i = 0; i < tokens.size(); i++){
            
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();

                if(tokens[i] == "+"){
                    first = second + first;
                }
                if(tokens[i] == "-"){
                    first = second - first;
                }
                if(tokens[i] == "*"){
                    first = second * first;
                }
                if(tokens[i] == "/"){
                    first = second / first;
                }

                s.push(first);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }

        return s.top();
    }
};
