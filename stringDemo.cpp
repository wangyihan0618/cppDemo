#include <iostream>
#include <string>
using namespace std;
int main() {
    string s("helloworld!!!");
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (!ispunct(s[i])) { //判断s[i]是不是符号，如果不是符号，加到ans中
            ans += s[i];
        }
        
    }
    cout << ans; //输出ans即为没有符号的字符串
    return 0;
}
