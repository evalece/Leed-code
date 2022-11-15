/*
Nov 15 2022
problem statemnt: https://leetcode.com/problems/n-th-tribonacci-number/submissions/

Runtime: 0 ms, faster than 100.00% of C++ online submissions for N-th Tribonacci Number.
Memory Usage: 6.1 MB, less than 32.21% of C++ online submissions for N-th Tribonacci Number.

Learning:

            int diff= n-2;
            vector<int> temp(diff,0);
            
            instead of 
            
        
            vector<int> temp(n-2,0);
            
            improves performance (speed) by 70%, hence, faster if we allocate a var on stack and pass as a constant.

/*


class Solution {
public:
    int tribonacci(int n) {
        
        vector <int> t= {0,1,1};
        //the 4th is the sum of all the indices in the vector
        
        //create vector, first add 0 to fix vector size before update vector 
        
        if(n>2){
            int diff= n-2;
            vector<int> temp(diff,0);
            t.insert(t.end(),temp.begin(),temp.end());
                   
            for(int i=3; i<t.size(); ++i){
                        
                t[i]= t[i-1]+t[i-2]+t[i-3];
                                          
            }
            
        }
      
        return t[n];
        
        
    }
};
