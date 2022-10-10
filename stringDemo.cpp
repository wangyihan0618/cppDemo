#include <iostream>
#include <string>
using namespace std;
int main() {
    string s("helloworld!!!");
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (ispunct(s[i])) { //判断s[i]是不是符号，如果是符号ispusnct返回true，执行continue，不会添加到ans，如果不是符号，添加到ans
            continue;
        }
        ans += s[i];
    }
    cout << ans; //输出ans即为没有符号的字符串
    return 0;
}
