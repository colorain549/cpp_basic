// 0. 多组测试数据(while(cin>>n))
// 1. 找出出现频率最高的字母
// 2. 给定一个只包含小写字母的字符串, 统计字符串中每个字母出现的频率
// 3. 利用数组是连续的和ASCII表求解
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // 当前最大频率max
    int max;
    // 保存结果
    char result;
    // 只包含小写字母的字符串s
    string s;
    // 多组测试数据(while(cin>>n))
    int n;
    while (cin >> n)
    {
        // 多组测试数据
        for (int i = 0; i < n; i++)
        {
            // 用于统计的数组count
            int count[26] = {0};
            // 只包含小写字母的字符串s
            cin >> s;
            // 统计每个字母出现的频率
            for (int i = 0; i < s.size(); i++)
            {
                count[s[i] - 'a']++;
            }
            // 当前最大频率
            max = 0;
            // 找出最大频率的字母
            for (int j = 0; j < 26; j++)
            {
                if (max < count[j])
                {
                    max = count[j];
                    result = 'a' + j;
                }
            }
            cout << result << endl;
        }
    }
    return 0;
}