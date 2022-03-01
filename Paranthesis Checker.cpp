
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        
        
        int n=s.length();
        
        stack<char>p;
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='('|| s[i]=='['||s[i]=='{'){
                p.push(s[i]);
            }
            else{
                if(p.size()==0){
                    return false;
                }
                if(s[i]==')'){
                    if(p.top()=='('){
                        p.pop();
                    }
                    else{
                        return false;
                    }
                }
                if(s[i]=='}'){
                    
                    if(p.top()=='{'){
                        p.pop();
                        
                    }
                    else{
                        return false;
                    }
                }
                if(s[i]==']'){
                    
                    if(p.top()=='['){
                        p.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
            
        }
        if(p.size()>0){
            return false;
        }
        else{
            return true;
        }
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
