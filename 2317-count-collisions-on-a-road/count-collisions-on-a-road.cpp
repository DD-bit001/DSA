class Solution {
public:
    int countCollisions(string directions) {
        stack<char> s;
        int co=0;
        for(int i=0;i<directions.size();i++){
         char   ch=directions[i];
            if(s.empty()){
                s.push(directions[i]);
            }
            else if (s.top()=='R'&&directions[i]=='L')
                {
                co+=2;
                s.pop();
                 while (!s.empty() && s.top() == 'R') {
                    co++;
                    s.pop();
                }

                s.push('S');
            }
             else if (ch == 'S') {
                while (!s.empty() && s.top() == 'R') {
                    co++;
                    s.pop();
                }

                s.push('S');
            }
            else if(s.top()=='S'){
                if(directions[i]=='L'){
                    co+=1;
                }  
                else{
                    s.push(directions[i]);
                }
            }
                else{
                    s.push(directions[i]);
                }
            
        }
        return co;
        
    }
};