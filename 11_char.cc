// 0. 输出一个词组中每个单词的首字母的大写组合
// 1. n组测试数据(输入只有一个n, 没有多组n的输入)(cin)
// 2. n行, 每组测试数据占一行
// 3. 每行有一个词组, 每个词组由一个或多个单词组成
// 4. 每个单词有一个或多个大写或小写字母组成
// 5. 单词之间可能有多个空格(getline)
// 6. !!!前面有cin, 后面getline时, 注意使用getchar()吸收回车, 否则会被getline读取!!!
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // n组测试
    int n;
    cin >> n;
    // 测试数据
    string s;
    // 结果
    char ch;
    // 吸收回车
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        // 若s[0]非空
        if (s[0] != ' ')
        {
            if (s[0] >= 'a' && s[0] <= 'z')
            {
                ch = s[0] - 32;
            }
            else
            {
                ch = s[0];
            }
            cout << ch;
        }
        // 从s[1]开始
        for (int j = 1; j < s.size(); j++)
        {
            // 当前字符为空, 下一字符非空
            if (s[j] == ' ' && s[j + 1] != ' ')
            {
                // 处理下一字符
                if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
                {
                    ch = s[j + 1] - 32;
                }
                else
                {
                    ch = s[j + 1];
                }
                cout << ch;
            }
        }
        cout << endl;
    }

    return 0;
}