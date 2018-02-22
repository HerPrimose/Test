#include <iostream>
using namespace std;

//struct ListNode {
//      int val;
//      struct ListNode *next;
//      ListNode(int x) :
//            val(x), next(NULL) {
//      }
//};
//class Solution {
//public:	 
//	vector<int>v;
// vector<int> printListFromTailToHead(ListNode* head) {
//	 if (head != NULL)
//	 {
//		 if (head->next != NULL)
//		 {
//			 printListFromTailToHead(head->next);
//
//		 }v.push_back(head->val);
//	 }
//	  return v;
// }
//};
//void replaceSpace(char *str, int length) {
//	//遍历一边字符串找出空格的数量
//	if (str == NULL || length<0)
//		return;
//	int i = 0;
//	int oldnumber = 0;//记录以前的长度
//	int replacenumber = 0;//记录空格的数量
//	while (str[i] != '\0')
//	{
//		oldnumber++;
//		if (str[i] == ' ')
//		{
//			replacenumber++;
//		}
//		i++;
//	}
//	int newlength = oldnumber + replacenumber * 2;//插入后的长度
//	if (newlength>length)//如果计算后的长度大于总长度就无法插入
//		return;
//	int pOldlength = oldnumber; //注意不要减一因为隐藏个‘\0’也要算里
//	int pNewlength = newlength;
//	while (pOldlength >= 0 && pNewlength>pOldlength)//放字符
//	{
//		if (str[pOldlength] == ' ') //碰到空格就替换
//		{
//			str[pNewlength--] = '0';
//			str[pNewlength--] = '2';
//			str[pNewlength--] = '%';
//
//		}
//		else //不是空格就把pOldlength指向的字符装入pNewlength指向的位置
//		{
//			str[pNewlength--] = str[pOldlength];
//
//		}
//		pOldlength--; //不管是if还是elsr都要把pOldlength前移
//
//	}
//
//
//}

double Power(double base, int exponent) {
	int n = abs(exponent);
	if (n == 0)
		return 1;
	if (n == 1)
 		return base;
	double result = Power(base, n >> 1);
	result *= result;
	if ((n & 1) == 1)
		result *= base;
	if (exponent<0)
		result = 1 / result;
	return result;
}
int main()
{
	/*while (true)
	{
		cout << "输入n和k" << endl;
		int n, k;
		cin >> n >> k;
		vector<int> res;
		int small = 1, large = n;
		while (small <= large) {
			if (k > 1) {
				int cur = (k % 2 == 0 ? small++ : large--);
				res.push_back(cur);
				k--;
			}
			else {
				res.push_back(large--);
			}
		}
		for (int i = 0; i < n; i++)
			cout << res[i];
		system("pause");
	}*/
	double res = Power(10.0, 5);
	cout << res << endl;
	return 0;
}
