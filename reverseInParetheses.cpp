#include <string>
//#include<algorithm> 
//#include <bits/stdc++.h>

std::string reverseInParentheses(std::string inputString) {
    int len = inputString.size(); 
    string str = inputString;
    string res;
    /*
int counter = 0;
int first;
char beg = '(';
char end = ')';
vector <int> para;
vector <string> sub;

int mod = 0;


for(int i = 0; i < inputString.size(); i++){
    if(inputString[i]==beg || inputString[i] == end){
        para.push_back(i);
        counter++;
    }
}

for(int i = 0; i < para.size(); i++){
    cout << para[i] << endl;
}

for(int i = 0; i < inputString.size(); i++){
for(int i = 0; i < para.size(); i++){
    mod++;
        if(mod%2 == 1)
            first = para[i];
        if(mod%2 == 0){
            sub.push_back(inputString.substr(first+1,para[i]-first-1));
        }

    }
}

for(int a = 0; a < sub.size(); a++){
    cout << sub[a] << endl;
}
inputString.erase(std::remove(inputString.begin(), inputString.end(), ')'), inputString.end());
inputString.erase(std::remove(inputString.begin(), inputString.end(), '('), inputString.end());
*/

 stack<char> st; 
  
    for (int i = 0; i < len; i++) { 
  
        // Push the index of the current 
        // opening bracket 
        if (str[i] == '(') { 
            st.push(i); 
        } 
  
        // Reverse the substring starting 
        // after the last encountered opening 
        // bracket till the current character 
        else if (str[i] == ')') { 
            reverse(str.begin() + st.top() + 1, 
                    str.begin() + i); 
            st.pop(); 
        } 
    } 
  
    // To store the modified string 
     res = ""; 
    for (int i = 0; i < len; i++) { 
        if (str[i] != ')' && str[i] != '(') 
            res += (str[i]); 
    } 

inputString = res;

return inputString;
}
