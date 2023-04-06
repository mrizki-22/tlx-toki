#include <iostream>

using namespace std;

int main(){
    string pattern;
    cin >> pattern;
    int n;
    cin >> n;

    string pre = "", post = "";
    for (int i = 0; i < pattern.size(); i++){
        if(pattern[i] == '*')
            break;
        else
            pre += pattern[i];
    }
    for (int i = pattern.size() - 1; i >= 0; i--){
        if(pattern[i] == '*')
            break;
        else
            post += pattern[i];
    }

    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str.size() < pre.size() + post.size())
            continue;

        bool before = 1, after = 1;
        for (int i = 0; i < pre.size(); i++){
            if(pre[i] != str[i])
                before = 0;
        }
        for (int i = 0; i < post.size();i++){
            if(post[i] != str[str.size()-1-i])
                after = 0;
        }
        if(before && after)
            cout << str << endl;
    }
}