﻿/*--------------------------------------------------------------------------------------|
判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。|
																						|
示例 1:																					|
																						|
输入: 121																				|
输出: true																				|
示例 2:																					|
																						|
输入: -121																				|
输出: false																				|
解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。				|
示例 3:																					|
																						|
输入: 10																				|
输出: false																				|
解释: 从右向左读, 为 01 。因此它不是一个回文数。										|
进阶:																					|
																						|
你能不将整数转为字符串来解决这个问题吗？												|
																						|
来源：力扣（LeetCode）																	|
链接：https://leetcode-cn.com/problems/palindrome-number								|
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。					|
---------------------------------------------------------------------------------------*/

/*	直接反转输入，判断是否相同，相同即为回文数
*	执行用时：12 ms, 在所有 C++ 提交中击败了82.84%的用户
*	内存消耗：6.0 MB, 在所有 C++ 提交中击败了60.02%的用户
*/

#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(int x) 
{
	if (x < 0 || x > 2147447412)			/*	2147447412是int型里最大的回文数	*/
	{
		return false;
	}
	
	int result = { 0 };
	int p = x;

	while (p)
	{
		result = result * 10 + p % 10;
		p = (p - p % 10) / 10;
	}

	if (result == x)
	{
		return true;
	}

	return false;
}

int main()
{
	int x1 = 12345654321;
	cout << isPalindrome(x1) << endl;

	int x2 = -121;
	cout << isPalindrome(x2) << endl;

	int x3 = 10;
	cout << isPalindrome(x3) << endl;

}
