#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<queue>
#include<memory>
#include<string>
#include<stdio.h>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include"vld.h"
#include<algorithm>
#include<list>
#include<map>
#include<functional>
#include<set>

using namespace std;

#define HELLO "hello world";


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {

    }
};
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//		if (!nums.size())
//			return 0;
//		vector<int> dp(nums.size());
//		dp[0] = 1;
//		for (int i = 1; i < nums.size(); i++)
//		{
//			int val_max = 1;
//			int k = 0;
//			for (k = 0; k < i; k++)
//			{
//				if (nums[i] > nums[k])
//					dp[i] = max(dp[i], dp[k] + 1);
//			}
//		}
//		return *max_element(dp.begin(), dp.end());
//    }
//};
//int main()
//{
//	Solution a;
//	//vector<int> s = { 10, 9, 2, 5, 3, 7, 101, 18 };
//	vector<int> s = { 4, 10, 4, 3, 8, 9 };
//	int ret = a.lengthOfLIS(s);
//	cout << ret << endl;
//	return 0;
//}
//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//
//    }
//};
//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        vector<int> ret;
//		
//        multiset<int,greater<int>> space;
//		for (int i = 0; i < k; i++)
//			space.insert(nums[i]);
//
//        ret.push_back(*space.begin());
//		space.erase(space.find(nums[0]));
//        for(int i = 1;i < nums.size() - k + 1;i++)
//        {
//			space.insert(nums[i + k - 1]);
//			ret.push_back(*space.begin());
//			space.erase(space.find(nums[i]));
//        }
//		return ret;
//    }
//};
//int main()
//{
//	Solution a;
//	vector<int> s = { 1, 3, -1, -3, 5, 3, 6, 7 };
//
//	vector<int> ret = a.maxSlidingWindow(s, 3);
//	return 0;
//}
//class Solution {
//public:
//    string reverseLeftWords(string s, int n) {
//		string ret;
//		ret += s.substr(n);
//		ret += s.substr(0,n);
//		return ret;
//    }
//};
//vector<vector<int>> findContinuousSequence(int target)
//{
//	vector<vector<int>> ret;
//	int left = 1;
//	int right = 2;
//	int n = 3;
//	while (right <= target && left < target)
//	{
//		if (n < target)
//		{
//			right++;
//			n += right;
//		}
//		else if (n > target)
//		{
//			n -= left;
//			left++;
//		}
//		else
//		{
//			vector<int> tmp;
//			for (int i = left; i <= right; i++)
//				tmp.push_back(i);
//			ret.push_back(tmp);
//			right++;
//			n += right;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	vector<vector<int>> ret;
//	ret = findContinuousSequence(9);
//
//	return 0;
//}
//class Solution {
//public:
//    vector<int> singleNumbers(vector<int>& nums) {
//        vector<int> space;
//        if(!nums.size())
//            return space;
//        int ret = 0;
//        for(int i = 0;i < nums.size();i++)
//        {ret ^= nums[i];}
//        int h = 1;
//        while((ret & h) == 0)
//        {h <<= 1;}
//        int a = 0;
//        int b = 0;
//        for(int i = 0;i < nums.size();i++)
//        {
//            if((h & nums[i]) == 0)
//                a ^= nums[i];
//            else 
//                b ^= nums[i];
//        }
//        space.push_back(a);
//        space.push_back(b);
//        return space;
//    }
//};
//int main()
//{
//	vector<int> space = { 4, 1, 4, 6 };
//	Solution a;
//	
//	a.singleNumbers(space);
//	return 0;
//}
//class Solution {
//public:
//	int nthUglyNumber(int n) {
//		vector<int> dp(n, 0);
//		dp[0] = 1;
//		int p2 = 0;
//		int p3 = 0;
//		int p5 = 0;
//		for (int i = 1; i < n; i++)
//		{
//			dp[i] = min(min(dp[p2] * 2, dp[p3] * 3), dp[p5] * 5);
//			if (dp[i] == dp[p2] * 2)
//				p2++;
//			if (dp[i] == dp[p3] * 3)
//				p3++;
//			if (dp[i] == dp[p5] * 5)
//				p5++;
//		}
//		return dp[n - 1];
//	}
//};
//int main()
//{
//	Solution a;
//	cout << a.nthUglyNumber(10);
//
//	return 0;
//}
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        vector<bool> space(128);
//        int len = 0;
//		int left = 0;
//		int right = 0;
//		int ret = 0;
//        for(int i = 0;i < s.size();i++)
//        {
//			right = i;
//			if (!space[s[i]])
//			{
//				space[s[i]] = true;
//				len++;
//			}
//			else
//			{
//				int n = left;
//				while (left <= right)
//				{
//					if (s[left] != s[right])
//						space[s[left]] = false,left++;
//					else
//					{
//						left++;
//						len = right - left + 1;
//						break;
//					}
//				}
//			}
//			if (len > ret)
//				ret = len;
//        }
//        return ret;
//    }
//};
//int main()
//{
//	Solution a;
//	cout << a.lengthOfLongestSubstring("abcabcbb");
//	return 0;
//}
//int fun(int num)
//{
//	if (num < 10)
//		return 1;
//
//	string str;
//	while (num)
//		str += num % 10 + '0',num /= 10;
//	//char c = 'x';
//	//for (int i = 0; i < str.size() / 2; i++)
//	//{
//	//	c = str[i];
//	//	str[i] = str[str.size() - i - 1];
//	//	str[str.size() - i - 1] = c;
//	//}
//	int a = 1;
//	int b = 1;
//	for (int i = 2; i <= str.size(); i++)
//	{
//		string tmp = str.substr(i - 2, i);
//		int n = tmp.compare("10") >= 0 && tmp.compare("25") <= 0 ? a + b : a;
//		b = a;
//		a = n;
//	}
//	return a;
//}
//int main()
//{
//	fun(12258);
//	return 0;
//}
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//		if (!nums.size())
//			return 0;
//		int ret = nums[0];
//		for (int i = 1; i < nums.size(); i++){
//			if (nums[i] > 0)
//				nums[i] = nums[i - 1] + nums[i];
//			if (nums[i] > ret)
//				ret = nums[i];
//		}
//		return ret;
//    }
//};
//class fun{
//public:
//	fun(){}
//	bool operator()(vector<int>::iterator &x, vector<int>::iterator &y)
//	{
//		return x < y;
//	}
//	
//};
//class MedianFinder {
//public:
//	vector<double> big;
//	vector<double> small;
//	bool key;
//    MedianFinder() {
//		make_heap(big.begin(), big.end());
//		make_heap(small.begin(), small.end(),greater<double>());
//		key = false;
//    }
//    
//    void addNum(int num) {
//		//小堆中放的是较大的一半,大堆中放的是较小的一半
//		//如果是奇数,要向大堆插入. 先向小堆插,在进行调整,然后将小堆的堆顶拿走放入大堆, 小堆调整,大堆调整
//		//如果是偶数,要向小堆插入. 先向大堆插,在进行调整,然后将大堆的堆顶拿走放入小堆, 大堆调整,小堆调整
//		//key == true 是奇数
//		if (key)
//		{
//			small.push_back(num);
//			push_heap(small.begin(), small.end(),greater<double>());
//			
//			big.push_back(small[0]);
//			push_heap(big.begin(), big.end());
//			pop_heap(small.begin(), small.end(),greater<double>());
//			small.pop_back();
//		}
//		else
//		{
//			big.push_back(num);
//			push_heap(big.begin(), big.end());
//
//			small.push_back(big[0]);
//			push_heap(small.begin(), small.end(),greater<double>());
//			pop_heap(big.begin(), big.end());
//			big.pop_back();
//		}
//		key = key ? false : true;
//    }
//    double findMedian() {
//		if (key)
//			return small[0];
//		double ret = (small[0] + big[0]) / 2;
//		return ret;
//    }
//};
//
//int main()
//{
//	MedianFinder a;
//	a.addNum(1);
//	a.addNum(2);
//	double out = a.findMedian();
//	printf("%lf\n", out);
//	a.addNum(3);
//
//	out = a.findMedian();
//	printf("%lf\n", out);
//
//	return 0;
//}
//bool fun(pair<int, int> &x, pair<int, int> &y)
//{
//	if (x.first > y.first)
//		return true;
//	if (x.first == y.first)
//		return x.second < y.second;
//	return false;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (cin >> n >> m)
//	{
//		vector<int> val;
//		vector<vector<pair<int, int>>> space;
//		int tmp = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			val.push_back(tmp);
//		}
//		space.resize(n);
//		int x = 0;
//		int y = 0;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> x >> y;
//			space[x].push_back(make_pair(x, y));
//			space[y].push_back(make_pair(y, x));
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	vector<vector<pair<int, int>>> space;
//	vector<int> val;
//	int n;
//	int line;
//	while (cin >> n >> line)
//	{
//		space.resize(n);
//		int tmp = 0;
//		int x = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			val.push_back(tmp);
//		}
//		for (int i = 0; i < line; i++)
//		{
//			cin >> tmp >> x;
//			tmp--;
//			x--;
//			space[tmp].push_back(make_pair(tmp, x));
//			space[x].push_back(make_pair(x, tmp));
//		}
//        // 1   2   3   4   5
//        // 3   4   1   4   9
//        // 5   7   12  4   1
//		vector<int> no;
//		no.resize(n);
//		for (int i = 0; i < space.size(); i++)
//		{
//			for (int k = 0; k < space[i].size(); k++)
//				no[i] += val[space[i][k].second];
//		}
//		vector<int> dp;
//		dp.resize(n);
//		
//
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	vector<int> out;
//	while (cin >> n >> k)
//	{
//		int tmp = 0;
//		vector<pair<int, int>> space;
//		
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			out.push_back(tmp);
//		}
//		for (int i = 0; i < out.size(); i++)
//		{
//			int k = 0;
//			for (k = 0; k < space.size(); k++)
//			{
//				if (space[k].second == out[i])
//					space[k].first++;
//			}
//			if (k == space.size())
//				space.push_back(make_pair(1, out[i]));
//		}
//		sort(space.begin(), space.end(), fun);
//		if (n <= k)
//		{
//			int ret = space[0].second;
//			continue;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	string str;
//	vector<int> space;
//	while (cin >> str)
//	{
//		space.clear();
//		int num = 0;
//		for (int i = 0; i < str.size(); i++)
//		{
//			num = 0;
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				while (i < str.size() && str[i] >= '0' && str[i] <= '9')
//				{
//					num *= 10;
//					num += str[i] - '0';
//					i++;
//				}
//			}
//			else
//				continue;
//			space.push_back(num);
//		}
//		sort(space.begin(), space.end());
//		for (int i = 0; i < space.size(); i++)
//			cout << space[i] << endl;
//	}
//    return 0;
//}
 //int main()
 //{
 //    int n = 0;
 //    int m = 0;
 //    vector<vector<int>> ret;
 //    while (cin >> n >> m)
 //    {
 //   	 // n == 3     m == 2
 //   	 ret.resize(m);
 //   	 int tmp = 0;
 //   	 for (int i = 0; i < ret.size(); i++)
 //   		 ret[i].resize(n);
 //   	 for (int i = 0; i < n; i++)
 //   	 {
 //   		 for (int k = 0; k < m; k++)
 //   		 {
 //   			 cin >> tmp;
 //   			 ret[k][i] = tmp;
 //   		 }
 //   	 }
 //   	 for (int i = 0; i < ret.size(); i++)
 //   	 {
 //   		 for (int k = 0; k < ret[i].size(); k++)
 //   		 {
 //   			 cout << ret[i][k] << ' ';
 //   		 }
 //   		 cout << endl;
 //   	 }
 //    }
 //    return 0;
 //}
//class MedianFinder {
//public:
//    /** initialize your data structure here. */
//	vector<int> space;
//    MedianFinder() {
//		make_heap(space.begin(), space.end());
//    }
//    
//    void addNum(int num) {
//		space.push_back(num);
//		push_heap(space.begin(), space.end());
//    }
//    
//    double findMedian() {
//		double ret = 0;
//		if (!space.size())
//			return ret;
//		if (space.size() % 2)
//		{
//
//		}
//		else
//		{
//
//		}
//    }
//};
//int main()
//{
//	int n = 0;
//	vector<int> ret;
//	while (cin >> n)
//	{
//
//	}
//	return 0;
//}
// int fun(vector<vector<int>> &space, int &boom)
// {
//	 vector<vector<int>> tmp = space;
//	 for (int i = 0; i < space.size(); i++)
//		 tmp[i][0] = 1;
//
//	 for (int i = 0; i < space[0].size(); i++)
//		 tmp[0][i] = 1;
//	 
//	 for (int i = 1; i < tmp.size(); i++)
//	 {
//		 for (int k = 1; k < tmp[i].size(); k++)
//		 {
//			 tmp[i][k] = tmp[i - 1][k] + tmp[i][k - 1];
//			 if (space[i][k] > 0)
//				 boom += ;
//		 }
//	 }
//	 return tmp[space.size() - 1][space[0].size() - 1];
// }
// int main()
// {
//	 int n = 0;
//	 int m = 0;
//	 int k = 0;
//	 vector<vector<int>> space;
//	 while (cin >> n >> m >> k)
//	 {
//		 space.clear();
//		 space.resize(n);
//		 for (int i = 0; i < n; i++)
//			 space[i].resize(m);
//		 int x = 0;
//		 int y = 0;
//		 while (k--)
//		 {
//			 cin >> x >> y;
//			 space[x - 1][y - 1]++;
//		 }
//		 int all = 0;
//		 int boom = 0;
//		 all = fun(space, boom);
//		 double ret = boom / all;
//		 cout << ret << endl;
//	 }
//	 return 0;
// }
//class Solution {
//public:
//	void fun(vector<string> &ret, string &s, string &tmp, int &index)
//	{
//		if (index == s.size())
//		{
//			ret.push_back(tmp);
//			return;
//		}
//
//	}
//    vector<string> permutation(string s) {
//		vector<string> ret;
//		string tmp;
//		int index;
//		fun(ret, s, tmp, index);
//		return ret;
//    }
//}; 
//class Codec {
//public:
//    // Encodes a tree to a single string.
//	int getNum(string str, int& index)
//	{
//		bool key = true;
//		if (str[index] == '-')
//			key = false, index++;
//		int ret = str[index] - '0';
//		index++;
//		while (index < str.size() - 1 && str[index] != ',')
//			ret *= 10, ret += str[index++] - '0';
//		if (!key)
//			ret *= -1;
//		return ret;
//	}
//	string getStr(int val)
//	{
//		string ret;
//		if (val < 0)
//			ret += '-', val *= -1;
//		if (val == 0)
//		{
//			ret += '0';
//			return ret;
//		}
//		while (val)
//		{
//			ret += val % 10 + '0';
//			val /= 10;
//		}
//		char c = 'x';
//		int i = 0;
//		if (ret[0] == '-')
//			i++;
//		for (; i < ret.size() / 2; i++)
//		{
//			c = ret[i];
//			ret[i] = ret[ret.size() - i - 1];
//			ret[ret.size() - i - 1] = c;
//		}
//		return ret;
//	}
//    string serialize(TreeNode* root) {
//		queue<TreeNode*> q;
//		string ret;
//		if (!root)
//			return ret;
//		ret.push_back('[');
//		q.push(root);
//		
//		while (q.size())
//		{
//			root = q.front();
//			q.pop();
//
//			if (root != NULL)
//				ret += getStr(root->val),ret += ',';
//			else
//			{
//				ret += "null,";
//				continue;
//			}
//			q.push(root->left);
//			q.push(root->right);
//		}
//		ret.resize(ret.size() - 1);
//		int end = ret.size() - 1;
//		while (ret[end] == 'l')
//			ret.resize(ret.size() - 5),end -= 5;
//		ret += ']';
//		return ret;
//    }
//    // Decodes your encoded data to tree.
//    TreeNode* deserialize(string data) {
//		if (!data.size())
//			return NULL;
//		int index = 1;
//		queue<TreeNode*> q;
//		
//		q.push(new TreeNode(getNum(data,index)));
//		TreeNode *ret = q.front();
//		index++;
//		while (index < data.size())
//		{
//			if (data[index] != 'n')
//			{
//				int num = getNum(data,index);
//				TreeNode *tmp = new TreeNode(num);
//				q.front()->left = tmp;
//				q.push(tmp);
//				index++;
//				//index += 2;
//			}
//			else
//				index += 5;
//
//			if (index >= data.size())
//				break;
//			if (data[index] != 'n')
//			{
//				int num = getNum(data, index);
//				TreeNode *tmp = new TreeNode(num);
//				q.front()->right = tmp;
//				q.push(tmp);
//				index++;
//			}
//			else
//				index += 5;
//			q.pop();
//		}
//		return ret;
//    }
//};
//int main()
//{
//	Codec a;
//	//string str = "[1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9,null,10,null,11,null,12,null,13,null,14,null,15,null,16,null,17,null,18,null,19,null,20,null,21,null,22,null,23,null,24,null,25,null,26,null,27,null,28,null,29,null,30,null,31,null,32,null,33,null,34,null,35,null,36,null,37,null,38,null,39,null,40,null,41,null,42,null,43,null,44,null,45,null,46,null,47,null,48,null,49,null,50,null,51,null,52,null,53,null,54,null,55,null,56,null,57,null,58,null,59,null,60,null,61,null,62,null,63,null,64,null,65,null,66,null,67,null,68,null,69,null,70,null,71,null,72,null,73,null,74,null,75,null,76,null,77,null,78,null,79,null,80,null,81,null,82,null,83,null,84,null,85,null,86,null,87,null,88,null,89,null,90,null,91,null,92,null,93,null,94,null,95,null,96,null,97,null,98,null,99,null,100,null,101,null,102,null,103,null,104,null,105,null,106,null,107,null,108,null,109,null,110,null,111,null,112,null,113,null,114,null,115,null,116,null,117,null,118,null,119,null,120,null,121,null,122,null,123,null,124,null,125,null,126,null,127,null,128,null,129,null,130,null,131,null,132,null,133,null,134,null,135,null,136,null,137,null,138,null,139,null,140,null,141,null,142,null,143,null,144,null,145,null,146,null,147,null,148,null,149,null,150,null,151,null,152,null,153,null,154,null,155,null,156,null,157,null,158,null,159,null,160,null,161,null,162,null,163,null,164,null,165,null,166,null,167,null,168,null,169,null,170,null,171,null,172,null,173,null,174,null,175,null,176,null,177,null,178,null,179,null,180,null,181,null,182,null,183,null,184,null,185,null,186,null,187,null,188,null,189,null,190,null,191,null,192,null,193,null,194,null,195,null,196,null,197,null,198,null,199,null,200,null,201,null,202,null,203,null,204,null,205,null,206,null,207,null,208,null,209,null,210,null,211,null,212,null,213,null,214,null,215,null,216,null,217,null,218,null,219,null,220,null,221,null,222,null,223,null,224,null,225,null,226,null,227,null,228,null,229,null,230,null,231,null,232,null,233,null,234,null,235,null,236,null,237,null,238,null,239,null,240,null,241,null,242,null,243,null,244,null,245,null,246,null,247,null,248,null,249,null,250,null,251,null,252,null,253,null,254,null,255,null,256,null,257,null,258,null,259,null,260,null,261,null,262,null,263,null,264,null,265,null,266,null,267,null,268,null,269,null,270,null,271,null,272,null,273,null,274,null,275,null,276,null,277,null,278,null,279,null,280,null,281,null,282,null,283,null,284,null,285,null,286,null,287,null,288,null,289,null,290,null,291,null,292,null,293,null,294,null,295,null,296,null,297,null,298,null,299,null,300,null,301,null,302,null,303,null,304,null,305,null,306,null,307,null,308,null,309,null,310,null,311,null,312,null,313,null,314,null,315,null,316,null,317,null,318,null,319,null,320,null,321,null,322,null,323,null,324,null,325,null,326,null,327,null,328,null,329,null,330,null,331,null,332,null,333,null,334,null,335,null,336,null,337,null,338,null,339,null,340,null,341,null,342,null,343,null,344,null,345,null,346,null,347,null,348,null,349,null,350,null,351,null,352,null,353,null,354,null,355,null,356,null,357,null,358,null,359,null,360,null,361,null,362,null,363,null,364,null,365,null,366,null,367,null,368,null,369,null,370,null,371,null,372,null,373,null,374,null,375,null,376,null,377,null,378,null,379,null,380,null,381,null,382,null,383,null,384,null,385,null,386,null,387,null,388,null,389,null,390,null,391,null,392,null,393,null,394,null,395,null,396,null,397,null,398,null,399,null,400,null,401,null,402,null,403,null,404,null,405,null,406,null,407,null,408,null,409,null,410,null,411,null,412,null,413,null,414,null,415,null,416,null,417,null,418,null,419,null,420,null,421,null,422,null,423,null,424,null,425,null,426,null,427,null,428,null,429,null,430,null,431,null,432,null,433,null,434,null,435,null,436,null,437,null,438,null,439,null,440,null,441,null,442,null,443,null,444,null,445,null,446,null,447,null,448,null,449,null,450,null,451,null,452,null,453,null,454,null,455,null,456,null,457,null,458,null,459,null,460,null,461,null,462,null,463,null,464,null,465,null,466,null,467,null,468,null,469,null,470,null,471,null,472,null,473,null,474,null,475,null,476,null,477,null,478,null,479,null,480,null,481,null,482,null,483,null,484,null,485,null,486,null,487,null,488,null,489,null,490,null,491,null,492,null,493,null,494,null,495,null,496,null,497,null,498,null,499,null,500,null,501,null,502,null,503,null,504,null,505,null,506,null,507,null,508,null,509,null,510,null,511,null,512,null,513,null,514,null,515,null,516,null,517,null,518,null,519,null,520,null,521,null,522,null,523,null,524,null,525,null,526,null,527,null,528,null,529,null,530,null,531,null,532,null,533,null,534,null,535,null,536,null,537,null,538,null,539,null,540,null,541,null,542,null,543,null,544,null,545,null,546,null,547,null,548,null,549,null,550,null,551,null,552,null,553,null,554,null,555,null,556,null,557,null,558,null,559,null,560,null,561,null,562,null,563,null,564,null,565,null,566,null,567,null,568,null,569,null,570,null,571,null,572,null,573,null,574,null,575,null,576,null,577,null,578,null,579,null,580,null,581,null,582,null,583,null,584,null,585,null,586,null,587,null,588,null,589,null,590,null,591,null,592,null,593,null,594,null,595,null,596,null,597,null,598,null,599,null,600,null,601,null,602,null,603,null,604,null,605,null,606,null,607,null,608,null,609,null,610,null,611,null,612,null,613,null,614,null,615,null,616,null,617,null,618,null,619,null,620,null,621,null,622,null,623,null,624,null,625,null,626,null,627,null,628,null,629,null,630,null,631,null,632,null,633,null,634,null,635,null,636,null,637,null,638,null,639,null,640,null,641,null,642,null,643,null,644,null,645,null,646,null,647,null,648,null,649,null,650,null,651,null,652,null,653,null,654,null,655,null,656,null,657,null,658,null,659,null,660,null,661,null,662,null,663,null,664,null,665,null,666,null,667,null,668,null,669,null,670,null,671,null,672,null,673,null,674,null,675,null,676,null,677,null,678,null,679,null,680,null,681,null,682,null,683,null,684,null,685,null,686,null,687,null,688,null,689,null,690,null,691,null,692,null,693,null,694,null,695,null,696,null,697,null,698,null,699,null,700,null,701,null,702,null,703,null,704,null,705,null,706,null,707,null,708,null,709,null,710,null,711,null,712,null,713,null,714,null,715,null,716,null,717,null,718,null,719,null,720,null,721,null,722,null,723,null,724,null,725,null,726,null,727,null,728,null,729,null,730,null,731,null,732,null,733,null,734,null,735,null,736,null,737,null,738,null,739,null,740,null,741,null,742,null,743,null,744,null,745,null,746,null,747,null,748,null,749,null,750,null,751,null,752,null,753,null,754,null,755,null,756,null,757,null,758,null,759,null,760,null,761,null,762,null,763,null,764,null,765,null,766,null,767,null,768,null,769,null,770,null,771,null,772,null,773,null,774,null,775,null,776,null,777,null,778,null,779,null,780,null,781,null,782,null,783,null,784,null,785,null,786,null,787,null,788,null,789,null,790,null,791,null,792,null,793,null,794,null,795,null,796,null,797,null,798,null,799,null,800,null,801,null,802,null,803,null,804,null,805,null,806,null,807,null,808,null,809,null,810,null,811,null,812,null,813,null,814,null,815,null,816,null,817,null,818,null,819,null,820,null,821,null,822,null,823,null,824,null,825,null,826,null,827,null,828,null,829,null,830,null,831,null,832,null,833,null,834,null,835,null,836,null,837,null,838,null,839,null,840,null,841,null,842,null,843,null,844,null,845,null,846,null,847,null,848,null,849,null,850,null,851,null,852,null,853,null,854,null,855,null,856,null,857,null,858,null,859,null,860,null,861,null,862,null,863,null,864,null,865,null,866,null,867,null,868,null,869,null,870,null,871,null,872,null,873,null,874,null,875,null,876,null,877,null,878,null,879,null,880,null,881,null,882,null,883,null,884,null,885,null,886,null,887,null,888,null,889,null,890,null,891,null,892,null,893,null,894,null,895,null,896,null,897,null,898,null,899,null,900,null,901,null,902,null,903,null,904,null,905,null,906,null,907,null,908,null,909,null,910,null,911,null,912,null,913,null,914,null,915,null,916,null,917,null,918,null,919,null,920,null,921,null,922,null,923,null,924,null,925,null,926,null,927,null,928,null,929,null,930,null,931,null,932,null,933,null,934,null,935,null,936,null,937,null,938,null,939,null,940,null,941,null,942,null,943,null,944,null,945,null,946,null,947,null,948,null,949,null,950,null,951,null,952,null,953,null,954,null,955,null,956,null,957,null,958,null,959,null,960,null,961,null,962,null,963,null,964,null,965,null,966,null,967,null,968,null,969,null,970,null,971,null,972,null,973,null,974,null,975,null,976,null,977,null,978,null,979,null,980,null,981,null,982,null,983,null,984,null,985,null,986,null,987,null,988,null,989,null,990,null,991,null,992,null,993,null,994,null,995,null,996,null,997,null,998,null,999,null,1000]";
//	string str = "[-1,0,1]";
//	TreeNode *p = a.deserialize(str);
//	string ret = a.serialize(p);
//	cout << ret << endl;
//	return 0;
//}
//class Node {
//public:
//    int val;
//    Node* left;
//    Node* right;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//        left = NULL;
//        right = NULL;
//    }
//
//    Node(int _val, Node* _left, Node* _right) {
//        val = _val;
//        left = _left;
//        right = _right;
//    }
//};
//class Solution {
//public:
//    Node* fun(Node *root,int mid)
//    {
//		if (!root)
//			return NULL;
//		Node *left = fun(root->left, root->val);
//		Node* right = fun(root->right, root->val);
//		root->left = left;
//		root->right = right;
//		if (left)
//			left->right = root;
//		if (right)
//			right->left = root;
//		if (mid < root->val && root->left)
//			return root->left;
//		else if (mid > root->val && root->right)
//			return root->right;
//		return root;
//    }
//    Node* treeToDoublyList(Node* root) {
//		if (!root)
//			return NULL;
//		Node *mid = fun(root, root->val);
//		Node *begin = mid;
//		Node *end = mid;
//
//		if (begin)
//		{
//			while (begin->left)
//				begin = begin->left;
//		}
//		if (left)
//		{
//			while (end->right)
//				end = end->right;
//		}
//		begin->left = end;
//		end->right = begin;
//		return begin;
//    }
//};
//int main()
//{
//	Node *n1 = new Node(27);
//	Node *n2 = new Node(-99);
//	Node *n3 = new Node(-34);
//	Node *n4 = new Node(-8);
//	Node *n5 = new Node(8);
//	Node *n6 = new Node(55);
//	Node *n7 = new Node(58);
//	Node *n8 = new Node(59);
//	Node *n9 = new Node(68);
//	n1->left = n2;
//	n1->right = n6;
//	n2->right = n3;
//	n3->right = n4;
//	n4->right = n5;
//	n6->right = n7;
//	n7->right = n8;
//	n8->right = n9;
//
//	Solution a;
//	a.treeToDoublyList(n1);
//	return 0;
//}
//class Solution{
//public:
//	
//};
//bool fun(vector<int>& space,int& index,int c)
//{
//	switch (c)
//	{
//	case 0:
//		
//		break;
//	case 1:
//		break;
//	case 2:
//		break;
//	case 3:
//		break;
//	}
//
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	int n4 = 0;
//	while (cin >> n1 >> n2 >> n3 >> n4)
//	{
//		vector<int> space;
//		space.push_back(n1);
//		space.push_back(n2);
//		space.push_back(n3);
//		space.push_back(n4);
//		int index = 1;
//		fun(space, index,0);
//
//		
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	vector<int> space;
//	while (cin >> n)
//	{
//		int tmp = 0;
//		while (n--)
//		{
//			cin >> tmp;
//			space.push_back(tmp);
//		}
//		int ret = space[0];
//		for (int i = 0; i < space.size(); i++)
//		{
//			if (space[i - 1] > 0)
//				space[i] += space[i - 1];
//			if (space[i] > ret)
//				ret = space[i];
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}
//int main()
//{
//	string str1;
//	string str2;
//	string ret;
//	while (getline(cin, str1))
//	{
//		getline(cin, str2);
//		ret.clear();
//		vector<bool>space(128);
//		for (int i = 0; i < str2.size(); i++)
//			space[str2[i]] = true;
//		for (int i = 0; i < str1.size(); i++)
//		{
//			if (space[str1[i]])
//				continue;
//			ret += str1[i];
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}
//jclass Solution {
//jpublic:
//j    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//j        stack<int> space;
//j        int k = 0;
//j        for(int i = 0;i < pushed.size();i++)
//j        {
//j            space.push(pushed[i]);
//j            if(space.top() == popped[k])
//j            {
//j                while(space.size() && space.top() == popped[k])
//j                {
//j                    space.pop();
//j                    k++;
//j                }
//j            }
//j        }
//j        if(!space.size())
//j            return false;
//j        return true;
//j    }
//j};
//jint main()
//j{
//j	vector<int> pushed = { 1, 2, 3, 4, 5 };
//j	vector<int> popped = { 4, 5, 3, 2, 1 };
//j
//j	Solution a;
//j	a.validateStackSequences(pushed, popped);
//j
//j	return 0;
//j}
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//    TreeNode* mirrorTree(TreeNode* root) {
//        TreeNode *ret = root;
//        queue<TreeNode*> src;
//        src.push(root);
//        while(src.size())
//        {
//            root = src.front();
//			TreeNode *tmp = root->left;
//			root->left = root->right;
//			root->right = tmp;
//            if(root->left)
//                src.push(root->left);
//            if(root->right)
//                src.push(root->right);
//            src.pop();
//        }
//
//
//        return ret;
//    }
//};
//class Solution {
//public:
//	bool check(TreeNode *node, TreeNode *des)
//	{
//		if (des->left && node->left)
//	}
//	bool preOrder(TreeNode *node,TreeNode *des)
//	{
//		if (!node)
//			return false;
//		//val
//		bool ret = false;
//		bool retLeft = false;
//		bool retRight = false;
//
//		if (node->val == des->val)
//			ret = check(node, des);
//
//		retLeft = preOrder(node->left,des);
//		retRight = preOrder(node->right,des);
//		return ret || retLeft || retRight;
//	}
//    bool isSubStructure(TreeNode* A, TreeNode* B) {
//
//    }
//};
//int main()
//{
//	Solution a;
//	TreeNode *a1 = new TreeNode(1);
//	TreeNode *a2 = new TreeNode(2);
//	TreeNode *a3 = new TreeNode(3);
//	TreeNode *a4 = new TreeNode(4);
//	a1->left = a2;
//	a1->right = a3;
//	a2->left = a4;
//
//	TreeNode *b1 = new TreeNode(3);
//	cout << a.isSubStructure(a1,b1);
//	return 0;
//}
//class Solution {
//public:
//	bool check(TreeNode *node, TreeNode *child)
//	{
//		if (!node)
//			return false;
//		if (node->val != child->val)
//			return false;
//
//		if (child->left == NULL && child->right == NULL)
//			return false;
//		if (child->left)
//			check(node->left, child->left);
//		if (child->right)
//			check(node->right, child->right);
//	}
//	bool preOrder(TreeNode *node,TreeNode *child)
//	{
//		if (node)
//			return;
//		bool ret = false;
//		if (node->val != child->val)
//		{
//			preOrder(node->left, child);
//			preOrder(node->right, child);
//		}
//		else
//		{
//			ret = check(node, child);
//		}
//		return ret;
//	}
//    bool isSubStructure(TreeNode* A, TreeNode* B) {
//		bool ret = false;
//		if (!A || !B)
//			return false;
//		else
//			ret = preOrder(A, B);
//		return ret;
//    }
//};
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode *left = l1;
//		ListNode *right = l2;
//		ListNode *ctl = NULL;
//		ListNode *ret = NULL;
//		if (!left)
//			return right;
//		if (!right)
//			return left;
//		if (left->val < right->val)
//			ctl = ret = left, left = left->next;
//		else
//			ctl = ret = right, right = right->next;
//
//		while (left && right)
//		{
//			if (left->val < right->val)
//			{
//				ctl->next = left;
//				left = left->next;
//			}
//			else
//			{
//				ctl->next = right;
//				right = right->next;
//			}
//			ctl = ctl->next;
//		}
//		return ret;
//    }
//};
//class Solution {
//public:
//    bool isMatch(string src ,string temp) {
//        int first = 0;
//        int second = 0;
//        vector<char> dp(src.size());
//
//		for (int i = 0; i < dp.size(); i++)
//		{
//			//normal
//			if (src[first] == temp[second])
//			{
//				dp[i] = src[first];
//				continue;
//			}
//			//face '.*'
//			if (second < temp.size() - 1 && temp[second] == '.' && temp[second] == '*')
//			{
//				if (second == temp.size() - 2)
//					return true;
//
//			}
//			//face '.'
//
//			//face '*'
//
//
//			
//		}
//    }
//};
//int main()
//{
//	Solution a;
//	a.isMatch("nihao","ni");
//
//	return 0;
//}
//class Solution {
//public:
//    int hammingWeight(uint32_t n) {
//        int ans = 0;
//        while(n != 0)
//        {
//            if(n&1 == 1)
//                ans++;
//            n >>= 1;
//        }
//        return ans;
//    }
//};
//int main()
//{
//	Solution a;
//	cout << a.hammingWeight(7);
//	return 0;
//}
//class Solution {
//public:
//    int getSum(int n)
//    {
//        int ret = 0;
//        while(n > 0)
//        {
//            ret += n % 10;
//            n /= 10;
//        }
//        return ret;
//    }
//	void getCount(int &count,vector<vector<bool>> &block, int row, int col, int k)
//	{
//		if (row >= block.size() || col >= block[0].size() || row < 0 || col < 0 || block[row][col])
//			return;
//		if (getSum(row) + getSum(col) <= k)
//			count++, block[row][col] = true;
//		else
//			return;
//		getCount(count, block, row + 1, col, k);
//		getCount(count, block, row, col + 1, k);
//		getCount(count, block, row - 1, col, k);
//		getCount(count, block, row, col - 1, k);
//
//	}
//    int movingCount(int m, int n, int k) {
//        int count = 0;
//		vector<vector<bool>> block(m,vector<bool>(n,false));
//		getCount(count, block, 0, 0, k);
//
//        return count;
//    }
//};
//int main()
//{
//	Solution a;
//	cout << a.movingCount(38, 15, 9) << endl;
//	return 0;
//}

//class CQueue {
//public:
//    CQueue() : isTail(true),count(0){
//    }
//    void change()
//    {
//        if(head.size() == 0)
//        {
//            while(tail.size() != 0)
//                head.push(tail.top()),tail.pop();
//        }
//        else 
//        {
//            while(head.size() != 0)
//                tail.push(head.top()),head.pop();
//        }
//    }
//    void appendTail(int value) {
//        if(!isTail)
//            change(),isTail = true;
//        tail.push(value);
//        count++;
//    }
//    
//    int deleteHead() {
//        if(count == 0)
//            return -1;
//        if(isTail)
//            change(),isTail = false;
//        int tmp = head.top();
//        head.pop();
//		count--;
//        return tmp;
//    }
//private:
//    bool isTail;
//    int count;
//    stack<int> head;
//    stack<int> tail;
//
//};
//int main()
//{
//	CQueue n;
//	cout << n.deleteHead() << endl;
//	n.appendTail(5);
//	n.appendTail(2);
//	n.appendTail(3);
//	n.appendTail(5);
//	cout << n.deleteHead() << endl;
//	cout << n.deleteHead() << endl;
//	cout << n.deleteHead() << endl;
//	n.appendTail(1);
//	n.appendTail(7);
//	n.appendTail(8);
//	cout << n.deleteHead() << endl;
//	cout << n.deleteHead() << endl;
//	cout << n.deleteHead() << endl;
//	
//	cout << n.deleteHead() << endl;
//	cout << n.deleteHead() << endl;
//	cout << n.deleteHead() << endl;
//
//	return 0;
//}
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    static void fun(TreeNode **head,int left,int right,int *index,vector<int>&preorder,vector<int> inorder)
//    {
//        if(left > right)
//            return;
//		(*index)++;
//		if (*index == preorder.size())
//			return;
//        *head = new TreeNode(preorder[*index]);
//        int mid = 0;
//        for(int i = left;i <= right;i++)
//            if(inorder[i] == preorder[*index])
//            {
//                mid = i;
//                break;
//            }
//
//        if(mid > left && mid < right)
//        {
//            fun(&((*head)->left),left,mid - 1,index,preorder,inorder);
//            fun(&((*head)->right),mid + 1,right,index,preorder,inorder);
//        }
//        else if(mid == left)
//            fun(&((*head)->right),mid + 1,right,index,preorder,inorder);
//        else if(mid == right)
//            fun(&((*head)->left),left,mid - 1,index,preorder,inorder);
//        
//    }
//    static TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        if(preorder.size() == 0)
//            return NULL;
//        TreeNode * head = new TreeNode(preorder[0]);
//        int mid = 0;
//        for(int i = 0;i < inorder.size();i++)
//            if(inorder[i] == preorder[0])
//            {
//                mid = i;
//                break;
//            }
//        int index = 0;
//        fun(&(head->left),0,mid - 1,&index,preorder,inorder);
//        fun(&(head->right),mid + 1,preorder.size() - 1,&index,preorder,inorder);
//        return head;
//
//    }
//};
//int main()
//{
//	vector<int> preorder = { 3, 9, 20, 15, 7 };
//	vector<int> inorder = { 9, 3, 15, 20, 7 };
//
//	TreeNode * ret = Solution::buildTree(preorder, inorder);
//	return 0;
//}
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    static string replaceSpace(string s) {
//        string ret;
//        int cur = 0;
//        for(int i = 0;i < s.size();i++)
//        {
//            if(s[i] == ' ')
//                ret += "%20";
//            else
//            {
//                cur = s.find(' ',i);
//                if(cur == string::npos)
//                    ret += s.substr(i),i = s.size();
//                else 
//                    ret += s.substr(i,cur - i),i = cur - 1;
//            }
//        }
//        return ret;
//    }
//};
//int main()
//{
//	string s = "We are happy";
//	cout << Soution::replaceSpace(s) << endl;;
//	return 0;
//}
//class Solution {
//public:
//    static vector<int> findBall(vector<vector<int>>& grid) {
//        vector<int> ret;
//        int wight = grid[0].size();
//        ret.resize(wight);
//        int high = grid.size();
//        int leftWall = 0;
//        int rightWall = wight - 1;
//        for(int i = 0;i < wight;i++)
//        {
//            int flag = i;
//            bool key = true;
//            for(int j = 0;j < high;j++)
//            {
//                if(grid[j][flag] == 1)
//                {
//                    if(flag == rightWall)
//                    {
//                        key = false;
//                        break;
//                    }
//                    if(grid[j][flag + 1] != grid[j][flag])
//                    {
//                        key = false;
//                        break;
//                    }
//                    flag++;
//                }
//                else 
//                {
//                    if(flag == leftWall)
//                    {
//                        key = false;
//                        break;
//                    }
//                    if(grid[j][flag - 1] != grid[j][flag])
//                    {
//                        key = false;
//                        break;
//                    }
//                    flag--;
//                }
//            }
//            if(key)
//                ret[i] = flag;
//            else 
//                ret[i] = -1;
//        }
//        return ret;
//    }
//};
//int main()
//{
//	vector<vector<int>> v = { { 1, 1, 1, -1, -1 }, { 1, 1, 1, -1, -1 }, { -1, -1, -1, 1, 1 }, { 1, 1, 1, 1, -1 }, { -1, -1, -1, -1, -1 } };
//	vector<int> ret = Solution::findBall(v);
//
//	return 0;
//}
//class Solution {
//public:
//    int minSteps(int n) {
//        vector<int> dp[n + 1];
//        for(int i = 2;i <= n;i++)
//        {
//            dp[i] = i;
//            for(int j = 2;j < i/2;j++)
//            {
//                if(i % j == 0)
//                {
//                    dp[i] = dp[j] + dp[i/j];
//                    break;
//                }
//                    
//            }
//        }
//        return dp[n];
//    }
//    
//};
//class signal{
//private:
//	signal(){}
//	
//private:
//	static signal * i;
//
//public:
//	signal *getSig()
//	{
//		if (i == NULL)
//			i = new signal();
//		return i;
//	}
//
//	
//};
//int main()
//{
//	int *p = new int[2];
//	sizeof(*p);
//
//
//	return 0;
//}
//int fun(vector<int> &nums,int index, int _max)
//    {
//        //index 合法性
//        if(index + 1 == nums.size())
//            return 1;
//        if(_max >= nums[index + 1])
//            return fun(nums,index + 1,_max);
//        else
//            return max(fun(nums,index + 1,nums[index + 1]) + 1,fun(nums,index + 1,_max));
//
//    }
//void get_fun(vector<int> &nums)
//{
//    int ret = 0;
//    int index = 0;
//    int _max = nums[index];
//    for(int i = 0;i < nums.size();i++)
//    {
//        ret = max(ret,fun(nums,i,nums[i]));
//    }
//    cout << ret << endl;
//}
//int main()
//{
//    get_fun(nums);
//
//    return 0;
//}
//int fun(vector<int> &nums,int index)
//{
//
//}
//void get_fun(vector<int> &nums)
//{
//    int ret = 0;
//    int index = 0;
//    int _max = nums[index];
//    for(int i = 0;i < nums.size();i++)
//    {
//        ret = max(ret,fun(nums,i));
//    }
//    cout << ret << endl;
//}
//int main()
//{
//    string str;
//    vector<char> table(40,0);
//    for(int i = 0;i < 5;i++)
//        table[i] = 'V' + i;
//    for(int i = 5;i < 26;i++)
//        table[i] = 'A' + i - 5;
//
//    string ret;
//    while(getline(cin,str))
//    {
//        ret.clear();
//        for(int i = 0;i < str.size();i++)
//        {
//            if(str[i] == ' ')
//                ret.push_back(' ');
//            else
//                ret.push_back(table[str[i] - 'A']);
//        }
//        cout << ret << endl;
//    }
//    
//    return 0;
//}

//int check(int n)
//{
//    int ret = 0;
//	unordered_map<int, int> tmp;
//	int i = 2;
//	while (n > 2)
//    {
//        for(i = 2;i < n;i++)
//        {
//            if(n % i == 0)
//            {
//				if (tmp.find(i) == tmp.end())
//				{
//                    ret++;
//					tmp.insert(make_pair(i, 1));
//				}
//                n /= i;
//                break;
//            }
//        }
//		if (i == n)
//			break;
//	}
//	if (tmp.find(i) == tmp.end())
//		ret++;
//	return ret;
//}
//int main()
//{
//    int n = 0;
//	string str;
//	while (getline(cin, str))
//    {
//        cout << check(n) << endl;
//    }
//    return 0;
//}
//string getMul(string r,int num, int zero)
//{
//	string ret;
//	int index = r.size() - 1;
//	int tmp = 0;
//	while (zero > 0)
//		ret.push_back('0'), zero--;
//
//	while (index >= 0)
//	{
//		tmp = (r[index] - '0') * num + tmp;
//		ret.push_back(tmp % 10 + '0');
//		tmp /= 10;
//		index--;
//	}
//	if (tmp > 0)
//		ret.push_back(tmp + '0');
//	return ret;
//}
//string getSum(string str1,string str2)
//{
//	int tmp = 0;
//	int first = 0;
//	int second = 0;
//	string ret;
//	while (first < str1.size() && second < str2.size())
//	{
//		tmp = str1[first] - '0' + str2[second] - '0' + tmp;
//		ret.push_back(tmp % 10 + '0');
//		tmp /= 10;
//		first++;
//		second++;
//	}
//	if (first == str1.size())
//	{
//		while (second < str2.size())
//		{
//			ret.push_back(str2[second]);
//			second++;
//		}
//	}
//	else
//	{
//		while (first < str1.size())
//		{
//			ret.push_back(str1[first]);
//			first++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//    string d;
//    string r;
//	string str1;
//	string str2;
//	string str3;
//	while (cin >> d >> r)
//    {
//		string str1 = getMul(r, 6,2);
//		string str2 = getMul(r, 2, 1);
//		string str3 = getMul(r, 8, 0);
//		string one = getSum(str1, str2);
//		string two = getSum(one, str3);
//		d.push_back('0');
//		d.push_back('0');
//		char c = 'X';
//		for (int i = 0; i < d.size() / 2; i++)
//		{
//			c = d[i];
//			d[i] = d[d.size() - 1 - i];
//			d[d.size() - 1 - i] = c;
//		}
//		bool flag = true;
//		if (d.size() < two.size())
//			flag = true;
//		else if (d.size() > two.size())
//			flag = false;
//		else
//		{
//			for (int i = d.size() - 1; i >= 0; i--)
//			{
//				if (d[i] > two[i])
//					flag = false;
//			}
//		}
//		if (flag)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//    return 0;
//}
//class Solution {
//public:
//    static int jumpFloorII(int number) {
//		if (number == 0)
//			return 0;
//		if (number == 1)
//			return 1;
//		int bef = 0;
//		int aft = 1;
//		for (int i = 1; i < number; i++)
//		{
//			bef += aft;
//			aft = bef - aft;
//		}
//		return aft;
//    }
//};
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		cout << Solution::jumpFloorII(n) << endl;
//	}
//	return 0;
//}
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		int n = 0;
//		for (int i = str.size() - 1; i >= 0; i--)
//		{
//			n += str[i] - '0';
//		}
//
//        int ret = 10;
//        while(n / 10 > 0 && ret / 10 > 0)
//        {
//            ret = 0;
//            while(n > 0)
//            {
//                ret += n % 10;
//                n /= 10;
//            }
//            n = ret;
//        }
//        cout << n << endl;
//	}
//
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    while(cin >> n)
//    {
//        int ret = 10;
//        while(n / 10 > 0 && ret / 10 > 0)
//        {
//            ret = 0;
//            while(n > 0)
//            {
//                ret += n % 10;
//                n /= 10;
//            }
//            n = ret;
//        }
//        cout << n << endl;
//    }
//    return 0;
//}


//int getRet(vector<pair<int,int>> &ret,vector<vector<int>> &space,int i,int k)
//{
//	space[i][k] = 1;
//	if (i == space.size() - 2 && k == space[0].size() - 2)
//	{
//		space[i][k] = 0;
//		return 1;
//	}
//	int a = 0xfffffff;
//	int b = 0xfffffff;
//	int c = 0xfffffff;
//	int d = 0xfffffff;
//	if (space[i + 1][k] != 1)
//		a = getRet(ret, space, i + 1, k) + 1;
//	if (space[i - 1][k] != 1)
//		b = getRet(ret, space, i - 1, k) + 1;
//	if (space[i][k + 1] != 1)
//		c = getRet(ret, space, i, k + 1) + 1;
//	if (space[i][k - 1] != 1)
//		d = getRet(ret, space, i, k - 1) + 1;
//
//	int tmp = min(a,min(b, min(c, d)));
//	if (tmp == a && tmp != 0xfffffff)
//		ret.push_back(make_pair(i, k - 1));
//	else if (tmp == b)
//		ret.push_back(make_pair(i - 2, k - 1));
//	else if (tmp == c)
//		ret.push_back(make_pair(i - 1, k));
//	else if (tmp == d)
//		ret.push_back(make_pair(i - 1, k - 2));
//}
//int main()
//{
//    int N;
//    int M;
//    vector<vector<int>> space;
//    while(cin >> N >> M)
//    {
//        space.resize(N + 2);
//		for (int i = 0; i < N + 2; i++)
//			space[i].resize(M + 2);
//
//		for (int i = 0; i < space.size(); i++)
//			space[i][0] = 1, space[i][space[i].size() - 1] = 1;
//		for (int i = 0; i < space[0].size(); i++)
//			space[0][i] = 1, space[space.size() - 1][i] = 1;
//
//		int tmp;
//		for (int i = 1; i < space.size() - 1; i++)
//		{
//			for (int k = 1; k < space[i].size() - 1; k++)
//			{
//				cin >> tmp;
//				space[i][k] = tmp;
//			}
//		}
//		vector<pair<int,int>> ret;
//		getRet(ret,space,1,1);
//		system("pause");
//    }
//    return 0;
//}
//class Bonus {
//public:
//    int getMost(vector<vector<int> > board) {
//        // write code here
//		for (int i = 1; i < board.size(); i++)
//		{
//			for (int k = 1; k < board[i].size(); k++)
//			{
//				board[i][k] += max(board[i - 1][k], board[i][k - 1]);
//			}
//		}
//		return board[board.size()][board[0].size()];
//    }
//};
//int main()
//{
//	int n = 10000;
//	int ret = 0;
//	while (n > 0)
//	{
//		int tmp = n;
//		while (tmp % 5 == 0)
//		{
//			ret++;
//			tmp /= 5;
//		}
//		n -= 5;
//	}
//	cout << ret << endl;
//	return 0;
//}

//int getNum(int small, int big)
//{
//	int ret = 0;
//	for (int i = 1; i < small; i++)
//	{
//		if (small % i == 0 && big % i == 0)
//			ret = i;
//	}
//	return ret;
//}
//
//int edit(string::iterator a, string::iterator b,size_t aSize,size_t bSize)
//{
//	while (aSize > 0 && bSize > 0 && *a == *b)
//		a++, b++, aSize--, bSize--;
//
//	if (aSize > 0 && bSize > 0)
//		return min(edit(a + 1, b, aSize - 1, bSize), 
//				   edit(a, b + 1, aSize, bSize - 1)) + 1;
//	else if (aSize <= 0 && bSize > 0)
//		return bSize;
//	else if (bSize <= 0 && aSize > 0)
//		return aSize;
//	else
//		return 0;
//}
//int getlength(string a, string b)
//{
//	if (a.size() == 0 || b.size() == 0)
//		return a.size() == 0 ? b.size() : a.size();
//	vector<vector<size_t>> arr(a.size() + 1, vector<size_t>(b.size() + 1, 0));
//	for (size_t i = 0; i < a.size(); i++)
//		arr[i][0] = i;
//	for (size_t i = 0; i < b.size(); i++)
//		arr[0][i] = i;
//	for (size_t i = 0; i < a.size(); i++)
//	{
//		for (size_t k = 0; k < b.size(); k++)
//		{
//			if (a[i] == b[k])
//				arr[i + 1][k + 1] = arr[i][k];
//			else
//				arr[i + 1][k + 1] = min(arr[i][k] + 1 ,min(arr[i][k + 1] + 1, arr[i + 1][k] + 1));
//		}
//	}
//	return arr[a.size() - 1][b.size() - 1];
//}
//int main()
//{
//	string a;
//	string b;
//	while (cin >> a >> b)
//	{
//		cout << getlength(a, b);
//	}
//}

//class Gift {
//public:
//    int getValue(vector<int> gifts, int n) {
//        // write code here
//		unordered_map<int,int> box;
//		for (int i = 0; i < gifts.size(); i++)
//		{
//			auto it = box.find(gifts[i]);
//			if (it == box.end())
//				box.insert(gifts[i], 1);
//			else
//				it->second++;
//		}
//		for (auto e : box)
//		{
//			if (e.second > n / 2)
//				return e.second;
//		}
//		return 0;
//    }
//};
//class Gift {
//public:
//    static int getValue(vector<int> gifts, int n) {
//		unordered_map<int,int> box;
//		for (size_t i = 0; i < gifts.size(); i++)
//		{
//			auto it = box.find(gifts[i]);
//			if (it == box.end())
//            {
//                pair<int,int> tmp(gifts[i],1);
//				box.insert(tmp);
//            }
//			else
//				it->second++;
//		}
//		for (auto e : box)
//		{
//			if (e.second > n / 2)
//				return e.first;
//		}
//		return 0;
//    }
//};
//int main()
//{
//	vector<int> v = { 1, 2, 3, 2, 2 };
//	int n = 5;
//	cout << Gift::getValue(v, n) << endl;
//
//	return 0;
//}
//int main()
//{
//	int c = 0;
//	int n = 0;
//	while (cin >> n >> c)
//	{
//		vector<int> monster;
//		monster.resize(n);
//		int tmp;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			monster.push_back(tmp);
//		}
//
//		for (int i = 0; i < monster.size(); i++)
//		{
//			if (monster[i] <= c)
//				c += monster[i];
//			else
//				c += getNum(c, monster[i]);
//		}
//		cout << c << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int t;
//	while (cin >> t)
//	{
//		while (t)
//		{
//			t--;
//			int n;
//			int k;
//			if (cin >> n >> k)
//			{
//				vector<int> left;
//				vector<int> right;
//				vector<int> mid;
//				int tmp;
//
//				for (int i = 0; i < n; i++)
//				{
//					cin >> tmp;
//					left.push_back(tmp);
//				}
//				for (int i = 0; i < n; i++)
//				{
//					cin >> tmp;
//					right.push_back(tmp);
//				}
//				while (k)
//				{
//					mid.clear();
//					for (int i = 0; i < n; i++)
//					{
//						mid.push_back(left[i]);
//						mid.push_back(right[i]);
//					}
//					left.clear();
//					right.clear();
//					for (int i = 0; i < n; i++)
//					{
//						left.push_back(mid[i]);
//						right.push_back(mid[n + i]);
//					}
//					k--;
//				}
//				if (t == 0)
//				{
//					cout << mid[0];
//					for (int i = 1; i < mid.size(); i++)
//					{
//						cout << " " << mid[i];
//					}
//					cout << endl;
//				}
//				else
//				{
//					for (int i = 0; i < mid.size(); i++)
//					{
//						cout << mid[i] << " ";
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int row = 0;
//    string act;
//    while(cin >> row >> act)
//    {
//		row--;
//		int allHead = 0;
//		int allTail = row;
//		int screenHead = 0;
//		int screenTail = row <= 3 ? row : 3;
//		int index = 0;
//
//		for (int i = 0; i < act.size(); i++)
//		{
//			if (act[i] == 'U')
//				index--;
//			else
//				index++;
//
//			if (index < screenHead)
//				screenHead--,screenTail--;
//			else if (index > screenTail)
//				screenTail++,screenHead++;
//
//			if (screenHead < 0)
//				index = row, screenHead = row <= 3 ? 0 : row - 3, screenTail = row;
//			else if (screenTail > row)
//				index = 0, screenTail = row <= 3 ? row : 3 ,screenHead = 0;
//		}
//		for (int i = screenHead; i <= screenTail; i++)
//		{
//			cout << i+1 << " ";
//		}
//		cout << endl << index+1 << endl;
//    }
//    return 0;
//}
//
//int main()
//{
//	string big;
//	string small;
//	while (cin >> big >> small)
//	{
//		if (small.size() > big.size())
//			small.swap(big);
//
//		int _max = 0;
//		int ret = 0;
//		for (int i = 0; i < small.size(); i++)
//		{
//			for (int k = 0; k < big.size(); k++)
//			{
//				if (big[k] == small[i])
//				{
//					int tmpBig = k;
//					int tmpSma = i;
//					for (; tmpBig < big.size() && tmpSma < small.size(); tmpBig++, tmpSma++)
//					{
//						if (big[tmpBig] == small[tmpSma])
//							_max++;
//						else
//							break;
//					}
//				}
//				if (_max > ret)
//					ret = _max;
//				_max = 0;
//			}
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		char c = 'x';
//		for (int i = 0; i < str.size() / 2; i++)
//		{
//			c = str[i];
//			str[i] = str[str.size() - i - 1];
//			str[str.size() - i - 1] = c;
//		}
//		cout << str << endl;
//	}
//
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    while(cin >> n)
//    {
//        if(n == 0)
//            continue;
//
//		int ret = 0;
//		ret += n / 3;
//		int drink = n / 3;
//		n = n % 3;
//
//
//
//    }
//    return 0;
//}

//class Solution {
//public:
//	int majorityElement(vector<int>& nums) {
//		unordered_map<int, int> index;
//		unordered_map<int, int>::iterator it = index.begin();
//		for (int i = 0; i < nums.size(); i++)
//		{
//			it = index.find(nums[i]);
//			if (it != index.end())
//			{
//				index[nums[i]]++;
//			}
//			else
//			{
//				index.insert(make_pair(nums[i], 1));
//			}
//		}
//		int ret = 0;
//		int max = 0;
//		for (auto e : index)
//		{
//			if (e.second > max)
//			{
//				max = e.second;
//				ret = e.first;
//			}
//		}
//		return ret;
//	}
//};
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		if (!nums.size())
//			return 0;
//
//		int m_max = nums[0];
//		for (int i = 1; i < nums.size(); i++)
//		{
//			nums[i] = max(nums[i], nums[i] + nums[i - 1]);
//			if (nums[i] > m_max)
//				m_max = nums[i];
//		}
//		return m_max;
//	}
//};
//int main()
//{
//
//	return 0;
//}
//class Solution {
//public:
//	static bool checkIfCanBreak(string s1, string s2) {
//		int first = 0;
//		int second = 0;
//		vector<int> left(26, 0);
//		vector<int> right(26, 0);
//		for (int i = 0; i < s1.size(); i++)
//		{
//			left[s1[i] - 'a']++;
//			right[s2[i] - 'a']++;
//		}
//		bool big = true;
//		bool small = true;
//
//		for (;first < 26 && second < 26;)
//		{
//			while (first < 26 && left[first] <= 0)
//				first++;
//			while (second < 26 && right[second] <= 0)
//				second++;
//
//			if (first < second)
//				big = false;
//			if (first > second)
//				small = false;
//			if (first < 26)
//				left[first]--;
//			if (second < 26)
//				right[second]--;
//
//			if (big == false && small == false)
//				return false;
//		}
//		return true;
//	}
//};
//int main()
//{
//	string str1 = "abc";
//	string str2 = "xya";
//	bool ret = Solution::checkIfCanBreak(str1, str2);
//
//	cout << ret << endl;
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(vector<int> &x, vector<int> &y)
//	{
//		if (x[0] == y[0])
//			return x[1] < y[1];
//		return x[0] < y[0];
//	}
//	static int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//		sort(intervals.begin(), intervals.end(), fun);
//		int start = 0;
//		int end = 0;
//		if (intervals.size())
//		{
//			start = intervals[0][0];
//			end = intervals[0][1];
//		}
//		int ret = 0;
//		for (int i = 1; i < intervals.size(); i++)
//		{
//			if (start == intervals[i][0])
//			{
//				ret++;
//				continue;
//			}
//			else if (end > intervals[i][1])
//			{
//				ret++;
//				continue;
//			}
//			else
//			{
//				start = intervals[i][0];
//				end = intervals[i][1];
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<vector<int>> arr = { { 1, 2 }, { 2, 3 }, { 3, 4 }, { 1, 3 } };
//
//	Solution::eraseOverlapIntervals(arr);
//
//	return 0;
//}
//class Solution {
//public:
//	static string removeDuplicateLetters(string s) {
//		vector<pair<int, char>> index;
//		index.resize(26);
//		for (int i = 0; i < index.size(); i++)
//		{
//			index[i].first = -1;
//			index[i].second = i + 'a';
//		}
//
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (index[s[i] - 'a'].first < 0)
//				index[s[i] - 'a'].first = i;
//		}
//		sort(index.begin(), index.end());
//		string ret;
//		for (int i = 0; i < index.size(); i++)
//		{
//			if (index[i].first < 0)
//				continue;
//			ret += index[i].second;
//		}
//		return ret;
//	}
//};
//int main()
//{
//	string str = "bcabc";
//	Solution::removeDuplicateLetters(str);
//
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(int x, int y)
//	{
//		return x > y;
//	}
//	static int numRescueBoats(vector<int>& people, int limit) {
//		sort(people.begin(), people.end(),fun);
//		int ret = 0;
//		volatile int len = people.size();
//		for (int i = 0; i < len; i++)
//		{
//			if (len - 1 > i && people[i] + people[len - 1] <= limit)
//			{
//				ret++;
//				len--;
//				continue;
//			}
//			ret++;
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> arr = { 3, 2, 2, 1 };
//	int n = 3;
//	Solution::numRescueBoats(arr, n);
//
//	return 0;
//}
//class Solution {
//public:
//	static int getMaxLen(vector<int>& nums) {
//		int max = 0;
//		int isNeg = 0;
//		int isPos = 0;
//		int flag = 1;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] > 0)
//			{
//				isPos++;
//				if (flag && isNeg % 2 == 0 && (isPos + isNeg) > max)
//					max = isPos + isNeg;
//			}
//			else if (nums[i] < 0)
//			{
//				isNeg++;
//				flag *= -1;
//				if (flag && isNeg % 2 == 0 && (isPos + isNeg) > max)
//					max = isPos + isNeg;
//			}
//			else
//			{
//				isNeg = 0;
//				isPos = 0;
//				flag = 1;
//			}
//		}
//		if (isPos > max)
//			return isPos;
//		return max;
//	}
//};
//int main()
//{
//	vector<int> arr = { 1, 2, 3, 5, -6, 4, 0, 10 };
//	int ret = Solution::getMaxLen(arr);
//	cout << ret << endl;
//	return 0;
//}
//class Solution {
//public:
//	static vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
//		vector<vector<int>> ret(2, vector<int>(colsum.size(), 0));
//		for (int i = 0; i < colsum.size(); i++)
//		{
//			if (colsum[i] == 2)
//			{
//				ret[0][i] = 1, ret[1][i] = 1;
//				upper--;
//				lower--;
//			}
//			else if (colsum[i] == 1)
//			{
//				if ((upper > lower) && (upper > 0))
//				{
//					upper--;
//					ret[0][i] = 1;
//				}
//				else if (lower > 0)
//				{
//					lower--;
//					ret[1][i] = 1;
//				}
//				else
//				{
//					ret.clear();
//					break;
//				}
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	int x = 2;
//	int y = 3;
//	vector<int> v = { 2, 2, 1, 1 };
//	Solution::reconstructMatrix(x, y, v);
//
//	return 0;
//}
//class Solution {
//public:
//	static string reorganizeString(string S) {
//		priority_queue<pair<int, char>> q;
//		vector<int> v(26, 0);
//		for (int i = 0; i < S.size(); i++)
//			v[S[i] - 'a']++;
//
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (v[i])
//				q.push(make_pair(v[i], (char)(i + 'a')));
//		}
//		string ret;
//		ret += q.top().second;
//		pair<int, char> t = q.top();
//		q.pop();
//
//		t.first--;
//		if (t.first > 0)
//			q.push(t);
//
//		while (q.size() > 1)
//		{
//			if (q.top().second == ret[ret.size() - 1])
//			{
//				pair<int, char> tmp = q.top();
//				q.pop();
//
//				ret += q.top().second;
//				pair<int, char> tt = q.top();
//				q.pop();
//				tt.first--;
//				if (tt.first > 0)
//					q.push(tt);
//				q.push(tmp);
//			}
//			else
//			{
//				q.top().first--;
//				ret += q.top().second;
//				if (q.top().first == 0)
//					q.pop();
//			}
//		}
//
//		if (ret[ret.size() - 1] == q.top().second)
//			return "";
//		else
//			ret += q.top().second;
//
//		if (q.top().first > 1)
//			return "";
//		return ret;
//	}
//};
//int main()
//{
//	string str = "vvvlo";
//	Solution::reorganizeString(str);
//	return 0;
//}
//class Solution {
//public:
//	static string reorganizeString(string S) {
//		vector<int> index(26, 0);
//		for (int i = 0; i < S.size(); i++)
//			index[S[i] - 'a']++;
//
//		int max = 0;
//		for (int i = 0; i < index.size(); i++)
//		{
//			if (index[max] < index[i])
//				max = i;
//		}
//		char c = (char)(max + 'a');
//
//		queue<pair<int, char>> q;
//
//		for (int i = 0; i < index.size(); i++)
//		{
//			if (index[i] > 0)
//				q.push(make_pair(index[i], (char)(i + 'a')));
//		}
//		while (true)
//		{
//			if (q.front().second == c)
//				break;
//			q.push(q.front());
//			q.pop();
//		}
//
//		string ret;
//		while (q.size() > 1)
//		{
//			ret += q.front().second;
//			pair<int, char> tmp = q.front();
//			tmp.first--;
//			q.pop();
//			if (tmp.first)
//				q.push(tmp);
//		}
//		if (ret[ret.size() - 1] == q.front().second)
//			return "";
//		else
//		{
//			ret += q.front().second;
//		}
//		if (q.front().first > 1)
//			return "";
//
//		return ret;
//	}
//};
//int main()
//{
//	string str = "vvvlo";
//	Solution::reorganizeString(str);
//	return 0;
//}
//class Solution {
//public:
//	static bool isPossible(vector<int>& nums) {
//		vector<int> index;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (index.size() <= nums[i])
//				index.resize(nums[i] + 1);
//			index[nums[i]]++;
//		}
//		int count = 0;
//		int tmp = 0;
//		for (int i = 0; i < index.size(); i++)
//		{
//			while (index[i] > 0)
//			{
//				tmp = i;
//				count = 0;
//				while (i < index.size() && index[i] > 0)
//				{
//					index[i]--;
//					i++;
//					count++;
//				}
//				i = tmp;
//				if (count < 3)
//					return false;
//			}
//		}
//		return true;
//	}
//};
//int main()
//{
//	vector<int> arr = { 1, 2, 3, 3, 4, 5 };
//	Solution::isPossible(arr);
//	return 0;
//}
//class Solution {
//public:
//	static int minDeletions(string s) {
//		vector<int> tmp;
//		tmp.resize(26);
//		for (int i = 0; i < s.size(); i++)
//			tmp[s[i] - 'a']++;
//
//		sort(tmp.begin(), tmp.end());
//		int ret = 0;
//		for (int i = 0; i < tmp.size() - 1; i++)
//		{
//			if (tmp[i] == 0)
//				continue;
//			if (tmp[i] == tmp[i + 1])
//			{
//				tmp[i]--;
//				ret++;
//				i = -1;
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	string s =  "aaabbbcc";
//	Solution::minDeletions(s);
//
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(pair<int,int> x, pair<int,int> y)
//	{
//		return x.first > y.first;
//	}
//	struct three{
//	public:
//		int val;
//		int lab;
//		int count;
//	};
//	static int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) {
//		if (values.size() == 0)
//			return 0;
//		vector<three> tmp;
//		tmp.resize(values.size());
//		for (int i = 0; i < values.size(); i++)
//		{
//			tmp[i].val = values[i];
//			tmp[i].lab = labels[i];
//		}
//
//	}
//};
//int main()
//{
//	vector<int> v1 = {5,4,3,2,1};
//	vector<int> v2 = {1,1,2,2,3};
//	int v3 = 3;
//	int v4 = 1;
//	Solution::largestValsFromLabels(v1, v2, v3, v4);
//
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(pair<int, char> &x, pair<int, char> &y)
//	{
//		return x.first > y.first;
//	}
//	static string longestDiverseString(int a, int b, int c) {
//		priority_queue<pair<int, char>> v;
//		v.push(make_pair(a, 'a'));
//		v.push(make_pair(b, 'b'));
//		v.push(make_pair(c, 'c'));
//		string ret;
//		for (;;)
//		{
//			if (v.top().second != ret[ret.size() - 1])
//			{
//
//			}
//			else
//			{
//
//			}
//
//			//if (v[0].first > 1)
//			//{
//			//	ret += v[0].second;
//			//	ret += v[0].second;
//			//	v[0].first -= 2;
//			//}
//			//else if (v[0].first > 0)
//			//{
//			//	ret += v[0].second;
//			//	v[0].second -= 1;
//			//	if (v[1].first > 0)
//			//		ret += v[1].second;
//			//	if (v[2].first > 0)
//			//		ret += v[2].second;
//			//	break;
//			//}
//			//else
//			//	break;
//			//if (v[1].first > 0)
//			//{
//			//	ret += v[1].second;
//			//	v[1].first -= 1;
//			//}
//			//else
//			//	break;
//		}
//		return ret;
//	}
//};
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 7;
//	Solution::longestDiverseString(a, b, c);
//
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(int x, int y)
//	{
//		return x > y;
//	}
//	static int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
//		vector<int> sec(nums.size(), 0);
//		vector<int> diff(nums.size(), 0);
//		//diff[0] = nums[0];
//		//for (int i = 1; i < nums.size(); i++)
//		//	diff[i] = nums[i] - nums[i - 1];
//
//		for (int i = 0; i < requests.size(); i++)
//		{
//			diff[requests[i][0]]++;
//
//			if (requests[i][1] != diff.size() - 1)
//				diff[requests[i][1] + 1]--;
//		}
//		//diff[0]++;
//		sec[0] = diff[0];
//		for (int i = 1; i < nums.size(); i++)
//			sec[i] = sec[i - 1] + diff[i];
//
//		sort(sec.begin(), sec.end(), fun);
//		sort(nums.begin(), nums.end(), fun);
//		int ret = 0;
//		for (int i = 0; i < sec.size(); i++)
//			ret += sec[i] * nums[i], ret %= 1000000007;
//
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> arr = { 1, 2, 3, 4, 5, 10 };
//	vector<vector<int>> tmp = {{ 0, 2 }, { 1, 3 }, { 1, 1 } };
//
//	Solution::maxSumRangeQuery(arr, tmp);
//
//
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(pair<int, int> x, pair<int, int> y)
//	{
//		return x.second > y.second;
//	}
//	static int minSetSize(vector<int>& arr) {
//		vector<pair<int, int>> tmp;
//		sort(arr.begin(), arr.end());
//		int k = 0;
//		tmp.push_back(make_pair(arr[0], 1));
//		for (int i = 1; i < arr.size(); i++)
//		{
//			if (arr[i] == tmp[k].first)
//				tmp[k].second++;
//			else
//				tmp.push_back(make_pair(arr[i], 1)), k++;
//		}
//		sort(tmp.begin(), tmp.end(), fun);
//
//		int ret = 0;
//		int m = 0;
//		for (m = 0; m < tmp.size(); m++)
//		{
//			ret += tmp[m].second;
//			if (ret >= arr.size() / 2)
//				break;
//		}
//		return m + 1;
//	}
//};
//int main()
//{
//	vector<int> arr = { 3, 3, 3, 3, 5, 5, 5, 2, 2, 7 };
//	Solution::minSetSize(arr);
//
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(vector<int> &x, vector<int> &y)
//	{
//		if (x[0] == y[0])
//		{
//			return x[1] > y[1];
//		}
//		return x[0] < y[0];
//	}
//	static vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//		sort(people.begin(), people.end(), fun);
//		vector<int> tmp;
//		vector<vector<int>> ret;
//		tmp.resize(people.size());
//		for (int i = 0; i < tmp.size(); i++)
//		{
//			tmp[i] = i;
//		}
//		ret.resize(people.size());
//		int k = 0;
//		for (int i = 0; i < tmp.size(); i++)
//		{
//			k = 0;
//			int m = 0;
//			for (m = 0; m < tmp.size(); m++)
//			{
//				if (k == people[i][1])
//					break;
//				if (tmp[m] >= 0)
//					k++;
//			}
//			cout << k << endl;
//			int count = 0;
//			for (int v = 0; v < tmp.size(); v++)
//			{
//				if (tmp[v] < 0)
//					continue;
//				if (count == k)
//				{
//					ret[tmp[v]] = people[i];
//					tmp[v] = -1;
//					break;
//				}
//				count++;
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<vector<int>> arr = { { 7, 0 }, { 4, 4 }, { 7, 1 }, { 5, 0 }, { 6, 1 }, { 5, 2 } };
//	Solution::reconstructQueue(arr);
//	return 0;
//}
//class Solution {
//public:
//	static int minCost(string s, vector<int>& cost) {
//		int flag = 0;
//		int ret = 0;
//		int tmp = 0;
//		for (int i = 0; i < s.size() - 1; i++)
//		{
//			if (s[i] == s[i + 1])
//			{
//				tmp = cost[flag] > cost[i] ? i : flag;
//				ret += cost[tmp];
//				flag = cost[flag] > cost[i] ? flag : i;
//			}
//			else
//			{
//				flag = i + 1;
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> arr = {	3,5,10,7,5,3,5,5,4,8,1};
//	string s = "aaabbbabbbb";
//	//vector<int> arr = { 1, 2, 3, 4, 5 };
//	//string s = "abaac";
//
//	Solution::minCost(s, arr);
//	return 0;
//}
//class Solution {
//public:
//	static int largestSumAfterKNegations(vector<int>& A, int k) {
//		int ret = 0;
//		sort(A.begin(), A.end());
//		for (int i = 0; i < A.size(); i++)
//		{
//			if (A[i] > 0 && k > 0)
//			{
//				if (i > 0 && A[i - 1] < A[i])
//				{
//					while (k > 0)
//					{
//						k--;
//						A[i - 1] = -A[i - 1];
//					}
//					break;
//				}
//				while (k > 0)
//				{
//					k--;
//					A[i] = -A[i];
//				}
//			}
//			if (A[i] < 0 && k > 0)
//			{
//				A[i] = -A[i];
//				k--;
//			}
//			while (A[i] == 0 && k > 0)
//				k--;
//		}
//		for (int i = 0; i < A.size(); i++)
//			ret += A[i];
//
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> arr = {-8,3,-5,-3,-5,-2};
//	int k = 6;
//	Solution::largestSumAfterKNegations(arr, k);
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(int x, int y)
//	{
//		return x > y;
//	}
//	static int lastStoneWeight(vector<int>& stones) {
//		if (stones.size() == 0)
//			return 0;
//		if (stones.size() < 2)
//			return stones[0];
//
//		int tmp = 0;
//		sort(stones.begin(), stones.end(), fun);
//		while (true)
//		{
//			if (stones[0] > 0 && stones[1] > 0)
//			{
//				tmp = stones[0];
//				stones[0] = stones[0] - stones[1];
//				stones[1] = stones[1] - tmp;
//			}
//			else
//				break;
//			sort(stones.begin(), stones.end(), fun);
//		}
//		if (stones[0] <= 0)
//			return 0;
//		return stones[1];
//	}
//};
//int main()
//{
//	vector<int> arr = { 2, 7, 4, 1, 8, 1 };
//	Solution::lastStoneWeight(arr);
//	return 0;
//}
//class Solution {
//public:
//	static bool isDeep(vector<int>& arr, int index)
//	{
//		if (index > 0 && index < arr.size() - 1)
//		{
//			if (arr[index] <= arr[index - 1] && arr[index] <= arr[index + 1])
//				return true;
//		}
//		else if (index == 0)
//		{
//			if (arr[index] <= arr[index + 1])
//				return true;
//		}
//		else if (index == arr.size() - 1)
//		{
//			return false;
//		}
//		return false;
//	}
//	static bool isHigh(vector<int>& arr, int index)
//	{
//		if (index > 0 && index < arr.size() - 1)
//		{
//			if (arr[index] >= arr[index - 1] && arr[index] >= arr[index + 1])
//				return true;
//		}
//		else if (index == 0)
//		{
//			return false;
//		}
//		else if (index == arr.size() - 1)
//		{
//			if (arr[index] >= arr[index - 1])
//				return true;
//		}
//		return false;
//	}
//	static int maxProfit(vector<int>& prices) {
//		if (prices.size() < 2)
//			return 0;
//		int buyIn = -1;
//		int ret = 0;
//		for (int i = 0; i < prices.size(); i++)
//		{
//			if (buyIn == -1 && isDeep(prices, i))
//			{
//				buyIn = prices[i];
//			}
//			if (buyIn >= 0 && isHigh(prices, i))
//			{
//				ret += prices[i] - buyIn;
//				buyIn = -1;
//			}
//		}
//
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> arr = { 1, 9, 6, 9, 1, 7, 1, 1, 5, 9, 9, 9 };
//	int ret = Solution::maxProfit(arr);
//	cout << ret << endl;
//	return 0;
//}
//class Solution {
//public:
//	static bool lemonadeChange(vector<int>& bills) {
//		vector<int> money;
//		money.resize(3);
//		for (int i = 0; i < bills.size(); i++)
//		{
//			if (bills[i] == 5)
//				money[0]++;
//			else if (bills[i] == 10)
//				money[0]--, money[1]++;
//			else if (bills[i] == 20)
//			{
//				if (money[1] <= 0 && money[0] >= 2)
//					money[0] -= 3;
//				else
//					money[0]--, money[1]--;
//				money[2]++;
//			}
//			if (money[0] < 0 || money[1] < 0 || money[2] < 0)
//				return false;
//		}
//		return true;
//	}
//};
//int main()
//{
//	vector<int> arr = { 5, 5, 20, 5, 5, 10, 5, 10, 5, 20 };
//	bool ret = Solution::lemonadeChange(arr);
//
//	system("pause");
//	return 0;
//}
//class Solution {
//public:
//	static int candy(vector<int>& ratings) {
//		int ret = 0;
//		vector<int> cd;
//
//		cd.resize(ratings.size());
//		cd[0] = 1;
//		for (int i = 1; i < ratings.size(); i++)
//		{
//			if (ratings[i] > ratings[i - 1])
//				cd[i] = cd[i - 1] + 1;
//			else
//				cd[i] = 1;
//		}
//		for (int i = ratings.size() - 2; i >= 0; i--)
//		{
//			if (ratings[i] > ratings[i + 1] && i != 0 && ratings[i] <= ratings[i - 1])
//				cd[i] = cd[i + 1] + 1;
//			else if (ratings[i] > ratings[i + 1] && i == 0)
//			{
//				cd[i] = cd[i + 1] + 1;
//			}
//		}
//		for (int i = 0; i < cd.size(); i++)
//		{
//			ret += cd[i];
//		}
//		return ret;
//	}
//};
//int main()
//{
//	vector<int> arr = { 1, 3, 2, 2, 1 };
//	Solution::candy(arr);
//	return 0;
//}
//class backTracking{
//public:
//	static bool is_ok(vector<int> &queen,int row)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			if (queen[row] == queen[i] || row - queen[row] == i - queen[i] || queen[row] + row == queen[i] + i)
//				return false;
//		}
//		return true;
//	}
//	static void eightQueen(vector<int> &queen,vector<vector<int>> &ret,int n,int row = 0)
//	{
//		if (row == n)
//			ret.push_back(queen);
//			
//		for (int i = 0; i < n; i++)
//		{
//			queen[row] = i;
//			if (is_ok(queen,row))
//				eightQueen(queen, ret, n, row + 1);
//		}
//	}
//	static void queenPrint(vector<vector<int>> &src)
//	{
//		for (int i = 0; i < src.size(); i++)
//		{
//			if (i == 5)
//				system("pause");
//			cout << "########################################" << endl;
//			cout << "                  " << i << "              " << endl;
//			for (int k = 0; k < src[i].size() - 1; k++)
//			{
//				for (int o = 0; o < src[i].size() - 1; o++)
//				{
//					cout << "----";
//				}
//				cout << endl;
//				int m = 0;
//				for (m = 0; m < src[i][k]; m++)
//					cout << "|   ";
//				cout << "| * ";
//				m++;
//				while (m < src[i].size() - 1)
//				{
//					cout << "|   ";
//					m++;
//				}
//				cout << "|";
//				cout << endl;
//
//			}
//
//			for (int o = 0; o < src[i].size() - 1; o++)
//			{
//				cout << "----";
//			}
//			cout << endl;
//			cout << "########################################" << endl;
//
//			cout << endl << endl;
//		}
//	}
//};
//
//int main()
//{
//	vector<vector<int>> ret;
//	vector<int> queen;
//	int n = 8;
//	cout << "input val for n #: ";
//	cin >> n;
//
//	queen.resize(n + 1);
//	backTracking::eightQueen(queen, ret, n);
//
//	if (ret.size() > 0)
//	{
//		backTracking::queenPrint(ret);
//		system("pause");
//	}
//
//	vector<int> ret;
//	return 0;
//
//}
//
//class Sort{
//public:
//
//private:
//	static void swap(int *i,int *j)
//	{
//		int k = *i;
//		*i = *j;
//		*j = k;
//	}
//	static void upBigAdjust(vector<int> &src,int index)
//	{
//		while (src[index] > src[(index - 1) / 2])
//		{
//			swap(&src[index], &src[(index - 1) / 2]);
//			index = (index - 1) / 2;
//		}
//	}
//	static void upMinAdjust(vector<int> &src,int index)
//	{
//		while (src[index] < src[(index - 1) / 2])
//		{
//			swap(&src[index], &src[(index - 1) / 2]);
//			index = (index - 1) / 2;
//		}
//	}
//	static void downBigAdjust(vector<int> &src, int index,int count)
//	{
//		//index++;
//		int tmp = index;
//		for (;;)
//		{
//			index = tmp + 1;
//			if (index * 2 < count)
//			{
//				if (src[index * 2 - 1] > src[index * 2])
//					tmp = index * 2 - 1;
//				else
//					tmp = index * 2;
//
//				if (src[index - 1] < src[tmp])
//					swap(&src[index - 1], &src[tmp]);
//				else
//					break;
//			}
//			else if (index * 2 - 1 < count)
//			{
//				tmp = index * 2 - 1;
//				if (src[index - 1] < src[tmp])
//					swap(&src[index - 1], &src[tmp]);
//				else
//					break;
//			}
//			else
//				break;
//		}
//	}
//	static void downMinAdjust(vector<int> &src, int index,int count)
//	{
//		//index++;
//		int tmp = index;
//		for (;;)
//		{
//			index = tmp + 1;
//			if (index * 2 < count)
//			{
//				if (src[index * 2 - 1] < src[index * 2])
//					tmp = index * 2 - 1;
//				else
//					tmp = index * 2;
//
//				if (src[index - 1] > src[tmp])
//					swap(&src[index - 1], &src[tmp]);
//				else
//					break;
//			}
//			else if (index * 2 - 1 < count)
//			{
//				tmp = index * 2 - 1;
//				if (src[index - 1] > src[tmp])
//					swap(&src[index - 1], &src[tmp]);
//				else
//					break;
//			}
//			else
//				break;
//		}
//	}
//	static void createBigHeap(vector<int> &src)
//	{
//		for (int i = 0; i < src.size(); i++)
//			upBigAdjust(src, i);
//	}
//	static void createMinHeap(vector<int> &src)
//	{
//		for (int i = 0; i < src.size(); i++)
//			upMinAdjust(src, i);
//	}
//	static int getQsortMid(vector<int> &src,int left,int right)
//	{
//		int mid = left;
//		int key = right;
//		for (;key != mid;)
//		{
//			if (src[mid] > src[key])
//			{
//				if (mid < key)
//				{
//					swap(&src[mid], &src[key]);
//					swap(&mid, &key);
//					key++;
//				}
//				else
//					key++;
//			}
//			else
//			{
//				if (mid < key)
//					key--;
//				else
//				{
//					swap(&src[mid], &src[key]);
//					swap(&mid, &key);
//					key--;
//				}
//			}
//		}
//		return mid;
//	}
//public:
//
//	static void shellSort(vector<int> &src)
//	{
//		int gap = src.size() / 2;
//
//		while (gap)
//		{
//			for (int i = 0;i + gap < src.size();i++)
//			{
//				if (src[i] > src[i + gap])
//					swap(&src[i], &src[i + gap]);
//			}
//			gap /= 2;
//		}
//	}
//	static void selectSort(vector<int> &src)
//	{
//		for (int i = 0; i < src.size(); i++)
//		{
//			int tmp = i;
//			for (int j = i; j < src.size(); j++)
//			{
//				if (src[tmp] > src[j])
//					tmp = j;
//			}
//			swap(&src[tmp], &src[i]);
//		}
//	}
//	static void heapSort(vector<int> &src,int flag)
//	{
//		int count = src.size() - 1;
//		if (flag == 1)//big to min
//		{
//			createMinHeap(src);
//			for (int i = 0;i <= count;i++)
//			{
//				swap(&src[0], &src[count - i]);
//				downMinAdjust(src, 0, count - i);
//			}
//		}
//		else if (flag == 0)//min to big
//		{
//			createBigHeap(src);
//			for (int i = 0;i <= count;i++)
//			{
//				swap(&src[0], &src[count - i]);
//				downBigAdjust(src, 0, count - i);
//			}
//		}
//	}
//	static void bubbleSort(vector<int> &src)
//	{
//		for (int i = 0; i < src.size(); i++)
//		{
//			for (int j = 1; j < src.size() - i; j++)
//			{
//				if (src[j] > src[j - 1])
//					swap(&src[j], &src[j - 1]);
//			}
//		}
//	}
//	static void quickSort(vector<int> &src,int left,int right)
//	{
//		int mid;
//
//		if (left < right)
//		{
//			mid = getQsortMid(src, left, right);
//			quickSort(src, left, mid - 1);
//			quickSort(src, mid + 1, right);
//		}
//	}
//	static void mergeSort(vector<int> &src,int len)
//	{
//		vector<int> *a = &src;
//		vector<int> *tmp = new vector<int>(src);
//		int seg = 0;
//		int start = 0;
//		
//		for (seg = 1; seg < len; seg += seg)
//		{
//			for (start = 0; start < len; start += 2 * seg)
//			{
//				int low = start;
//				int mid = min(start + seg, len);
//				int high = min(start + 2 * seg, len);
//				int start1 = low;
//				int end1 = mid;
//				int start2 = mid;
//				int end2 = high;
//				int k = low;
//				while (start1 < end1 && start2 < end2)
//					(*tmp)[k++] = (*a)[start1] < (*a)[start2] ? (*a)[start1++] : (*a)[start2++];
//				while (start1 < end1)
//					(*tmp)[k++] = (*a)[start1++];
//				while (start2 < end2)
//					(*tmp)[k++] = (*a)[start2++];
//			}
//				vector<int> *temp = a;
//				a = tmp;
//				tmp = temp;
//		}
//		if (&src != a)
//		{
//			src.swap(*tmp);
//		}
//		free(tmp);
//	}
//
//	static void countingSort(vector<int> &src)
//	{
//		if (src.size() == 0)
//			return;
//		int max = src[0];
//		int min = src[0];
//		for (int i = 0; i < src.size(); ++i)
//		{
//			if (src[i] > max)
//				max = src[i];
//			if (src[i] < min)
//				min = src[i];
//		}
//		int count = max - min + 1;
//		vector<int> arr;
//		arr.resize(count);
//		for (int i = 0; i < src.size(); ++i)
//		{
//			arr[src[i] - min]++;
//		}
//		int j = 0;
//		for (int i = 0; i < arr.size(); ++i)
//		{
//			while (arr[i] > 0)
//			{
//				src[j] = i + min;
//				++j;
//				--arr[i];
//			}
//		}
//	}
//	static void bucketSort(vector<int> &src)
//	{
//
//	}
//
//};
//class Search{
//public:
//	static int binarySearch(vector<int> &src,int des)
//	{
//		int low = 0;
//		int high = src.size() - 1;
//		int mid;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//			if (src[mid] == des)
//				return mid;
//			else if (src[mid] < des)
//				low = mid + 1;
//			else
//				high = mid - 1;
//		}
//		return -1;
//	}
//	
//
//};
//int main()
//{
//	vector<int> arr = { 9, 1, 2, 5, 7, 4, 8, 6, 3, 5 };
//
//	//Sort::quickSort(arr, 0, arr.size() - 1);
//	//Sort::mergeSort(arr, arr.size());
//	//merge_sort(arr, 10);
//	Sort::countingSort(arr);
//
//	int ret = Search::binarySearch(arr, 5);
//
//	cout << ret + 1 << endl;
//
//	return 0;
//}

//class Solution {
//public:
//	static vector<int> inorderTraversal(TreeNode* root){
//		TreeNode *head = root;
//		vector<int> ret;
//		stack<TreeNode *> st;
//		if (!root)
//		{
//			return ret;
//		}
//
//		st.push(head);
//
//		while (st.size())
//		{
//			if (head->left)
//			{
//				head = head->left;
//				st.push(head);
//			}
//			else if (st.size())
//			{
//				while (st.size())
//				{
//					head = st.top();
//					st.pop();
//					ret.push_back(head->val);
//					if (head->right)
//					{
//						st.push(head->right);
//						head = head->right;
//						break;
//					}
//				}
//			}
//			else
//			{
//				break;
//			}
//		}
//		return ret;
//	}
//
//	static vector<int> preorderTraversal(TreeNode* root) {
//
//		TreeNode *head = root;
//		vector<int> ret;
//		if (!head)
//		{
//			return ret;
//		}
//		stack<TreeNode*> st;
//		do{
//			ret.push_back(head->val);
//			if (head->right)
//			{
//				st.push(head->right);
//			}
//
//			if (head->left)
//			{
//				head = head->left;
//			}
//			else if (st.size())
//			{
//				head = st.top();
//				st.pop();
//			}
//			else
//			{
//				break;
//			}
//		} while (true);
//		
//
//		return ret;
//	}
//
//	static vector<int> post(TreeNode *root)
//	{
//		vector<int> ret;
//		TreeNode *head = root;
//		stack<TreeNode *> st;
//		stack<bool> flag;
//
//		st.push(head);
//		flag.push(false);
//
//		while (true)
//		{
//			if (head->left && !flag.top())
//			{
//				st.push(head->left);
//				flag.push(false);
//				head = head->left;
//			}
//			else if (st.size())
//			{
//				while (flag.size() && flag.top())
//				{
//					ret.push_back(st.top()->val);
//					st.pop();
//					flag.pop();
//				}
//				if (flag.size() == 0)
//					break;
//
//				head = st.top();
//				flag.pop();
//				flag.push(true);
//				if (head->right)
//				{
//					head = head->right;
//					st.push(head);
//					flag.push(false);
//				}
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		return ret;
//	}
//	static bool fun(TreeNode *left, TreeNode *right)
//	{
//		if (left == nullptr && right == nullptr)
//			return true;
//		else if (left == nullptr || right == nullptr)
//			return false;
//
//		if (left->val != right->val)
//			return false;
//
//		bool ret1 = false;
//		bool ret2 = false;
//
//		if (left->left && right->left)
//		{
//			ret1 = fun(left->left, right->left);
//		}
//		else if (left->left || right->left)
//		{
//			ret1 = false;
//		}
//		else
//		{
//			ret1 = true;
//		}
//
//		if (left->right && right->right)
//		{
//			ret2 = fun(left->right, right->right);
//		}
//		else if (left->right || right->right)
//		{
//			ret2 = false;
//		}
//		else
//		{
//			ret2 = true;
//		}
//
//		if (ret1 == false || ret2 == false)
//			return false;
//
//
//		return true;
//	}
//	static bool isSameTree(TreeNode* p, TreeNode* q)
//	{
//		TreeNode *left = p;
//		TreeNode *right = q;
//		bool ret = false;
//
//		ret = fun(left, right);
//		return ret;
//	}
//	bool isSubtree(TreeNode* s, TreeNode* t)
//	{
//		TreeNode* father = s;
//		TreeNode* child = t;
//
//		stack<TreeNode *> f;
//		stack<TreeNode *> c;
//		bool ret = false;
//
//		while (true)
//		{
//			if (father == nullptr)
//			{
//				father = f.top();
//				f.pop();
//				while (f.size() && !father->right)
//				{
//					father = f.top();
//					f.pop();
//				}
//				if (f.size() == 0 && father == nullptr)
//				{
//					ret = false;
//					break;
//				}
//			}
//			if (father->val == child->val)
//			{
//				//do judge
//			}
//			f.push(father);
//			father = father->left;
//			
//		}
//		return ret;
//
//	}
//	static int maxDepth(TreeNode* root)
//	{
//		if (!root)
//			return 0;
//		int dep = 1;
//		int max_dep = 1;
//		stack<TreeNode *> st;
//		TreeNode *head = root;
//		st.push(head);
//		
//		while (true)
//		{
//			if (head->left)
//			{
//				st.push(head->left);
//				head = head->left;
//				dep++;
//				if (dep > max_dep)
//					max_dep = dep;
//			}
//			else if (st.size())
//			{
//				while (!head->right)
//				{
//					head = st.top();
//					st.pop();
//					dep--;
//				}
//				if (head->right)
//				{
//					head = head->right;
//					dep++;
//					st.push(head);
//				}
//			}
//			else
//				break;
//		}
//
//		return max_dep;
//	}
//	static bool isSymmetric(TreeNode* root) {
//		queue<TreeNode*> q;
//		vector<TreeNode *> count;
//		TreeNode *head = root;
//		q.push(head);
//		while (q.size())
//		{
//			head = q.front();
//			q.pop();
//			count.push_back(head);
//
//			if (head)
//			{
//				q.push(head->left);
//				q.push(head->right);
//			}
//		}
//
//		/////////////////
//		int i = 0;
//		int j = 0;
//		for (i = 2, j = 1; j < count.size(); j = i + j, i *= 2)
//		{
//			if (count.size() < i + j)
//			{
//				return false;
//			}
//			int n = 0;
//			int k = 0;
//			for (n = 1; n <= i - 1;n++)
//			{
//				if (count[j + n - 1] == NULL && count[i + j - n] == NULL)
//					continue;
//				if (count[j + n - 1] && count[i + j - n])
//				{
//					if (count[j + n - 1]->val != count[i + j - n]->val)
//						return false;
//				}
//				else
//					return false;
//			}
//		}
//		return true;
//	}
//
//};

//int main()
//{
//	TreeNode *p1 = new TreeNode(1);
//	TreeNode *p2 = new TreeNode(2);
//	TreeNode *p3 = new TreeNode(3);
//
//	p1->left = p2;
//	p1->right = p3;
//
//
//	bool ret = Solution::isSymmetric(p1);
//
//	return 0;
//}
//int main()
//{
//	TreeNode *p1 = new TreeNode(1);
//	TreeNode *p2 = new TreeNode(2);
//	TreeNode *p3 = new TreeNode(2);
//	TreeNode *p4 = new TreeNode(3);
//	TreeNode *p5 = new TreeNode(4);
//	TreeNode *p6 = new TreeNode(4);
//	TreeNode *p7 = new TreeNode(3);
//
//	
//	p1->left = p2;
//	p1->right = p3;
//
//	p2->left = p4;
//	p2->right = p5;
//	p3->left = p6;
//	p3->right = p7;
//
//	bool ret = Solution::isSymmetric(p1);
//
//	return 0;
//}
//int main()
//{
//	TreeNode *t1 = new TreeNode(1);
//	TreeNode *t2 = new TreeNode(2);
//	TreeNode *t3 = new TreeNode(3);
//
//	t1->right = t2;
//	t2->left = t3;
//
//	//vector<int> ret = Solution::preorderTraversal(t1);
//	//vector<int> ret = Solution::inorderTraversal(t1);
//
//	//vector<int> ret = Solution::post(t1);
//
//	int dep = Solution::maxDepth(t1);
//
//
//	return 0;
//}

//int main()
//{
//	TreeNode *p1 = new TreeNode (0);
//	TreeNode *p2 = new TreeNode (-4);
//	TreeNode *p3 = new TreeNode (0);
//	TreeNode *p4 = new TreeNode (-5);
//
//	p1->left = p2;
//	p3->left = p4;
//
//	bool ret = Solution::isSameTree(p1, p3);
//
//	return 0;
//}

//TreeNode * createBinTree(vector<int> base)
//{
//
//}
//int main()
//{
//	TreeNode *t1 = new TreeNode(1);
//	TreeNode *t2 = new TreeNode(2);
//	TreeNode *t3 = new TreeNode(3);
//
//	t1->right = t2;
//	t2->left = t3;
//
//	//vector<int> ret = Solution::preorderTraversal(t1);
//	//vector<int> ret = Solution::inorderTraversal(t1);
//
//	vector<int> ret = Solution::post(t1);
//
//
//	return 0;
//}
//class MyStack {
//public:
//	/** Initialize your data structure here. */
//	MyStack() {
//	}
//
//	/** Push element x onto stack. */
//	void push(int x) {
//		m_top = x;
//		prev.push(x);
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {
//		if (prev.size() > 0)
//		{
//			for (int i = 0; i < prev.size() - 2; i++)
//			{
//				last.push(prev.front());
//				prev.pop();
//			}
//			if (prev.size() > 1)
//			{
//				m_top = prev.front();
//				prev.pop();
//				int ret = prev.front();
//				prev.pop();
//				return ret;
//			}
//			else
//			{
//				int ret = prev.front();
//				prev.pop();
//				return ret;
//			}
//		}
//		else
//		{
//			for (int i = 0; i < last.size() - 2; i++)
//			{
//				prev.push(last.front());
//				last.pop();
//			}
//			if (last.size() > 1)
//			{
//				m_top = last.front();
//				last.pop();
//				int ret = last.front();
//				last.pop();
//				return ret;
//			}
//			else
//			{
//				int ret = last.front();
//				last.pop();
//				return ret;
//
//			}
//		}
//	}
//
//	/** Get the top element. */
//	int top() {
//		return m_top;
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		if (prev.size() == 0 && last.size() == 0)
//			return true;
//		else
//			return false;
//	}
//private:
//	int m_top;
//	queue<int> prev;
//	queue<int> last;
//};
//
//class Solution {
//public:
//	bool isValid(string s) {
//		if (s.size() == 0)
//			return true;
//
//		stack<char> st;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//				st.push(s[i]);
//			else if (st.size() == 0)
//				return false;
//			else if (st.top() == '(' && s[i] != ')')
//				return false;
//			else if (st.top() == '[' && s[i] != ']')
//				return false;
//			else if (st.top() == '{' && s[i] != '}')
//				return false;
//			else
//				st.pop();
//		}
//		if (st.size() == 0)
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}

//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//class Node {
//public:
//	int val;
//	Node* next;
//	Node* random;
//
//	Node(int _val) {
//		val = _val;
//		next = NULL;
//		random = NULL;
//	}
//};
//
//class Solution {
//public:
//	static Node* copyRandomList(Node* head) {
//		if (!head)
//			return NULL;
//
//		unordered_map<Node*, Node*> mp;
//		Node *p = head;
//		Node *prev = new Node(p->val);
//		if (p)
//		{
//			mp.insert(make_pair(p, prev));
//		}
//
//		Node *ret = prev;
//		p = p->next;
//
//		while (p)
//		{
//			prev->next = new Node(p->val);
//			mp.insert(make_pair(p, prev->next));
//
//			prev = prev->next;
//			p = p->next;
//		}
//
//		prev = ret;
//		p = head;
//
//		while (prev)
//		{
//			if (p->random)
//			{
//				prev->random = mp[p->random];
//			}
//			else
//			{
//				prev->random = NULL;
//			}
//			prev = prev->next;
//			p = p->next;
//		}
//
//		return ret;
//	}
//};
//
//int main()
//{
//
//
//	Node * n1 = new Node(7);
//	Node * n2 = new Node(13);
//	Node * n3 = new Node(11);
//	Node * n4 = new Node(10);
//	Node * n5 = new Node(1);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = NULL;
//
//	n1->random = NULL;
//	n2->random = n1;
//	n3->random = n5;
//	n4->random = n3;
//	n5->random = n1;
//
//	Node *ret = Solution::copyRandomList(n1);
//
//	return 0;
//}
//
//int main()
//{
//	ListNode L1(3);
//	ListNode L2(2);
//	ListNode L3(0);
//	ListNode L4(-4);
//	ListNode R1(3);
//	ListNode R2(4);
//	ListNode R3(4);
//	ListNode R4(5);
//
//	//L1.next = &L2;
//	//L2.next = &L3;
//
//	//R1.next = &R2;
//	//R2.next = &R3;
//
//	//ListNode * ret = Solution::mergeTwoLists(&L1,&R1);
//	//R3.next = &R2;
//	//R2.next = &L1;
//	//L1.next = &L3;
//	//L3.next = &L2;
//	//L2.next = &R1;
//	//Partition::partition(&R3, 3);
//
//	L1.next = &L2;
//	L2.next = &L3;
//	L3.next = &L4;
//	L4.next = &L2;
//
//	//Solution::detectCycle(&L1);
//	
//	system("pause");
//	return 0;
//}

//class Solution {
//public:
//	Node* copyRandomList(Node* head) {
//		if (!head)
//			return NULL;
//		Node *p = head;
//		vecotr<Node*> vet;
//		Node *prev = new Node(p->val);
//		vet.push_back(p);
//		Node *ret = prev;
//
//		p = p->next;
//
//		while (p)
//		{
//			prev->next = new Node(p->val);
//			prev = prev->next;
//			vet.push_back(prev);
//			p = p->next;
//		}
//		prev = ret;
//		p = head;
//		while (p)
//		{
//			prev->random = vet[]
//		}
//	}
//};
//class Partition {
//public:
//	static ListNode* partition(ListNode* pHead, int x) {
//		vector<ListNode*> prev;
//		vector<ListNode*> last;
//		while (pHead)
//		{
//			if (pHead->val < x)
//			{
//				prev.push_back(pHead);
//			}
//			else
//			{
//				last.push_back(pHead);
//			}
//			pHead = pHead->next;
//		}
//
//		for (int i = 0; i < prev.size() - 1; i++)
//		{
//			prev[i]->next = prev[i + 1];
//		}
//		if (last.size() > 0)
//		{
//			prev[prev.size() - 1]->next = last[0];
//		}
//		else
//		{
//			prev[prev.size() - 1]->next = nullptr;
//		}
//
//		for (int i = 0; i < last.size() - 1; i++)
//		{
//			last[i]->next = last[i + 1];
//		}
//		last[last.size() - 1]->next = nullptr;
//
//		if (prev[0] || last[0])
//			return prev[0] ? prev[0] : last[0];
//		else
//			return nullptr;
//	}
//};
//class Solution {
//public:
//	static ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode *left = l1;
//		ListNode *right = l2;
//		ListNode *tmp = nullptr;
//		ListNode *ret = nullptr;
//		if (!left && right)
//			return right;
//		else if (right && !left)
//			return left;
//		else if (!right && !left)
//			return nullptr;
//
//		if (left->val < right->val)
//		{
//			ret = left;
//			left = left->next;
//		}
//		else
//		{
//			ret = right;
//			right = right->next;
//		}
//		tmp = ret;
//
//		while (left && right)
//		{
//			if (left->val < right->val)
//			{
//				tmp->next = left;
//				left = left->next;
//			}
//			else
//			{
//				tmp->next = right;
//				right = right->next;
//			}
//			
//			tmp = tmp->next;
//		}
//		if (left)
//		{
//			tmp->next = left;
//		}
//		else
//		{
//			tmp->next = right;
//		}
//		return ret;
//	}
//};

//class Solution {
//public:
//	static ListNode* deleteDuplication(ListNode* pHead)
//	{
//		ListNode *head = pHead;
//		int tmp;
//		ListNode *ret = nullptr;
//		ListNode *realRet = nullptr;
//		
//
//		if (!head)
//			return nullptr;
//
//		tmp = head->val;
//		while (head)
//		{
//			if (head->next && tmp != head->val && head->val != head->next->val)
//			{
//				ret = head;
//				realRet = ret;
//				tmp = head->val;
//				break;
//			}
//			head = head->next;
//		}
//		head = head->next;
//		while (head)
//		{
//			if (head->next && tmp != head->val && head->val != head->next->val)
//			{
//				ret->next = head;
//				ret = ret->next;
//				tmp = head->val;
//			}
//			if (head->next == nullptr && head->val != tmp)
//			{
//				ret->next = head;
//			}
//			head = head->next;
//		}
//		return realRet;
//	}
//};
//class Solution {
//public:
//	static ListNode *detectCycle(ListNode *head) {
//		if (!head)
//			return NULL;
//
//		ListNode * fast = head;
//		ListNode * slow = head;
//
//		if (fast->next == fast)
//			return fast;
//		if (fast->next == NULL)
//			return NULL;
//
//		bool key = false;
//
//		while (fast && fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (fast == slow)
//			{
//				key = true;
//				break;
//			}
//		}
//		if (!key)
//			return NULL;
//
//
//		ListNode *tmp = fast;
//		tmp = tmp->next;
//		int count = 1;
//		while (tmp != fast)
//		{
//			count++;
//			tmp = tmp->next;
//		}
//		ListNode *p = head;
//		for (int i = 0; i < count; i++)
//		{
//			p = p->next;
//		}
//		ListNode *ret = head;
//		while (p != ret)
//		{
//			ret = ret->next;
//			p = p->next;
//		}
//		return ret;
//	}
//};
//int main()
//{
//	
//	struct ListNode {
//	    int val;
//	    ListNode *next;
//	    ListNode(int x) : val(x), next(nullptr) {}
//	};
//	
//	class Solution {
//	public:
//		ListNode* removeElements(ListNode* head, int val) {
//			ListNode *left = head;
//			ListNode *right;
//			while (left->val == val)
//			{
//				left = left->next;
//			}
//			right = left;
//			while (left->next != nullptr)
//			{
//				if (left->next && left->next->val == val)
//				{
//					left->next = left->next->next;
//				}
//				left = left->next;
//			}
//			return right;
//		}
//	};
//	return 0;
//}
//int main()
//{
//	FILE * fp = fopen("hello.txt", "r+");
//
//
//	fclose(fp);
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		char *arr[20] = { 0 };
//		string tmp[20];
//		string str;
//		cout << "get cin >> " << endl;
//		getline(cin, str);
//		size_t flag = 0;
//		int count = 0;
//
//
//		// 转化
//
//		while (flag < str.size())
//		{
//			if (str.find(' ', flag) != string::npos)
//			{
//				tmp[count] = str.substr(flag, str.find(' ', flag) - flag);
//				arr[count] = const_cast<char*>(tmp[count].c_str());
//			}
//			else
//			{
//				tmp[count] = str.substr(flag, str.size() - flag);
//				arr[count] = const_cast<char *>(tmp[count].c_str());
//				break;
//			}
//			flag = str.find(' ', flag) + 1;
//			count++;
//		}
//		//创建子进程
//
//		pid_t id = fork();
//		if (id < 0)
//		{
//			cout << "fork error" << endl;
//			exit(1);
//		}
//		else if (id == 0)
//		{
//			int ret = execvp(arr[0], arr);
//			if (ret < 0)
//			{
//				cout << "exec fun error" << endl;
//				return 2;
//			}
//
//		}
//		else
//		{
//			int status;
//			waitpid(id, &status, 0);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		int count = 0;
//		char env[20] = { 0 };
//		char *e[20] = { 0 };
//		string str;
//		cout << "my_shell #: ";
//
//
//		getline(cin, str);
//		size_t flag = 0;
//		//读取字符串    
//		cout << str.size() << endl;
//		while (flag < str.size())
//		{
//			if (str.find(' ', flag) == string::npos)
//			{
//				env[count] = *(str.substr(flag).c_str());
//				break;
//			}
//			else
//			{
//				env[count] = *(str.substr(flag, str.find(' ', flag) - flag).c_str());
//			}
//			flag = str.find(' ', flag);
//			flag += 1;
//			cout << flag << endl;
//			cout << count << endl;
//			count++;
//		}
//		cout << "do cin ok" << endl;
//
//		//填充    
//		count = 0;
//		while (env[count])
//		{
//			e[count] = &(env[count]);
//			cout << e[count] << endl;
//			count++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	string str = "Helloworld";
//	size_t pos = str.find('H',2);
//	cout << pos << endl;
//	return 0;
//}
//class interface_cla
//{
//public:
//	virtual void fun() = 0
//	{}
//	virtual void fun(int i) = 0
//	{}
//};
//class A : public interface_cla
//{
//public:
//	virtual void fun()
//	{
//		cout << "this is A fun" << endl;
//	}
//	virtual void fun(int i);
//	//virtual void fun(int i)
//	//{
//	//	cout << "this is A fun have number" << endl;
//	//}
//};
//
//int main()
//{
//	A a;
//	return 0;
//}
//class A
//{
//public:
//	int val;
//};
//class B : virtual public A
//{
//public:
//};
//class BB : virtual public A
//{
//public:
//};
//class C : public B, public BB
//{
//public:
//	void fun()
//	{
//		cout << B::val << endl;
//		cout << BB::val << endl;
//		cout << val << endl;
//	}
//};
//int main()
//{
//	C c;
//
//	return 0;
//}
//class A
//{
//public:
//	virtual void v_fun()
//	{
//		cout << "this is A virtual fun" << endl;
//	}
//private:
//	void fun()
//	{}
//	
//};
//class AA : public A
//{
//public:
//	virtual void v_fun()
//	{
//		cout << "this is AA virtual fun" << endl;
//	}
//public:
//	void fun(int i)
//	{}
//};
//int main()
//{
//	A*p = new AA;
//	p->v_fun();
//	return 0;
//}
//class A
//{
//public:
//	int val;
//	virtual void fun()
//	{
//		cout << "this is A fun" << endl;
//	}
//};
//class B : A
//{
//public:
//	virtual void fun()
//	{
//		cout << "this is B fun" << endl;
//	}
//};
//
//int main()
//{
//	A a;
//	a.fun();
//	return 0;
//}

//class base
//{
//public:
//	int val;
//
//	base()
//	{
//		cout << "struct base fun" << endl;
//	}
//	virtual ~base()
//	{
//		cout << "delete heap space" << endl;
//		system("pause");
//	}
//	void fun()
//	{
//
//	}
//};
//class drive : public base
//{
//public:
//	int d_val;
//	int *p;
//	drive() : p(new int(10))
//	{
//		cout << "struct drive fun" << endl;
//	}
//	void fun()
//	{
//		cout << "this is dirve fun" << endl;
//	}
//	~drive()
//	{
//		cout << "destruct drive fun" << endl;
//		system("pause");
//		delete p;
//	}
//};
//
//int main()
//{
//	base *p = new drive;
//	delete p;
//	return 0;
//}


//template<class Type>
//class test
//{
//public:
//	test()
//	{}
//	~test()
//	{}
//	test(const Type&tmp)
//	{}
//	Type &operator=(const Type& tmp)
//	{}
//	void fun(Type &val);
//};
//
//template<class Type>
//void test<Type>::fun(Type &val)
//{
//	cout << "hello" << endl;
//}
//
//
//int main()
//{
//	test<int> i;
//	int val;
//	i.fun(val);
//	return 0;
//}
//class ListNode
//{
//public:
//	int val;
//	shared_ptr<ListNode> left;
//	shared_ptr<ListNode> right;
//	~ListNode()
//	{
//		cout << "ListNode is free" << endl;
//	}
//};
//int main()
//{
//	shared_ptr<ListNode> node1(new ListNode);
//	shared_ptr<ListNode> node2(new ListNode);
//	node1->left = node2;
//	node2->right = node1;
//
//	return 0;
//}
//
//int main()
//{
//	shared_ptr<int> p(new int(10));
//	shared_ptr<int> pp(p);
//	weak_ptr<int> wp(p);
//
//	cout << wp.use_count() << endl;
//	cout << *(wp.lock()) << endl;
//	pp.reset();
//	cout << wp.use_count() << endl;
//	
//	return 0;
//}
//class A
//{
//public:
//	A() :a(1)
//	{}
//public:
//	int a;
//};
//int main()
//{
//	auto_ptr<int> p(new int(10));
//	auto_ptr<int> pp;
//	pp = p;
//	cout << *pp << endl;
//
//	return 0;
//}
//int main()
//{
//	auto_ptr<int> p(new int(10));
//	cout << *p << endl;
//	return 0;
//}
//class A
//{
//public:
//	static A* get_a_point()
//	{
//		return new A();
//	}
//	int val;
//	bool key;
//private:
//	A() :val(10), key(true)
//	{}
//};
//int main()
//{
//	A* p = A::get_a_point();
//	cout << p->val << endl << p->key << endl;
//	return 0;
//}
//int main()
//{
//	int *p = new int[2];
//	int *arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = new(p + i) int(i);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *arr[i] << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int *p = new int[10];
//	int *arr[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = new(p + i) int(i);
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *arr[i] << endl;
//	}
//	for (auto e : arr)
//	{
//		cout << *e << endl;
//	}
//	return 0;
//}
//class A
//{
//public:
//	int pub_val;
//	class pub_cla
//	{
//	public:
//		int pub_cla_val;
//	};
//private:
//	int pri_val;
//	class pri_cla
//	{
//	public:
//		int pri_cla_val;
//	};
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(A::pub_cla) << endl;
//	A a;
//	A::pub_cla aa;
//	return 0;
//}

//class A
//{
//	friend ostream& operator<<(ostream&out, const A&val);
//public:
//	A() :val(10), c('h'), dou(1.1)
//	{}
//private:
//
//	int val;
//	char c;
//	double dou;
//};
//
//ostream& operator<<(ostream&out, const A& val)
//{
//	out << val.val << endl;
//	out << val.c << endl;
//	out << val.dou << endl;
//	return out;
//}
//int main()
//{
//	A a;
//	cout << a << endl;
//	return 0;
//}
//class A
//{
//public:
//	A() :const_i(1), val(10)
//	{}
//	const int const_i;
//	int i;
//	const static int val;
//	static void st_fun()
//	{
//
//	}
//	void no_const_fun()
//	{}
//	void fun()
//	{
//		no_const_fun();
//		const_fun();
//		cout << const_i << endl;
//	}
//	void const_fun()const
//	{
//		no_const_fun();
//		fun();
//	}
//
//};
//const int A::val = 10;
//int main()
//{
//	A a;
//	const A const_a;
//	a.const_fun;
//	a.const_i;
//
//	const_a.no_const_fun();	
//	const_a.i = 10;
//}

//class test
//{
//public:
//	test() :c_i(10)
//	{}
//	static const int st_c_i;
//	const int c_i;
//};
//const int test::st_c_i = 10;

//class A
//{
//	A()//构造函数
//	{}
//	A(const A &tmp)
//	{}
//	A& operator=(const A &val)
//	{}
//	A* operator&(A &tmp)
//	{}
//	const A* operator&(const A &tmp)
//	{}
//	~A()
//	{}
//
//};
//class A
//{
//public:
//	static void st_fun(A * p)
//	{
//		cout << "A :" << p->val << endl;
//	}
//	void fun()
//	{
//		cout << "A :" << val << endl;
//	}
//public:
//	A(int _val = 10) :val(_val)
//	{}
//	int val;
//};
//int main()
//{
//	A a;
//	A::st_fun(&a);
//	a.fun();
//	return 0;
//}
//void A::fun()
//{
//	cout << "hello world" << endl;
//}
//int A::i = 23;
//class A
//{
//public:
//	A() :ci(10)
//	{}
//private:
//	void fun();
//	void fun2()
//	{
//		for (int i = 0; i < 3; ++i)
//		{
//			cout << "how are you" << endl;
//		}
//	}
//private:
//	int val;
//	static int i;
//	const int ci;
//};
//class A
//{
//public:
//	int i;
//	void fun()
//	{}
//protected:
//	int proI;
//	void proFun()
//	{}
//private:
//	int priI;
//	void priFun()
//	{}
//};
//class B : protected A
//{
//public:
//	void Bfun()
//	{
//		cout << proI << endl;
//	}
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	B b;
//	b.fun();
//	return 0;
//}
//int main()
//{
//	list<int> v;
//	v.resize(10);
//	int i = 0;
//	for (auto &e : v )
//	{
//		e = i;
//		i++;
//	}
//	for (auto e : v)
//	{
//		cout << e << endl;
//		v.push_back(i++);
//	}
//	//vector<int>::iterator it = v.begin();
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	return 0;
//}
//int main()
//{
//	double i = 1;
//	double &ri = i;
//	double &rri = ri;
//	cout << i << endl;
//	cout << sizeof(ri) << endl;
//	rri = 4;
//	cout << i << endl;
//
//	char &c = nullptr;
//	char &c = nullptr;
//
//	return 0;
//
//}
//void fun(int i)
//{
//	cout << "this is int,ret val is void" << endl;
//}
//
//int fun(int i)
//{
//	cout << "this is int,ret val is int"
//}
//
//void fun(char c, int i)
//{
//	cout << "this is char and int" << endl;
//}
//char fun(double d, int i)
//{
//
//}
//
//int main()
//{
//
//	return 0;
//}

//dynamic_cast
//class base
//{
//public:
//
//	virtual void fun()
//	{}
//	virtual ~base()
//	{}
//};
//class drive : public base
//{
//public:
//
//	virtual void fun()
//	{}
//	virtual ~drive()
//	{}
//
//};
//class child : public drive
//{
//	virtual void fun()
//	{}
//	virtual ~child()
//	{}
//
//};
//
//int main()
//{
//	child *c = new child();
//	base* bp = dynamic_cast<base*>(c);
//	drive* dp = dynamic_cast<drive*>(c);
//
//	child * cc = dynamic_cast<child*>(bp);
//	//甚至可以使用转换过的进行复原，并不是只能向上，而且可以在合理的时候向下
//
//	base b;
//	drive *dp2 = dynamic_cast<drive*>(&b);
//	child *cp2 = dynamic_cast<child*>(&b);
//	return 0;
//}
//class base
//{
//
//};
//int main()
//{
//	int val = 0;
//	base *dp = reinterpret_cast<base*>(val);
//
//	return 0;
//}
//int main()
//{
//	const int* ci = 0;
//	volatile int *vi = nullptr;
//
//	int *nci = ci;
//	int *nvi = vi;
//
//	int *nci = const_cast<int*>(ci);
//	int *nvi = const_cast<int*>(vi);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int *pi = &i;
//
//	int ii = static_cast<int>(i);
//	char ci = static_cast<char>(i);
//	double b = static_cast<double>(i);
//	int ib = static_cast<int>(b);
//
//	void *pp = static_cast<int*>(pi);
//
//	char *ppc = static_cast<char*>(pi);
//
//
//	return 0;
//}

//int main()
//{
//	cout << __LINE__ << endl;
//	cout << __DATE__ << endl;
//	cout << __TIME__ << endl;
//	cout << __FILE__ << endl;
//
//	cout << HELLO
//	return 0;
//}
//#include<Windows.h>
//#include<stack>
//
//
//struct BinTree
//{
//public:
//	BinTree *left;
//	BinTree *right;
//	int val;
//};
//void fun(BinTree *root)//before
//{
//	BinTree *head = root;
//	stack<BinTree*> st;
//	st.push(head);
//	while (!st.empty())
//	{
//		while (head->left)
//		{
//			cout << head->val << endl;
//			st.push(head->left);
//		}
//		head = st.top();
//
//	}
//
//
//}
//int main()
//{
//	
//	return 0;
//}

//class base
//{
//public:
//
//	virtual void basefun()
//	{
//		cout << "hello world" << endl;
//	}
//};
//class base2
//{
//public:
//
//	virtual void base2fun()
//	{
//		cout << "hello world base2" << endl;
//	}
//};
//class drive : public base,public base2
//{
//public:
//	int k;
//};
//int main()
//{
//	drive d;
//	return 0;
//}
//class base
//{
//public:
//	virtual void fun() = 0
//	{
//		cout << "hello world" << endl;
//	}
//	static void test()
//	{
//		cout << "hello test" << endl;
//	}
//private:
//
//};
//class drive
//{
//	virtual void fun(int i) = 0
//	{
//		cout << "hello " << endl;
//	}
//	virtual void doit() = 0
//	{
//		cout << "this do it" << endl;
//	}
//private:
//};
//class dri :  public drive
//{
//};
//class ddri : public dri
//{
//	virtual void fun(int i )
//	{
//		cout << " hellooooooo" << endl;
//	}
//
//	virtual void doit()
//	{
//		cout << "this is ddri doit" << endl;
//	}
//};
//int main()
//{
//	
//	ddri d;
//	cout << sizeof(base) << endl;
//	system("pause");
//	return 0;
//}
//class sigleton
//{
//	int get_key()
//	{
//		return val.key;
//	}
//
//private:
//	sigleton() :key()
//	{}
//	sigleton(const sigleton&tmp)
//	{}
//
//	int key;
//	static sigleton val;
//};
//class sigleton_lazy
//{
//public:
//	int get_key()
//	{
//		if (val == nullptr)
//		{
//			val = new sigleton_lazy;
//		}
//		return val->key;
//	}
//
//private:
//	sigleton_lazy()
//	{}
//	sigleton_lazy(const sigleton_lazy&tmp)
//	{}
//
//	static sigleton_lazy *val;
//	int key;
//};
//class data
//{
//public:
//	data() : key(10)
//	{}
//private:
//	friend void operator<<(ostream&out, data& tmp);
//	int key;
//};
//void operator<<(ostream&out, data& tmp)
//{
//	cout << "hello operator <<" << endl;
//	cout << tmp.key << endl;
//}
//class test
//{
//public:
//	test()
//	{
//		arr = new int[10];
//		cout << "hello,leaking memroy" << endl;
//	}
//	int *arr;
//};
//int * fun(int *p)
//{
//	test tmp;
//	return p;
//}

//int main()
//{
//	int *ptr = (int *)malloc(sizeof(int));
//	*ptr = 1;
//	cout << sizeof(*ptr) << endl;
//	int *ptr2 = (int *)realloc(ptr,sizeof(int)* 10);
//	
//	*ptr = 10;
//	cout << *ptr << endl;
//	//data A;
//	//cout << A;
//	system("pause");
//	return 0;
//}
////typedef struct{
//	double d;
//	char c;
//	int i;
//	char cc;
//
//}st;
//
//void fun()
//{
//	//
//}
//int main()
//{
//	enum Color//颜色
//	{
//		RED = 1,
//		GREEN = 2,
//		BLUE = 4
//	};
//	enum{COUNT = 10};
//	char arr[COUNT];
//	printf("%d\n", sizeof(st));
//	printf("%d\n", sizeof(arr));
//
//	enum Color clr = GREEN;
//	clr = 3;
//	/*st tmp;
//	printf("%d\n", &(tmp));
//
//	printf("%d\n", &(tmp.c));
//	int j = (&(tmp.c) - (&(tmp.c) - 1));*/
//
//	//printf("%d\n", &(tmp.i));
//	//int ip = &(tmp.i) - 1;
//	//int ipp = &(tmp.i);
//	//int i = ipp - ip;
//
//
//
//	printf("%d\n", sizeof(double));
//	
//
//	return 0;
//}
//void test(int n)
//{
//	printf("%d\n", n);
//}
//
//int main()
//{
//	int n = 3;
//	
//	void (*p)(int) = &test;
//	//(*p)(n);
//	p(n,n);
//	//printf(p, sz);
//	return 0;
//}
//typedef union{
//	int i;
//	char c;
//}un;
//
//int main()
//{
//	un u;
//	u.i = 1;
//	u.c = 1;
//	printf("%d\n", u.c);
//	//printf("%d\n", u.c2);
//
//
//	system("pause");
//	return 0;
//}
//typedef struct A1
//{
//	short data1;
//	char data2;
//}A1;
//typedef struct A2
//{
//	int data6;
//}A2;
//typedef struct A3
//{
//	A1 tmp1;
//	A2 tmp2;
//	char date4;
//}A3;
//int main()
//{
//	printf("%d\n",sizeof(A2));//size = 12
//	return 0;
//}
