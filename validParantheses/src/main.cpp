#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
		stack<char>parantheses;
		char kr;
		char last;
        for (int i = 0; i < s.size(); i++)
		{
			kr=s.at(i);
			if (kr=='{'||kr=='('||kr=='[')
			{
				parantheses.push(kr);
				continue;
			}
			if (kr=='}'||kr==')'||kr==']')
			{
				last=parantheses.top();
				if ((last == '(' && kr == ')') || (last == '{' && kr == '}') || (last == '[' && kr == ']'))
				{
					parantheses.pop();
				}
				else{
					return false;
				}
				
			}
			
		}
		return true;
		
		
    }
};
int main(int argc, char const *argv[])
{
	Solution s;
	bool dogrimi=s.isValid("(]");
	cout<<dogrimi<<endl;
	return 0;
}
