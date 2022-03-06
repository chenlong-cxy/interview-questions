#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string compressString(string S) {
		string ret; //存储压缩后的字符串
		int count = 1;
		for (size_t i = 0; i < S.size(); i++)
		{
			if (i + 1 < S.size() && S[i] == S[i + 1])
			{
				count++;
				continue;
			}
			ret += S[i]; //字符
			ret += to_string(count); //字符重复出现的次数
			count = 1; //重置count
		}
		return ret.size() < S.size() ? ret : S; //压缩后的字符串没有变短则返回原字符串
	}
};

int  main()
{
	cout << Solution().compressString("aabcccccaaa") << endl;
	return 0;
}
