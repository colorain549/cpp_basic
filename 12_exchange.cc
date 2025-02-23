// 0. 长度为偶数位的字符串, 实现字符串的奇偶位互换
// 1. 整数n, 表示有测试数据(整个输入中，只有一个n)
// 2. n组测试数据，保证串长为偶数位
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void swap(char &ch1, char &ch2)
{
    char temp = ch1;
    ch1 = ch2;
    ch2 = temp;
}

int main()
{
    // n组测试
    int n;
    cin >> n;
    // 数据
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        // 交换相邻字母
        for (int j = 0; j < s.size(); j += 2)
        {
            swap(s[j], s[j + 1]);
        }
        cout << s << endl;
    }

    return 0;
}