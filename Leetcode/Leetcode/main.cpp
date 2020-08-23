#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<set>
#include<stdlib.h>
#include<list>
#include<sstream>
//#include<unistd.h>


using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	string minNumber(vector<int>& nums) {
		if (!nums.size())
			return "";
		multiset<string> ret;
		for (int i = 0; i < nums.size(); i++)
		{
			ret.insert(to_string(nums[i]));
		}
		multiset<string>::iterator it = ret.begin();

		string str = *(it);
		it++;
		string left;
		string right;
		for (int i = 1; i < ret.size(); i++)
		{
			left = *(it)+str;
			right = str + *(it);
			if (left < right)
				str = left;
			else
				str = right;
			it++;
		}
		return str;
	}
};
//class Solution {
//public:
//	static int lengthOfLongestSubstring(string s) {
//		vector<int> ret;
//		ret.resize(26);
//		int max = 0;
//		int len = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			ret.clear();
//			ret.resize(26);
//			len = 0;
//			for (int j = i; j < s.size(); j++)
//			{
//				if (++ret[s[j] - 'a'] > 1)
//					break;
//				len++;
//			}
//			if (len > max)
//				max = len;
//
//		}
//		return max;
//	}
//};
//int main()
//{
//	Solution::lengthOfLongestSubstring("abcabcbb");
//	return 0;
//}
//class Solution {
//public:
//	static bool fun(TreeNode* root, vector<TreeNode*>&ret, TreeNode*point)
//	{
//		bool ret_left;
//		bool ret_right;
//		if (root->val == point->val)
//		{
//			ret.push_back(root);
//			return true;
//		}
//
//		if (root->left)
//			ret_left = fun(root->left, ret, point);
//		else
//			ret_left = false;
//		if (ret_left)
//			ret.push_back(root);
//
//		if (root->right)
//			ret_right = fun(root->right, ret, point);
//		else
//			ret_right = false;
//		if (ret_right)
//			ret.push_back(root);
//
//		return (ret_left || ret_right) ? true : false;
//
//
//	}
//	static TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//		vector<TreeNode*> left;
//		vector<TreeNode*> right;
//
//		fun(root, left, p);
//		fun(root, right, q);
//		int index_left = left.size() - 1;
//		int index_right = right.size() - 1;
//		while (index_left >= 0 && index_right >= 0 && left[index_left] == right[index_right])
//		{
//
//			index_left--;
//			index_right--;
//
//		}
//		return left[index_left + 1];
//	}
//};
//
//int main()
//{
//	TreeNode a1(3);
//
//	TreeNode a2(5);
//	TreeNode a3(1);
//
//	TreeNode a4(6);
//	TreeNode a5(2);
//	TreeNode a6(0);
//	TreeNode a7(8);
//
//	TreeNode a8(7);
//	TreeNode a9(4);
//
//	a1.left = &a2;
//	a1.right = &a3;
//
//	a2.left = &a4;
//	a2.right = &a5;
//	a3.left = &a6;
//	a3.right = &a7;
//
//	a5.left = &a8;
//	a5.right = &a9;
//
//	TreeNode b1(2);
//	TreeNode b2(1);
//	b1.right = &b2;
//
//	TreeNode * ret = Solution::lowestCommonAncestor(&b1, &b1, &b2);
//	
//
//	return 0;
//}

//class Solution {
//public:
//	static int strToInt(string str) {
//		long res = 0; bool negative = false;
//		int i = 0;
//		while (str[i] == ' ')//去除开头空格
//			i++;
//		if (!isdigit(str[i]) && str[i] != '+'&&str[i] != '-')//开头若不为数字或正负号返回
//			return 0;
//		if (str[i] == '-'){ negative = true; i++; }//判断正负
//		else if (str[i] == '+') i++;
//		while (isdigit(str[i]))//累加
//		{
//			res = res * 10 + str[i] - '0';
//			if (negative == false && res>INT_MAX)//判断是否越界
//				return INT_MAX;
//			else if (negative == true && -res<INT_MIN)
//				return INT_MIN;
//			i++;
//		}
//		return negative ? -res : res;
//	}
//};
//int main()
//{
//	cout << Solution::strToInt("-+2");
//
//
//	return 0;
//}
//class Solution {
//public:
//	static bool isStraight(vector<int>& nums) {
//		int joker = 0;
//		set<int> tmp;
//		vector<int> ret;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] == 0)
//			{
//				joker++;
//				continue;
//			}
//			tmp.insert(nums[i]);
//		}
//		set<int>::iterator it = tmp.begin();
//		while (it != tmp.end())
//		{
//			ret.push_back(*it);
//			it++;
//		}
//		if (ret.size() < (5 - joker))
//			return false;
//		int key = 0;
//		for (int i = 0; i < ret.size() - 1; i++)
//			key += ret[i] - ret[i + 1];
//
//		if ((key + joker + (int)ret.size() - 1) >= 0)
//		{
//			cout << (key + joker + (int)ret.size() - 1) << endl;
//			return true;
//		}
//			
//		//2 4 5 7 9 
//		return false;
//
//	}
//};
//class Solution {
//public:
//	static int lastRemaining(int n, int m) {
//		int ans = 0;
//		// 最后一轮剩下2个人，所以从2开始反推
//		for (int i = 2; i <= n; i++) {
//			ans = (ans + m) % i;
//		}
//		return ans;
//	}
//};
//class Solution {
//public:
//	static int lastRemaining(int n, int m) {
//		list<int> round;
//		for (int i = 0; i < n; i++)
//		{
//			round.push_back(i);
//		}
//		list<int>::iterator it = round.begin();
//		list<int>::iterator del = round.begin();
//		while (round.size() > 1)
//		{
//			for (int i = 0; i < m - 1; i++)
//			{
//				it++;
//				if (it == round.end())
//					it = round.begin();
//			}
//			del = it;
//			it++;
//			if (it == round.end())
//				it = round.begin();
//			round.erase(del);
//		}
//		return *it;
//
//	}
//};
//int main()
//{
//	int ret = Solution::lastRemaining(5, 3);
//	cout << ret << endl;
//	return 0;
//}
//class Solution {
//public:
//	static vector<string> findWords(vector<string>& words) {
//		string one = "QWERTYUIOPqwertyuiop";
//		string two = "ASDFGHJKLasdfghjkl";
//		string three = "ZXCVBNMzxcvbnm";
//		string key;
//		vector<string> ret;
//		for (int i = 0; i < words.size(); i++)
//		{
//			if (int(one.find(words[i][0])) >= 0)
//				key = one;
//			else if (int(two.find(words[i][0])) >= 0)
//				key = two;
//			else
//				key = three;
//
//			for (int j = 0; j < words[i].size(); j++)
//			{
//				if (int(key.find(words[i][j])) < 0)
//					break;
//
//				if (j == words[i].size() - 1)
//					ret.push_back(words[i]);
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<string> str = { "Hello", "Alaska", "Dad", "Peace" };
//	vector<string> ret = Solution::findWords(str);
//	set<int> i;
//	i.size()
//	return 0;
//}
//class Solution {
//public:
//	int sum(vector<int>::iterator left, vector<int>::iterator right)
//	{
//		int add = 0;
//		while (left != right)
//		{
//			add += *left;
//			left++;
//		}
//		add += *left;
//		return add;
//	}
//	static vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//		vector<int> ret;
//		vector<int>::iterator left = nums.begin();
//		vector<int>::iterator right = nums.begin();
//		for (int i = 0; i < k - 1; i++)
//			right++;
//
//		ret.push_back(*(max(left, right)));
//		left++;
//		right++;
//		while (right != nums.end())
//		{
//			ret.push_back(*(max(left, right)));
//			left++;
//			right++;
//		}
//		//ret.push_back(*(max(left,right)));
//		return ret;
//
//	}
//};
//int main()
//{
//	vector<int> nums = { 1, 3, -1, -3, 5, 3, 6, 7 };
//	vector<int> ret = Solution::maxSlidingWindow(nums,3);
//	return 0;
//}
//class Solution {
//public:
//	static string reverseWords(string s) {
//		string ret;
//		int left = 0;
//		int right = s.size() - 1;
//		string::iterator it = s.end();
//		it--;
//		int key = 0;
//		for (;right;)
//		{
//			while (*it == ' ' && it != s.begin())
//			{
//				it--;
//				right--;
//			}
//			if (right < 0)
//				break;
//			if (key == 1)
//				ret += ' ';
//			else
//				key = 1;
//			left = s.rfind(' ', right);
//			ret += s.substr(left + 1, right - left);
//			
//			right = left;
//			while (*it != ' '&& it != s.begin())
//			{
//				it--;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string str = "a good   example";
//	string ret = Solution::reverseWords(str);
//	vector<int> vet = { 2, 3, 4, 5, 6, 7 };
//	vector<int>::iterator left = vet.begin();
//	vector<int>::iterator i = max(vet.begin(), vet.end());
//	cout << ret << endl;
//	return 0;
//}
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int>::iterator left = nums.begin();
//		vector<int>::iterator right = nums.end();
//		right--;
//
//	}
//};
//int main()
//{
//	string s = "hello";
//	cout << s.size() << endl;
//	cout << s.rfind('e',4) << endl;
//	cout << s.rfind(4, 'e') << endl;
//	s +=  s.substr(1, 2);
//	
//	cout << a.size() << endl;
//	cout << s.find('e');
//
//	return 0;
//}
//class A
//
//{
//
//public:
//
//	A(int a)
//
//		:_a1(a)
//
//		, _a2(_a1)
//
//	{}
//
//
//
//	void Print()
//
//	{
//
//		cout << _a1 << " " << _a2 << endl;
//
//	}
//
//
//
//private:
//
//	int _a2;
//
//	int _a1;
//
//};
//
//
//
//int main()
//
//{
//
//	A aa(1);
//
//	aa.Print();
//	return 0;
//
//}

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
//class Solution {
//public:
//	static Node* copyRandomList(Node* head) {
//		vector<pair<Node*, Node*>> src;
//		vector<int> _src;
//		vector<Node*> des;
//		Node* tmp = head;
//
//		Node* ret = NULL;
//		Node* _ret = NULL;
//
//		while (tmp)
//		{
//			src.push_back(make_pair(tmp, tmp->random));
//			tmp = tmp->next;
//		}
//		src.push_back(make_pair((Node*)NULL, (Node*)NULL));
//
//		_src.resize(src.size());
//		for (int i = 0; i < src.size(); i++)
//		{
//			for (int j = 0; j < src.size(); j++)
//			{
//				if (src[j].first == src[i].second)
//				{
//					_src[i] = j;
//					break;
//				}
//			}
//		}
//		des.resize(src.size());
//
//		int index = 0;
//		tmp = head;
//
//		ret = new Node(tmp->val);
//		_ret = ret;
//
//		while (tmp)
//		{
//			
//			des[index] = ret;
//			//ret->next = tmp->next;
//			tmp = tmp->next;
//			index++;
//			if (tmp)
//			{
//				ret->next = new Node(tmp->val);
//				ret = ret->next;
//			}
//		}
//		des[index] = NULL;
//		ret->next = NULL;
//
//		ret = _ret;
//		index = 0;
//
//		while (ret)
//		{
//			ret->random = des[_src[index]];
//			ret = ret->next;
//			index++;
//		}
//
//
//		return _ret;
//	}
//};
//
//int main()
//{
//	//[[7,null],[13,0],[11,4],[10,2],[1,0]]
//	Node* tmp1 = new Node(7);
//	Node* tmp2 = new Node(13);
//	Node* tmp3 = new Node(11);
//	Node* tmp4 = new Node(10);
//	Node* tmp5 = new Node(1);
//
//	Node* head = tmp1;
//	tmp1->next = tmp2;
//	tmp1->random = NULL;
//	tmp2->next = tmp3;
//	tmp2->random = tmp1;
//	tmp3->next = tmp4;
//	tmp3->random = tmp5;
//	tmp4->next = tmp5;
//	tmp4->random = tmp3;
//	tmp5->next = NULL;
//	tmp5->random = tmp1;
//
//	Node* ret = Solution::copyRandomList(head);
//	return 0;
//}
//class Solution {
//public:
//	static bool verifyPostorder(vector<int>& postorder) {
//		stack<int> st;
//		int pre = INT_MAX;
//		for (int i = postorder.size() - 1; i >= 0; i--){
//			if (postorder[i]>pre){
//				return false;
//			}
//			while (st.size() && postorder[i]<st.top()){
//				pre = st.top();
//				st.pop();
//			}
//			st.push(postorder[i]);
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	vector<int> v = { 4, 8, 6, 12, 16, 14, 10 };
//	pair<int, int> r;
//	r.second;
//	bool ret = Solution::verifyPostorder(v);
//
//	return 0;
//}
//class Solution {
//public:
//	static vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		int row;
//		int col;
//		vector<int> ret;
//		int front_row = 0;
//		int rear_row = matrix.size() - 1;
//		int left_col = 0;
//		int right_col = matrix[0].size() - 1;
//		//int count = 0;
//		int index;
//		while (front_row < rear_row && left_col < right_col)
//		{
//			row = front_row;
//			col = left_col;
//			while (col <= right_col)
//			{
//				ret.push_back(matrix[row][col]);
//				col++;
//			}
//			col--;
//			row++;
//			while (row < rear_row)
//			{
//				ret.push_back(matrix[row][col]);
//				row++;
//			}
//			while (col >= left_col)
//			{
//				ret.push_back(matrix[row][col]);
//				col--;
//			}
//			col++;
//			row--;
//			while (row > front_row)
//			{
//				ret.push_back(matrix[row][col]);
//				row--;
//			}
//			front_row++;
//			rear_row--;
//			left_col++;
//			right_col--;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<vector<int>> ma;
//	ma = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	vector<int> ret = Solution::spiralOrder(ma);
//
//	return 0;
//}


//class Solution {
//public:
//	static vector<int> printNumbers(int n) {
//		int index = 1;
//		while (n--)
//		{
//			index *= 10;
//		}
//		index--;
//		vector<int> ret;
//		ret.resize(index);
//		for (int i = 1; i <= index; i++)
//		{
//			ret[i - 1] = i;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> ret = Solution::printNumbers(1);
//	
//
//	return 0;
//}
//class Solution {
//public:
//	static int dfs(int x, int y, int &m, int &n, vector<vector<bool>>& table)
//	{
//		if (x<0 || y < 0 || x >= m || y >= n || !table[x][y])
//			return 0;
//
//		return (dfs(x - 1, y, m, n, table) + dfs(x, y - 1, m, n, table) + dfs(x + 1, y, m, n, table) + dfs(x, y + 1, m, n, table) + 1);
//	}
//	static int movingCount(int m, int n, int k) {
//		vector<vector<bool>> table;
//		table.resize(m);
//		int sum = 0;
//		for (int i = 0; i < m; i++)
//		{
//			table[i].resize(n);
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if ((i % 10) + (i / 10) + (j % 10) + (j / 10) <= k)
//				{
//					table[i][j] = true;
//				}
//			}
//		}
//
//		return dfs(0, 0, m, n, table);
//	}
//};
//
//int main()
//{
//	int ret = Solution::movingCount(38,15,9);
//	cout << ret << endl;
//
//	return 0;
//}





//class Solution {
//public:
//	static bool fun(vector<vector<char>>& board, string &word, int _row, int _col)
//	{
//		size_t index = 1;
//		size_t row = _row;
//		size_t col = _col;
//		stack<size_t> s_row;
//		stack<size_t> s_col;
//
//		s_row.push(row);
//		s_col.push(col);
//
//		vector<vector<bool>> flag;
//		flag.resize(board.size());
//		for (size_t i = 0; i < board.size(); i++)
//		{
//			flag[i].resize(board[0].size());
//		}
//
//		while (1)
//		{
//			bool key = false;
//			bool i = false;
//
//			flag[row][col] = true;
//
//			if (col > 0 && flag[row][col - 1] == false && board[row][col - 1] == word[index])
//			{
//				if (index == word.size() - 1)
//				{
//					key = true;
//				}
//				i = true;
//				s_row.push(row);
//				s_col.push(col - 1);
//			}
//			if (col < board[0].size() - 1 && flag[row][col + 1] == false && board[row][col + 1] == word[index])
//			{
//				if (index == word.size() - 1)
//				{
//					key = true;
//				}
//				i = true;
//
//				s_row.push(row);
//				s_col.push(col + 1);
//			}
//
//			if (row > 0 && flag[row - 1][col] == false && board[row - 1][col] == word[index])
//			{
//				if (index == word.size() - 1)
//				{
//					key = true;
//				}
//				i = true;
//				s_row.push(row - 1);
//				s_col.push(col);
//			}
//			if (row < board.size() - 1 && flag[row + 1][col] == false && board[row + 1][col] == word[index])
//			{
//				if (index == word.size() - 1)
//				{
//					key = true;
//				}
//				i = true;
//				s_row.push(row + 1);
//				s_col.push(col);
//			}
//			if (key)
//			{
//				return true;
//			}
//
//			if (!i)
//			{
//				s_row.pop();
//				s_col.pop();
//				flag[row][col] = false;
//				index--;
//			}
//			else{
//				index++;
//			}
//
//			if (s_row.size() == 0)
//			{
//				return false;
//			}
//			row = s_row.top();
//			col = s_col.top();
//			if ()
//
//		}
//		return false;
//
//	}
//	static bool exist(vector<vector<char>>& board, string word) {
//		if (board.empty())
//		{
//			return false;
//		}
//		
//		vector<char> row;
//		vector<char> col;
//
//		for (size_t i = 0; i < board.size(); i++)
//		{
//			for (size_t j = 0; j < board[0].size(); j++)
//			{
//				if (board[i][j] == word[0])
//				{
//					row.push_back(i);
//					col.push_back(j);
//				}
//			}
//		}
//		bool ret = false;
//		for (size_t i = 0; i < row.size(); i++)
//		{
//			ret = fun(board, word, row[i], col[i]);
//			if (ret)
//			{
//				break;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<vector<char>> board;
//	string word = "abcd";
//	board.resize(2);
//	for (int i = 0; i < 2; i++)
//	{
//		board[i].resize(2);
//	}
//	//char arr[3][4] = { { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
//	char arr[2][2] = { { 'a', 'b' }, { 'c', 'd' } };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			board[i][j] = arr[i][j];
//		}
//	}
//	bool ret = false;
//	ret = Solution::exist(board, word);
//	cout << ret << endl;
//
//	return 0;
//}


//int fib(int n) {
//	int one;
//	int two;
//	int three;
//	one = 0;
//	two = 1;
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		three = two;
//		two = one + two;
//		one = three;
//	}
//	if (two >= 1000000008)
//	{
//		return two % 1000000007;
//	}
//	return two;
//}
//int main()
//{
//	//int ret = fib(45);
//	//cout << ret << endl;
//	vector<vector<int>> flag;
//	flag.resize(10);
//	flag[0].resize(10);
//	stack<int> s;
//	s.push(2);
//	std::cout << s.size() << std::endl;
//	return 0;
//
//}
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//	
//};
//class Solution {
//public:
//	static int FindVal(int val, vector<int>& order)
//	{
//		int i = 0;
//		for (i = 0; i < order.size(); i++)
//		{
//			if (val == order[i])
//			{
//				break;
//			}
//		}
//		return i;
//	}
//	static void CreateTree(TreeNode **root, int left, int right, int &index, vector<int>& preorder, vector<int>& inorder)
//	{
//		if (right - left < 0)
//		{
//			return;
//		}
//
//		int f = FindVal(preorder[index++], inorder);
//		*root = new TreeNode(inorder[f]);
//		CreateTree(&((*root)->left), left, f - 1, index, preorder, inorder);
//		CreateTree(&((*root)->right), f + 1, right, index, preorder, inorder);
//
//	}
//	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//
//		int left = 0;
//		int right = preorder.size() - 1;
//		int index = 0;
//
//		int f = FindVal(preorder[index++], inorder);
//		TreeNode *root = new TreeNode(inorder[f]);
//
//		CreateTree(&(root->left), left, f - 1, index, preorder, inorder);
//		CreateTree(&(root->right), f + 1, right, index, preorder, inorder);
//		return root;
//
//	}
//};
//
//int main()
//{
//	vector<int> num = {1,2,3};
//	vector<int> pre = { 3, 9, 20, 15, 7 };
//	vector<int> in = { 9, 3, 15, 20, 7 };
//	Solution i;
//	TreeNode * bt = i.buildTree(pre, in);
//	
//	for (auto &e : num )
//	{
//		cout << e << endl;
//	}
//	return 0;
//}