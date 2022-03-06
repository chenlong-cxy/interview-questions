#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string compressString(string S) {
		string ret; //�洢ѹ������ַ���
		int count = 1;
		for (size_t i = 0; i < S.size(); i++)
		{
			if (i + 1 < S.size() && S[i] == S[i + 1])
			{
				count++;
				continue;
			}
			ret += S[i]; //�ַ�
			ret += to_string(count); //�ַ��ظ����ֵĴ���
			count = 1; //����count
		}
		return ret.size() < S.size() ? ret : S; //ѹ������ַ���û�б���򷵻�ԭ�ַ���
	}
};

int  main()
{
	cout << Solution().compressString("aabcccccaaa") << endl;
	return 0;
}
