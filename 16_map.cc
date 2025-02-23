// 0. 多组输出(while(cin>>n))
// 1. 找出出现频率最高的字母
// 2. 给定一个只包含小写字母的字符串, 统计字符串中每个字母出现的频率
// 3. 利用map的特性
// 4. map<key, value>, key是字母, value是频率
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
    // 当前最大频率
    int max;
    // 保存结果
    char result;
    // 用于统计的容器
    map<char, int> count;
    // 只包含小写字母的字符串s
    string s;
    // 多组输出(while(cin>>n))
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            // 只包含小写字母的字符串s
            cin >> s;
            // 统计字符串中每个字母出现的频率
            for (int i = 0; i < s.size(); i++)
            {
                count[s[i]]++;
            }
            // 当前最大频率
            max = 0;
            // 使用迭代法, 找到出现频率最高的字母
            for (auto it = count.begin(); it != count.end(); ++it)
            {
                if (max < it->second)
                {
                    max = it->second;
                    result = it->first;
                }
            }
            // 使用增强for循环, 找到出现频率最高的字母
            // for (auto &it : count)
            // {
            //     if (max < it.second)
            //     {
            //         max = it.second;
            //         result = it.first;
            //     }
            // }
            cout << result << endl;
            // 清空容器
            count.clear();
        }
    }
    return 0;
}