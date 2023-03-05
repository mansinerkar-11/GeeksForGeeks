#include<iostream>
#include<vector>
using namespace std;

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        string alphabets,numbers,special;
        
        for(int i=0;i<S.size();i++)
        {
            if( (S.at(i)>=97&&S[i]<=122)  ||  (S[i]>=65&&S[i]<=90) )
            alphabets+=S[i];
            
            else if( S[i]>=48&&S[i]<=57 )
            numbers+=S[i];
            
            else
            special+=S[i];
        }
        cout<<alphabets<<endl;
        cout<<numbers<<endl;
        cout<<special<<endl;
    } 
};

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;
    Solution obj;
    vector<string>result = obj.splitString(str);
    for(int i=0;i<result.size();++i)
    {
        if(result[i]=="")
        {
            cout<<-1<<"\n";
        }
        else{
            cout<<result[i]<<"\n";
        }
    }
    return 0;
}

