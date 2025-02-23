// 0. 多组输出(while(cin>>n))
// 1. 找出出现频率最高的字母
// 2. 给定一个只包含小写字母的字符串, 统计字符串中每个字母出现的频率
// 3. 利用数组是连续的和ASCII表求解
// 4. 反思reserve仅预留容量, 而不会初始化
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    // 当前最大频率
    int max;
    // 保存结果
    char result;
    // 只包含小写字母的字符串s
    string s;
    // 多组输出(while(cin>>n))
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            // 用于统计字母出现频率的容器(每次都初始化)
            vector<int> count(26, 0);
            // 只包含小写字母的字符串s
            cin >> s;
            // 统计字母出现的频率
            for (int j = 0; j < s.size(); j++)
            {
                count[s[j] - 'a']++;
            }
            // 当前最大频率
            max = 0;
            // 找到出现频率最高的字母
            for (int k = 0; k < 26; k++)
            {
                if (max < count[k])
                {
                    max = count[k];
                    result = 'a' + k;
                }
            }
            cout << result << endl;
        }
    }

    return 0;
}