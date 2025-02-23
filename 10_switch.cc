// 0. 多组测试(while)
// 1. 每组输入数据占一行, 由一个或多个大写字母组成, 字母之间由空格分隔
// 2. 平均绩点, 结果保留两位小数(C语言或<iomanip>的fixed和setprecision)
// 3/ 否则, 输出“Unknown”
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
    // 绩点
    int grade;
    // 字母数量
    int count;
    // 平均绩点, 结果保留两位小数
    float avg;
    // 标志
    int flag;
    // 输入数据
    string s;
    // 多组测试(while)
    while (getline(cin, s))
    {
        // 初始化或重置变量
        grade = 0;
        count = 0;
        flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case 'A':
                grade += 4;
                count++;
                break;

            case 'B':
                grade += 3;
                count++;
                break;

            case 'C':
                grade += 2;
                count++;
                break;

            case 'D':
                grade += 1;
                count++;
                break;

            case ' ':
                break;

            case 'F':
                grade += 0;
                count++;
                break;

            default:
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            avg = grade * 1.00 / count;
            // printf("%.2f\n", avg);
            cout << fixed << setprecision(2) << avg << endl;
        }
        else
        {
            cout << "Unknown" << endl;
        }
    }

    return 0;
}