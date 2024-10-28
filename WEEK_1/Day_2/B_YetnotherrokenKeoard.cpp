#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        stack<int> sml, cptl;
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++) 
        {
            if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'B') 
                cptl.push(i);
            if (str[i] >= 'a' && str[i] <= 'z' && str[i] != 'b') 
                sml.push(i);

            if (str[i] == 'B' && !cptl.empty()) 
            {
                str[cptl.top()] = '9';  
                cptl.pop();
            }
            if (str[i] == 'b' && !sml.empty()) 
            {
                str[sml.top()] = '9'; 
                sml.pop();
            }
        }

        for (char c : str) 
        {
            if (c != 'B' && c != 'b' && c != '9') 
            {
                cout << c;  
            }
        }
        cout << endl;
    }

    return 0;
}
