#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<stdlib.h>
#include<time.h>
#include<unordered_set>
#include<stack>
//#include<winapifamily.h>

#include<vector>
#include<string>
#include<hash_map>

#include<conio.h>

using namespace std;


#define SIZE 4;

const unsigned char CTRL_KEY = 0XE0;
const unsigned char __LEFT = 0X4B;
const unsigned char __RIGHT = 0X4D;
const unsigned char __DOWN = 0X50;
const unsigned char __UP = 0X48;

#define LEFT 0;
#define RIGHT 1;
#define DOWN 2;
#define UP 3;


#define J 0
#define L 1
#define O 2
#define S 3
#define Z 4
#define T 5
#define I 6

#define __TIME 10
 struct TreeNode {
	 int val;
	 TreeNode *left;
	 TreeNode *right;
	 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	 
};

 int arr[10];

 int find(int x)
 {
	 if (arr[x] < 0)
		 return x;
	 else
		 return arr[x];
 }

 void Union(int a, int b)
 {
	 int i = find(a);
	 int j = find(b);
	 i += j;
	 j = i - j;
 }


 //class A{
 //public:
	// void test(float a)
	// {
	//	 cout << "1" << endl;
	// }
	// int num = 1;
 //};
 //class B:public A{
 //public:
	// void test(int)
	// {
	//	 cout << "2" << endl;
	// }
 //};
 //int main()
 //{
	// A *a = new A;
	// B *b = new B;
	// a = b;
	// a->test(1.1);
	// A c;
	// (*a).num = 2;

 //class A{
 //private:
	// //…其它成员
	// static int object_count;
 //public:
	// virtual void func(int data){ cout << "class A : " << data << endl; }
	// void func(char *str){ cout << "class A : " << str << endl; }
	// A()
	// {
	//	 object_count++;
	// }
	// ~A()
	// {
	//	 object_count--;
	// }
	// int GetObjectCount()
	// {
	//	 return object_count;
	// }
 //};
 //int A::object_count(0);
 //class B : public A{
	// //…其它成员
 //public:
	// void func() { cout << "function in B without parameter!\n"; }
	// void func(int data) { cout << "class B :" << data << endl; }
	// void func(char *str){ cout << "class B :" << str << endl; }
 //};
 //int main(int argc, char *argv[])
 //{
	// A *pA;
	// B b;
	// pA = &b;
	// //pA->func();
	// pA->func(1);
	// pA->func("haha");
	// return 0;
 //}


 /*int fun(int n)
 {
	 if (n > 0)
		 return n*n + fun(n - 1);
	 else
		 return n;
 }
 int CalcDigital(char *str)
 {
	 int count = 0;
	 for (int i = 0; i < strlen(str); i++)
	 {
		 if (str[i] <= '9' && str[i] >= '0')
			 ++count;
	 }
	 return count;
 }*/


 //class a
 //{
	// friend s;
 //private:
	// int i;
 //protected:
	// int j;
 //};
 //class s
 //{
 //public:
	// void fun()
	// {
	//	 cout << i << endl;
	//	 cout << j << endl;
	// }

 //};
 //int main()
 //{

	// return 0;
 //}
//#define MAX_PRAM_LENGTH   10000
 //typedef struct
 //{
	// unsigned char ucCommand;
	// unsigned short usLength;
	// unsigned char Para[MAX_PRAM_LENGTH];
 //}DEBUG_MSG;

 //void PrintDebufMsg(DEBUG_MSG DebugMessage)
 //{
	// int i;
	// printf("\nCommand = %d", DebugMessage.ucCommand);
	// for (i = 0; i < DebugMessage.usLength && i < MAX_PRAM_LENGTH; i++)
	// {
	//	 printf("\nPara[%d] = 0x % x", i, DebugMessage.Para[i]);
	// }
 //}

 //int main()
 //{
	// DEBUG_MSG a;
	// PrintDebufMsg(a);
	// return 0;
 //}
 //void VarInit(unsigned char *pucArg)
 //{
	// *pucArg = 1;
	// return;
 //}
 //void Test()
 //{
	// unsigned long ulGlobal = 0;
	// VarInit((unsigned char*)&ulGlobal);
	// printf("%lu", ulGlobal);
	// return;
 //}
 //int main()
 //{
	// Test();
	// return 0;
 //}


 //void bit_set(unsigned char *p_data, unsigned char position, bool flag)
 //{
	// unsigned char i = 1;
	// i << (position - 1);
	// if (flag)
	// { 
	//	 *p_data &= i;
	// }
	// else
	// {
	//	 *p_data &= !i;
	// }
 //}
 //void RightLoopMove(char *pStr, unsigned short steps)
 //{
	// char tmp[100] = { 0 };
	// memcpy(tmp, pStr + steps, strlen(pStr) - steps);
	// strncat(tmp, pStr, steps);
	// strcpy(pStr, tmp);
 //}

 //int main()
 //{
	// char str[] = { 'h','e','l','l','o' ,'\0'};
	// char a[] = 'hello';
	// RightLoopMove(str, 2);
	// //out << str + 2 << endl;
	// char * tmp = str + 2;

	// printf("%s", str + 2);
	// printf("%x", str + 2);
	// return 0;
 //}
//class Solution {
//public:
//	static int maxDepth(TreeNode* root) {
//		stack<TreeNode*> st;
//		int max = 0;
//		int high = 1;
//		TreeNode*head = root;
//
//		st.push(head);
//		while (!st.empty())
//		{
//			if (head->left)
//			{
//				st.push(head->left);
//				head = head->left;
//				high++;
//			}
//			else
//			{
//				if (high > max)
//					max = high;
//				st.pop();
//				high--;
//				//head = st.top()
//				while (!st.empty() && !((st.top())->right))
//				{
//					st.pop();
//					high--;
//				}
//				if (!st.empty())
//				{
//					head = st.top()->right;
//					high++;
//					st.pop();
//				}
//				else
//					break;
//			}
//		}
//		return max;
//	}
//	static int kthLargest(TreeNode* root, int k) {
//		TreeNode *head = root;
//		stack<TreeNode*> st;
//		vector<int> ret;
//		while (1)
//		{
//			for (; head; head = head->right)
//			{
//				st.push(head);
//			}
//			head = st.top();
//			ret.push_back(head->val);
//			st.pop();
//
//			while (!(st.empty()) && !(st.top()->left))
//			{
//				ret.push_back(st.top()->val);
//				st.pop();
//			}
//			if (!st.empty())
//			{
//				head = st.top();
//				ret.push_back(head->val);
//			}
//			
//			head = head->left;
//			if (ret.size() >= k)
//				break;
//
//		}
//		return ret[k - 1];
//	}
//};
//
//
//int main()
//{
//	TreeNode t1(3);
//	TreeNode t2(9);
//	TreeNode t3(20);
//	TreeNode t4(15);
//	TreeNode t5(7);
//	t1.left = &t2;
//	t1.right = &t3;
//	t3.left = &t4;
//	t3.right = &t5;
//
//	TreeNode a1(2);
//	TreeNode a2(1);
//	a1.left = &a2;
//	cout << Solution::kthLargest(&a1,2) << endl;
//	//cout << Solution::maxDepth(&t1) << endl;
//
//	return 0;
//}

//
//class Solution {
//public:
//	static int search(vector<int>& nums, int target) {
//		int sum = 0;
//		int left = 0;
//		int right = nums.size() - 1;
//		int mid = (left + right) / 2;
//		int left_index = 0;
//		int right_index = 0;
//		while (mid < right && mid > left)
//		{
//			if (target > nums[right] || target < nums[left])
//				return 0;
//			if (nums[mid] == target)
//				break;
//			else if (nums[mid] < target)
//			{
//				left = mid;
//				mid = (left + right) / 2;
//			}
//			else
//			{
//				right = mid;
//				mid = (left + right) / 2;
//			}
//		}
//		if (nums[mid] != target)
//			return 0;
//		++sum;
//		left_index = mid;
//		right_index = mid;
//
//		while (1)
//		{
//			--left_index;
//			++right_index;
//			if (nums[left_index] == target)
//				++sum;
//			if (nums[right_index] == target)
//				++sum;
//
//			if (nums[left_index] != target && nums[right_index] == target)
//				break;
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	vector<int> arr = { 5, 7, 7, 8, 8, 10};
//	arr.
//	int target = 6;
//	int ret = Solution::search(arr, target);
//	cout << ret << endl;
//	return 0;
//}

//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	static ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//		vector<ListNode*> _a;
//		vector<ListNode*> _b;
//		ListNode* head = headA;
//		while (head != NULL)
//		{
//			_a.push_back(head);
//			head = headA->next;
//		}
//		head = headB;
//		while (head != NULL)
//		{
//			_a.push_back(head);
//			head = headB->next;
//		}
//		int indexA = _a.size() - 1;
//		int indexB = _b.size() - 1;
//		if (_a[indexA] != _b[indexB])
//			return NULL;
//		while (indexA > -1 && indexB > -1)
//		{
//			if (_a[indexA] != _b[indexB])
//				break;
//			indexA--;
//			indexB--;
//		}
//
//		return _a[indexA];
//	}
//};
//
//int main()
//{
//	ListNode a1(1);
//	ListNode a2(2);
//	ListNode a3(3);
//	ListNode a4(4);
//	ListNode a5(5);
//	ListNode a6(6);
//
//	a1.next = &a2;
//	a2.next = &a3;
//	a3.next = &a4;
//	a5.next = &a3;
//	a6.next = &a5;
//	ListNode * p = Solution::getIntersectionNode(&a1, &a6);
//	cout << p->val << endl;
//
//
//	return 0;
//}

//class Solution {
//public:
//	static int majorityElement(vector<int>& nums) {
//		int max = 0;
//		int num = 0;
//		int count = 0;
//		//hash_set<int> tmp;
//		vector<pair<int, int>> tmp;
//		tmp.push_back(make_pair(nums[0],1));
//		for (int i = 1; i < nums.size(); ++i)
//		{
//			for (int j = 0; j < tmp.size(); ++j)
//			{
//				if (nums[i] == tmp[j].first)
//				{
//					tmp[j].second++;
//					break;
//				}
//				if (j <= tmp.size() - 1)
//				{
//					tmp.push_back(make_pair(nums[i], 0));
//				}
//
//			}
//		}
//		for (int i = 0; i < tmp.size(); ++i)
//		{
//			if (tmp[i].second >(nums.size() / 2))
//			{
//				num = tmp[i].first;
//				break;
//			}
//		}
//		return num;
//	}
//};
//
//
//int main()
//{
//	vector<int> nums = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	//int i = Solution::majorityElement(nums);
//	multiset<int> it;
//	for (int i = 0; i < nums.size(); i++)
//		it.insert(nums[i]);
//	multiset<int>::iterator p = it.begin();
//	while (p != it.end())
//	{
//		cout << *p << endl;
//		p++;
//	}
//		
//
//
//
//	//cout << i << endl;
//	return 0;
//}
//int main(){
//	POINT p;
//	while (1){
//		GetCursorPos(&p);//获取鼠标坐标 
//		SetCursorPos(p.x + 3, p.y);//更改鼠标坐标 
//		Sleep(10);//控制移动时间间隔 
//	}
//
//	return 0;
//}

//class gamer
//{
//private:
//	game m_game;
//	
//};
//class game
//{
//private:
//	vector<vector<int>> m_map;
//
//};
//int main()
//{
//
//
//
//	return 0;
//}
//void get_in_fun(int & in)
//{
//	if (_getch() == CTRL_KEY)
//	{
//		switch (_getch())
//		{
//		case __LEFT: in = LEFT; break;
//		case __RIGHT: in = RIGHT; break;
//		case __DOWN: in = DOWN; break;
//		case __UP: in = UP; break;
//		default: break;
//		}
//	}
//	else
//		in = 4;
//}
//
//void add_point(int& point)
//{
//	point++;
//}
//void sub_point(int& point)
//{
//	point--;
//}
//void show_map(int & flag, clock_t &end)
//{
//	switch (flag)
//	{
//	case 0:
//		printf("/__               last time = %d/%d\n",end,__TIME);
//		printf("\\\n");
//		break;
//	case 1:
//		printf("__\\               last time = %d/%d\n", end, __TIME);
//		printf("  /\n");
//		break;
//	case 2:
//		printf(" |                last time = %d/%d\n", end, __TIME);
//		printf("\\|/\n");
//		break;
//	case 3:
//		printf("/|\\               last time = %d/%d\n", end, __TIME);
//		printf(" |\n");
//		break;
//	default:
//		break;
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	queue<int> q;
//	int size = 10;
//	srand((unsigned int)time(0));
//	int in;
//	int end_point = 0;
//	int success_point = 0;
//	int failed_point = 0;
//	int tmp = 0;
//	clock_t start = clock();
//	clock_t end;
//
//	/*for (int j = 0; j < 10; j++)
//	{
//		tmp = rand() % SIZE;
//		q.push(tmp);
//	}*/
//		
//
//
//	while (true)
//	{
//		
//
//		i = rand() % SIZE;
//		//q.push(i);
//		end = (clock() - start) / CLOCKS_PER_SEC;
//		show_map(i,end);
//		//q.pop();
//		get_in_fun(in);
//		end = (clock() - start) / CLOCKS_PER_SEC;
//		if (end >= __TIME)
//		{
//			cout << "time out" << endl;
//			break;
//		}
//		system("cls");
//		if (in == i)
//		{
//			add_point(success_point);
//			cout << "add point" << endl;
//			cout << "get point #: " <<success_point - failed_point << endl;
//			//cout << "true" << endl;
//		}
//		else if (in == 4)
//		{
//			//cout << "error" << endl;
//			continue;
//		}
//		else
//		{
//			sub_point(failed_point);
//			cout << "get point #: " << "sub point" << endl;
//			cout << success_point - failed_point << endl;
//		}
//	}
//	system("cls");
//	cout << "the end point is #:" << success_point + failed_point << endl;
//	cout << "the success point is #:" << success_point << endl;
//	cout << "the failed point is #:" << failed_point << endl;
//	system("pause");
//	return 0;
//}



//class MaxGap {
//public:
//	int findMaxGap(vector<int> A, int n) {
//		// write code here
//		int max_left = A[0];
//
//		vector<int>::iterator it = A.begin();
//		int max_left = *it;
//		int max_eft = *(max(A.begin(), it));
//		int max_right = *(max(it + 1, A.end()));
//		int max_ight = *(max(it + 1, A.end()));
//
//
//	}
//};
//class MaxGap {
//public:
//	static int findMaxGap(vector<int> A, int n) {
//		// write code here
//		set<int> arr;
//		for (int i = 0; i < n; ++i)
//			arr.insert(A[i]);
//		set<int>::iterator it = arr.end();
//		it--;
//		set<int>::iterator first = arr.begin();
//		int max = 0;
//		while (first != arr.end())
//		{
//			if ((*it - *first) > max)
//				max = *it - *first;
//			first++;
//		}
//		return max;
//	}
//};
//int main()
//{
//	vector<int> A = { 2, 7, 3, 1, 1 };
//	cout << MaxGap::findMaxGap(A, 5) << endl;
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	set<int> ret;
//	while (cin >> n)
//	{
//		int num = 0;
//
//		for (int i = 0; i < num; i++)
//		{
//			cin >> num;
//			ret.insert(num);
//		}
//		if ()
//	}
//
//
//	return 0;
//}


//class Solution {
//public:
//	static  int MoreThanHalfNum_Solution(vector<int> numbers) {
//		hash_map<int, int> val;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (val.find(numbers[i]) == val.end())
//				val.insert(make_pair(numbers[i], 1));
//			else
//				(val.find(numbers[i]))->second++;
//		}
//		int max = 0;
//		int ret = 0;
//		for (hash_map<int, int>::iterator it = val.begin(); it != val.end(); it++)
//		{
//			if (it->second > max)
//			{
//				max = it->second;
//				ret = it->first;
//			}
//		}
//		if (max > (numbers.size()/2))
//			return ret;
//		else
//			return 0;
//	}
//};
//int main()
//{
//	vector<int> v = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	cout << Solution::MoreThanHalfNum_Solution(v) << endl;
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	map<string, string> str;
//	string tmp;
//	string ch;
//	vector<int> vet;
//	string key;
//	int count = 0;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			vet.clear();
//			vet.resize(26);
//			ch.clear();
//			for (size_t j = 0; j < tmp.size(); ++j)
//			{
//				++vet[tmp[j] - 'a'];
//			}
//			for (size_t j = 0; j < tmp.size(); ++j)
//			{
//				while (vet[j]-- > 0)
//					ch += j + 'a';
//			}
//			str.insert(make_pair(tmp,ch));
//		}
//
//		cin >> key;
//		cin >> count;
//
//		int ret_count = 0;
//		vector<string> ret;
//
//		map<string, string>::iterator it = str.begin();
//		for (; it != str.end(); ++it)
//		{
//			if (key == it->second && key != it->first)
//			{
//				ret_count++;
//				ret.push_back(it->first);
//			}
//		}
//		cout << ret_count << ret[count - 1] << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	string str;
//	string ret;
//	while (cin >> str)
//	{
//		int key = 0;
//		int index = 0;
//		index = str.find('_');
//		if (index < 0)
//		{
//			cout << str << endl;
//			continue;
//		}
//		ret += str.substr(0, index);
//		int tmp = index;
//		while (true)
//		{
//			index = str.find('_', tmp + 1);
//			if (index < 0)
//			{
//				string c = str.substr(tmp + 1, str.size() - tmp - 1);
//				c[0] = c[0] - 32;
//				ret += c;
//				break;
//			}
//			else
//			{
//				string c = str.substr(tmp + 1, index - tmp - 1);
//				c[0] = c[0] - 32;
//				ret += c;
//				tmp = index;
//			}
//		}
//		cout << ret << endl;
//		ret.clear();
//	}
//
//	return 0;
//}
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		string ret;
//		int index = str.rfind(' ');
//		ret += str.substr(index + 1, str.size() - index);
//		while (true)
//		{
//			ret += ' ';
//			int tmp = index;
//			index = str.rfind(' ', index - 1);
//			if (index > 0)
//				ret += str.substr(index + 1, tmp - index - 1);
//			else
//			{
//				ret += str.substr(0, tmp);
//				break;
//			}
//				
//		}
//
//		cout << ret << endl;
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	vector<string> vet;
//	//string str;
//	set<string> ret;
//	string dir = "22233344455566677778889999";
//	int key = 0;
//	while (cin >> n)
//	{
//		if (key == 0)
//			key = 1;
//		else
//			cout << endl;
//
//		vet.resize(n);
//		for (int i = 0; i < n; i++)
//			cin >> vet[i];
//		for (int i = 0; i < n; i++)
//		{
//			string tmp;
//			for (int j = 0; j < vet[i].size(); j++)
//			{
//				if (vet[i][j] >= 'A' && vet[i][j] <= 'Z')
//					vet[i][j] = dir[vet[i][j] - 'A'];
//				if (vet[i][j] >= '0' && vet[i][j] <= '9')
//					tmp += vet[i][j];
//
//			}
//			tmp.insert(tmp.begin() + 3, '-');
//			ret.insert(tmp);
//		}
//
//		set<string>::iterator it = ret.begin();
//
//		for (; it != ret.end(); it++)
//		{
//			cout << *it << endl;
//			//if ()
//		}
//			
//	}
//
//
//	return 0;
//}



//void fun(vector<string> &_map, vector<vector<int>>& vet,int row, int col, int count)
//{
//	if (_map[row][col] == '#')
//		return;
//	vet[row][col] = count + 1;
//
//	if (_map[row + 1][col] != '#' && _map[row + 1][col] != '.' && vet[row + 1][col] + 1 < vet[row][col])
//		vet[row][col] = vet[row + 1][col];
//
//	if (_map[row - 1][col] != '#' && _map[row - 1][col] != '.' && vet[row - 1][col] + 1 < vet[row][col])
//		vet[row][col] = vet[row - 1][col];
//
//	if (_map[row][col + 1] != '#' && _map[row][col + 1] != '.' && vet[row][col + 1] + 1 < vet[row][col])
//		vet[row][col] = vet[row][col + 1];
//
//	if (_map[row][col - 1] != '#' && _map[row][col - 1] != '.' && vet[row][col - 1] + 1 < vet[row][col])
//		vet[row][col] = vet[row][col - 1];
//
//	count = vet[row][col];
//	fun(_map, vet, row + 1, col, vet[row][col]);
//	fun(_map, vet, row - 1, col, vet[row][col]);
//	fun(_map, vet, row, col + 1, vet[row][col]);
//	fun(_map, vet, row, col - 1, vet[row][col]);
//
//}
//
//int main()
//{
//	vector<string> _map;
//	//_map.resize(10);
//	string str;
//	
//
//	while (cin >> str)
//	{
//		_map.push_back(str);
//		for (int i = 1; i < 10; ++i)
//		{
//			cin >> str;
//			_map.push_back(str);
//		}
//		int row = 1;
//		int col = 1;
//		_map[0][1] = '#';
//		int count = 0;
//
//		vector<vector<int>> vet;
//		vet.resize(10);
//		for (int i = 0; i < vet.size(); i++)
//			vet[i].resize(10);
//		vet[1][1] = 1;
//		fun(_map, vet,row, col, count);
//		cout << vet[9][8] << endl;
//		_map.clear();
//	}
//
//	return 0;
//}



//class Gift {
//public:
//	static int getValue(vector<int> gifts, int n) {
//		// write code here
//		set<int> s;
//		for (int i = 0; i < gifts.size(); i++)
//		{
//			s.insert(gifts[i]);
//		}
//		set<int>::iterator first = s.begin();
//		first++;
//		int max = 0;
//		int val = 0;
//		int _max = 1;
//
//		while (first != s.end())
//		{
//			if (*first != *(first - 1))
//			{
//				if (_max > max)
//				{
//					max = _max;
//					val = *(first - 1);
//				}
//				_max = 0;
//			}
//			++_max;
//			++first;
//		}
//		return val;
//	}
//};
//int main()
//{
//	vector<int> v = { 1, 2, 3, 2, 2 };
//	int n = 5;
//	int ret = Gift::getValue(v, n);
//	cout << ret << endl;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int k = 0;
//	while (cin >> n >> m >> k)
//	{
//		vector<vector<int>> mp;
//		mp.resize(n);
//		for (int i = 0; i < n; ++i)
//		{
//			mp[i].resize(m, 1);
//		}
//
//
//		int row;
//		int col;
//		while (k > 0)
//		{
//			cin >> row >> col;
//			mp[row - 1][col - 1] = 0;
//			k--;
//		}
//
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < m; ++j)
//			{
//				if (mp[i][j] == 0)
//				{
//					for (int a = j; a < mp[i].size(); ++a)
//						mp[i][a] = 0;
//					break;
//				}
//			}
//		}
//		///////////////////////////////////////
//		for (int i = 1; i < n; ++i)
//		{
//			for (int j = 1; j < m; ++j)
//			{
//				mp[i][j] = mp[i - 1][j] + mp[i][j - 1];
//			}
//		}
//		float _no = mp[n - 1][m - 1];
//
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < m; ++j)
//			{
//				mp[i][j] = 1;
//			}
//		}
//		for (int i = 1; i < n; ++i)
//		{
//			for (int j = 1; j < m; ++j)
//			{
//				mp[i][j] = mp[i - 1][j] + mp[i][j - 1];
//			}
//		}
//		float max = mp[n - 1][m - 1];
//		float ret = _no / max;
//		printf("%.2f\n", ret);
//	}
//
//
//
//	return 0;
//}
//void Dofun(vector<string> &v, int row, int col, int &count)
//{
//
//	if (v[row][col] == '#')
//		return;
//
//	if (v[row][col] == '.' || v[row][col] == '@')
//	{
//		count++;
//		v[row][col] = '#';
//	}
//
//	if (row < v.size() - 1)
//		Dofun(v, row + 1, col, count);
//	if (row > 0)
//		Dofun(v, row - 1, col, count);
//	if (col < v[row].size() - 1)
//		Dofun(v, row, col + 1, count);
//	if (col > 0)
//		Dofun(v, row, col - 1, count);
//
//}
//int main()
//{
//
//	int _row;
//	int _col;
//	while (cin >> _row >> _col)
//	{
//		vector<string> v;
//		string str;
//		for (int i = 0; i < _row; i++)
//		{
//			cin >> str;
//			v.push_back(str);
//		}
//			//getline(v[i],cin);
//
//		int row;
//		int col;
//		int count = 0;
//		for (int i = 0; i < v.size(); i++)
//		{
//			for (int j = 0; j < v[i].size(); j++)
//			{
//				if (v[i][j] == '@')
//				{
//					row = i;
//					col = j;
//					//v[i][j] = '#';
//				}
//			}
//		}
//
//		Dofun(v, row, col, count);
//		cout << count << endl;
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	set<string> s;
//	s.insert("/usr/local/bin");
//	s.insert("/usr/bin");
//	s.insert("/usr/local/share/bin");
//	set<string>::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << endl;
//		it++;
//	}
//
//	return 0;
//}
/*
3
/a
/a/b
/a/b/c
3
/usr/local/bin
/usr/bin
/usr/local/share/bin


int main()
{
	int n = 0;
	string prev;
	string next;

	while (cin >> n)
	{
		cin >> prev;
		if (n < 2)
		{
			cout << "mkdir -p " << prev << endl << endl;
			continue;
		}
		cin >> next;
		for (int i = 1; i < n; ++i)
		{
			if (prev.size() < next.size() && next[prev.size()] == '/')
			{
				prev.swap(next);
				if (i < n - 1)
					cin >> next;
				else
					cout << "mkdir -p " << prev << endl;
			}
			else
			{
				cout << "mkdir -p " << prev << endl;
				if (i < n - 1)
				{
					prev.swap(next);
					cin >> next;
				}
				else
				{
					cout << "mkdir -p " << next << endl;
				}
			}
		}

		cout << endl;
	}
	return 0;
}

*/



//int main()
//{
//	int n = 0;
//	int max = 0;
//	int tmp = 0;
//	//vector<string> v;
//	string str;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> str;
//			cin >> str;
//			if (str == "connect")
//			{
//				tmp++;
//				if (tmp > max)
//					max = tmp;
//			}
//			else
//			{
//				tmp--;
//			}
//		}
//		cout << max << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string a;
//	string b;
//
//	while (cin >> a >> b)
//	{
//		long long a_child = 0;
//		long long a_mather = 0;
//		long long b_child = 0;
//		long long b_mather = 0;
//		for (int i = 0; i < a.find('/'); i++)
//		{
//			a_child *= 10;
//			a_child += a[i] - '0';
//		}
//		for (int i = a.find('/') + 1; i < a.size(); i++)
//		{
//			a_mather *= 10;
//			a_mather += a[i] - '0';
//		}
//		//
//		for (int i = 0; i < b.find('/'); i++)
//		{
//			b_child *= 10;
//			b_child += b[i] - '0';
//		}
//		for (int i = b.find('/') + 1; i < b.size(); i++)
//		{
//			b_mather *= 10;
//			b_mather += b[i] - '0';
//		}
//		cout << a_child << "/" << a_mather << endl;
//		cout << b_child << "/" << b_mather << endl;
//	}
//	return 0;
//}


//int main()
//{
//	vector<vector<int>> v = { { 2 }, { 3, 4 }, { 6, 5, 7 }, { 4, 1, 8, 3 } };
//	vector<vector<int>> bud(v);
//
//	bud[0][0] = v[0][0];
//	for (int i = 1; i < v.size(); i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//		{
//			if (j == 0)
//			{
//				bud[i][j] = bud[i - 1][j] + v[i][j];
//			}
//			else if (j == bud[i].size() - 1)
//			{
//				bud[i][j] = bud[i - 1][j - 1] + v[i][j];
//			}
//			else
//			{
//				bud[i][j] = min(bud[i - 1][j], bud[i - 1][j - 1]) + v[i][j];
//			}
//		}
//	}
//	int ret = bud[bud.size() - 1][0];
//	for (int i = bud.size() - 1, j = 0; j < bud[i].size(); ++j)
//	{
//		if (bud[i][j] < ret)
//			ret = bud[i][j];
//	}
//	cout << ret << endl;
//	return 0;
//}



//#ifndef BOOST_CHECKED_DELETE_HPP_INCLUDED
//#define BOOST_CHECKED_DELETE_HPP_INCLUDED
//
//// MS compatible compilers support #pragma once
//
//#if defined(_MSC_VER) && (_MSC_VER >= 1020)
//# pragma once
//#endif
//
////
////  boost/checked_delete.hpp
////
////  Copyright (c) 2002, 2003 Peter Dimov
////  Copyright (c) 2003 Daniel Frey
////  Copyright (c) 2003 Howard Hinnant
////
////  Distributed under the Boost Software License, Version 1.0. (See
////  accompanying file LICENSE_1_0.txt or copy at
////  http://www.boost.org/LICENSE_1_0.txt)
////
////  See http://www.boost.org/libs/utility/checked_delete.html for documentation.
////
//
//namespace boost
//{
//
//	// verify that types are complete for increased safety
//
//	template<class T> inline void checked_delete(T * x)
//	{
//		// intentionally complex - simplification causes regressions
//		typedef char type_must_be_complete[sizeof(T) ? 1 : -1];
//		(void) sizeof(type_must_be_complete);
//		delete x;
//	}
//
//	template<class T> inline void checked_array_delete(T * x)
//	{
//		typedef char type_must_be_complete[sizeof(T) ? 1 : -1];
//		(void) sizeof(type_must_be_complete);
//		delete[] x;
//	}
//
//	template<class T> struct checked_deleter
//	{
//		typedef void result_type;
//		typedef T * argument_type;
//
//		void operator()(T * x) const
//		{
//			// boost:: disables ADL
//			boost::checked_delete(x);
//		}
//	};
//
//	template<class T> struct checked_array_deleter
//	{
//		typedef void result_type;
//		typedef T * argument_type;
//
//		void operator()(T * x) const
//		{
//			boost::checked_array_delete(x);
//		}
//	};
//
//} // namespace boost
//
//#endif  // #ifndef BOOST_CHECKED_DELETE_HPP_INCLUDED
////////////////////////////////////////////////////////////////////////////////////
//
//#ifndef BOOST_SMART_PTR_SCOPED_PTR_HPP_INCLUDED
//#define BOOST_SMART_PTR_SCOPED_PTR_HPP_INCLUDED
//
////#include <boost/assert.hpp>
////#include <boost/checked_delete.hpp>
////#include <boost/detail/workaround.hpp>
//
//#ifndef BOOST_NO_AUTO_PTR
//# include <memory>          // for std::auto_ptr
//#endif
//
//namespace boost
//{
//
//	// Debug hooks
//
//#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)
//
//	void sp_scalar_constructor_hook(void * p);
//	void sp_scalar_destructor_hook(void * p);
//
//#endif
//
//
//	template<class T> class scoped_ptr // noncopyable
//	{
//	private:
//
//		T * px;
//
//		scoped_ptr(scoped_ptr const &);
//		scoped_ptr & operator=(scoped_ptr const &);
//
//		typedef scoped_ptr<T> this_type;
//
//		void operator==(scoped_ptr const&) const;
//		void operator!=(scoped_ptr const&) const;
//
//	public:
//
//		typedef T element_type;
//
//		explicit scoped_ptr(T * p = 0) : px(p) // never throws
//		{
//#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)
//			boost::sp_scalar_constructor_hook(px);
//#endif
//		}
//
//#ifndef BOOST_NO_AUTO_PTR
//
//		explicit scoped_ptr(std::auto_ptr<T> p) : px(p.release()) // never throws
//		{
//#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)
//			boost::sp_scalar_constructor_hook(px);
//#endif
//		}
//
//#endif
//
//		~scoped_ptr() // never throws
//		{
//#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)
//			boost::sp_scalar_destructor_hook(px);
//#endif
//			boost::checked_delete(px);
//		}
//
//		void reset(T * p = 0) // never throws
//		{
//			BOOST_ASSERT(p == 0 || p != px); // catch self-reset errors
//			this_type(p).swap(*this);
//		}
//
//		T & operator*() const // never throws
//		{
//			BOOST_ASSERT(px != 0);
//			return *px;
//		}
//
//		T * operator->() const // never throws
//		{
//			BOOST_ASSERT(px != 0);
//			return px;
//		}
//
//		T * get() const // never throws
//		{
//			return px;
//		}
//
//		// implicit conversion to "bool"
////#include <boost/smart_ptr/detail/operator_bool.hpp>
//
//		void swap(scoped_ptr & b) // never throws
//		{
//			T * tmp = b.px;
//			b.px = px;
//			px = tmp;
//		}
//	};
//
//	template<class T> inline void swap(scoped_ptr<T> & a, scoped_ptr<T> & b) // never throws
//	{
//		a.swap(b);
//	}
//
//	// get_pointer(p) is a generic way to say p.get()
//
//	template<class T> inline T * get_pointer(scoped_ptr<T> const & p)
//	{
//		return p.get();
//	}
//
//} // namespace boost
//
//#endif // #ifndef BOOST_SMART_PTR_SCOPED_PTR_HPP_INCLUDED
//int main()
//{
//	int * p = new int(10);
//	int j = 0;
//	typedef char type_must_be_complete[sizeof(int) ? 1 : -1];
//	j = (int) sizeof(type_must_be_complete);
//	int k = type_must_be_complete;
//	int i = sizeof(type_must_be_complete);
//	cout << i << endl;
//	return 0;
//}














//void Dofun(vector<string> &vet, string str)
//{
//	int flag = 0;
//	int begin = 0;
//	while (begin < str.size() - 1)
//	{
//		if ((const char)str[begin] != '\"')
//		{
//			flag = str.find(",",begin);
//			vet.push_back(str.substr(begin,flag - begin));
//			if (flag > 0)
//				begin = flag + 1;
//			else
//				begin = str.size();
//			while (begin < str.size() - 1 && str[begin] == ' ')
//				begin++;
//		}
//		else
//		{
//			flag = str.find('\"', begin + 1);
//			vet.push_back(str.substr(begin + 1,flag - begin - 1));
//			if (flag > 0)
//				begin = flag + 2;
//			else
//				begin = str.size();
//			while (begin < str.size() - 1 && str[begin] == ' ')
//				begin++;
//		}
//	}
//	
//}
//int main()
//{
//	string str;
//	string tmp;
//	int key = 0;
//	vector<string> vet;
//	while (getline(cin, str))
//	{
//		key = 0;
//		vet.clear();
//		getline(cin, tmp);
//		Dofun(vet, str);
//		for (int i = 0; i < vet.size(); i++)
//		{
//			if (vet[i] == tmp)
//			{
//				key = 1;
//				cout << "Ignore" << endl;
//				break;
//			}
//		}
//		if (key == 0)
//			cout << "Important!" << endl;
//		tmp.clear();
//		str.clear();
//	}
//	return 0;
//}


//Joe, Kewell, Leon
//Joe
//"Letendre, Bruce", Joe, "Quan, William"
//William
//int main()
//{
//	vector<string> vet;
//	string str;
//	int n = 0;
//	while (cin >> n)
//	{
//		str.clear();
//		vet.clear();
//		for (int i = 0; i < n + 1; i++)
//		{
//			getline(cin,str);
//			vet.push_back(str);
//			str.clear();
//		}
//		for (int i = 1; i < n + 1; i++)
//		{
//			if (i != 1)
//				cout << ", ";
//			if (vet[i].find(',') < (vet[i].size() - 1))
//			{
//				//cout << "find" << vet[i].find(',') << endl;
//				cout << "\"" << vet[i].c_str() << "\"" ;
//				continue;
//			}
//			cout <<vet[i].c_str();
//		}
//		cout << endl;
//		//system("pause");
//	}
//	return 0;
//}

//int main()
//{
//	string str = "hello world";
//	cout << str.find(' ') << endl;
//
//	return 0;
//}
//void prefix_table(char pattern[], int *prefix, int n)
//{
//	prefix[0] = 0;
//	int len = 0;
//	int i = 1;
//	while (i < n)
//	{
//		if (pattern[i] == pattern[len])
//		{
//			len++;
//			prefix[i] = len;
//			i++;
//		}
//		else {
//			if (len > 0)
//			{
//				len = prefix[len - 1];
//			}
//			else{
//				prefix[i] = len;
//				i++;
//			}
//
//		}
//	}
//}
//void move_prefix_table(int prefix[], int n)
//{
//	int i = 0;
//	for (i = n - 1; i > 0; i--)
//	{
//		prefix[i] = prefix[i - 1];
//	}
//	prefix[0] = -1;
//}
//void kmp_search(char text[], char pattern[],int *count)
//{
//	int n = strlen(pattern);
//	int *prefix = (int *)malloc(sizeof(int)* n);
//	int m = strlen(text);
//	int i = 0;
//	int j = 0;
//	prefix_table(pattern, prefix, n);
//	move_prefix_table(prefix, n);
//	while (i < m)
//	{
//		if (j == n - 1 && text[i] == pattern[j])
//		{
//			//printf("%d\n", i - j);
//			(*count)++;
//			j = prefix[j];
//		}
//
//		if (text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else{
//			j = prefix[j];
//			if (j == -1)
//			{
//				j++;
//				i++;
//			}
//		}
//	}
//
//}
//int main()
//{
//
//	//char text[] = "ABABABBABCDF";
//	//char pattern[] = "AB";
//	char text;
//	char pattern;
//	int count = 0;
//	while (scanf("%s%s", &text, &pattern))
//	{
//		count = 0;
//		kmp_search(&text, &pattern,&count);
//		printf("%d\n", count);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	string source;
//	string str;
//	int count = 0;
//	while (cin >> source >> str)
//	{
//		count = 0;
//		for (int i = 0; i <= source.size(); )
//		{
//			if (source[i] == str[0])
//			{
//				if (source.size() - i < str.size())
//					break;
//
//				int index1 = i + 1;
//				int index2 = 1;
//				while (index2 < str.size() && source[index1] == str[index2])
//				{
//					++index1;
//					++index2;
//				}
//				if (index2 == str.size())
//				{
//					i += str.size();
//					count++;
//				}
//				else
//					i++;
//			}
//			else
//				i++;
//		}
//		cout << count << endl;
//	}
//
//	return 0;
//}

//void prefix_table(char pattern[], int *prefix, int n)
//{
//	prefix[0] = 0;
//	int len = 0;
//	int i = 1;
//	while (i < n)
//	{
//		if (pattern[i] == pattern[len])
//		{
//			len++;
//			prefix[i] = len;
//			i++;
//		}
//		else {
//			if (len > 0)
//			{
//				len = prefix[len - 1];
//			}
//			else{
//				prefix[i] = len;
//				i++;
//			}
//
//		}
//	}
//}
//void move_prefix_table(int prefix[], int n)
//{
//	int i = 0;
//	for (i = n - 1; i > 0; i--)
//	{
//		prefix[i] = prefix[i - 1];
//	}
//	prefix[0] = -1;
//}
//void kmp_search(char text[], char pattern[])
//{
//	int n = strlen(pattern);
//	int *prefix = (int *)malloc(sizeof(int)* n);
//	int m = strlen(text);
//	int i = 0;
//	int j = 0;
//	prefix_table(pattern, prefix, n);
//	move_prefix_table(prefix, n);
//	while (i < m)
//	{
//		if (j == n - 1 && text[i] == pattern[j])
//		{
//			printf("%d\n", i - j);
//			j = prefix[j];
//		}
//
//		if (text[i] == pattern[j])
//		{
//			i++;
//			j++;
//		}
//		else{
//			j = prefix[j];
//			if (j == -1)
//			{
//				j++;
//				i++;
//			}
//		}
//	}
//
//}
//int main()
//{
//
//	char text[] = "aaaaaa";
//	char pattern[] = "aa";
//	kmp_search(text, pattern);
//
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	int tmp;
//	for(int count = 1; count <= 100000;count++) //(cin >> n)
//	{
//		int i = 1;
//		int j = 2;
//		n = count;
//		if (n < 3)
//		{
//			cout << n << endl;
//			continue;
//		}
//
//		while (n > 2)
//		{
//			tmp = j;
//			j = i + j;
//			i = tmp;
//			n--;
//			j %= 1000000;
//		}
//		cout << j << endl;
//	}
//	return 0;
//}
//bool isPrimes(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return false;
//	}
//	if (n == 1)
//		return false;
//	else
//		return true;
//}
//int main()
//{
//	vector<int> money = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	vector<int> before_day = { 31 };
//	int leap = 0;
//	int key = 0;
//	int from_year;
//	int from_month;
//	int from_day;
//	int to_year;
//	int to_month;
//	int to_day;
//	for (int i = 1; i < money.size(); i++)
//	{
//		before_day.push_back(before_day[i - 1] + money[i]);
//	}
//	for (int i = 0; i < money.size(); i++)
//	{
//		if (!isPrimes(i + 1))
//			money[i] *= 2;
//	}
//
//	while (cin >> from_year >> from_month >> from_day >> to_year >> to_month >> to_day)
//	{
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int year;
//	int week = 6;
//	int leap = 0;
//	int day = 1;
//
//	while (cin >> year)
//	{
//		day = 1;
//		leap = 0;
//		week = 6;
//
//		int tmp = year - 2000;
//		leap -= tmp / 100;
//		leap += tmp / 4;
//		leap = (tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? leap : leap + 1;
//		week = (week + 2 * leap + (tmp - leap)) % 7;
//		if (week == 0)
//			week = 7;
//
//		printf("%d-%02d-%02d\n", year, 1, day);//元旦
//		day = 1;
//
//		day += 13 + (week != 1 ? (7 - week + 2) : 1);//king
//		printf("%d-%02d-%02d\n", year, 1, day);
//		day = 1;
//
//		int two_week = (week + 31) % 7;
//		if (two_week == 0)
//			two_week = 7;
//		day += 13 + (two_week != 1 ? (7 - two_week + 2) : 1);//President
//		printf("%d-%02d-%02d\n", year, 2, day);
//		day = 1;
//
//		int six_week = (week + 31 + 28 + 31 + 30 + 31 +
//			((tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? 1 : 0)) % 7;
//		if (six_week == 0)
//			six_week = 7;
//		day = 31 - (7 - (7 - six_week + 1)) + 1;
//		printf("%d-%02d-%02d\n", year, 5, day);
//		day = 1;
//
//		printf("%d-%02d-%02d\n", year, 7, 4);
//
//		int nine_week = (week + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 +
//			((tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? 1 : 0)) % 7;
//		if (nine_week == 0)
//			nine_week = 7;
//		if (nine_week == 1)
//			day = 1;
//		else
//			day = 1 + (7 - nine_week + 1);
//		printf("%d-%02d-%02d\n", year, 9, day);
//		day = 1;
//
//		int ele_week = (week + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 +
//			((tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? 1 : 0)) % 7;
//
//
//		if (ele_week > 4)
//		{
//			day = 7 - ele_week + 4 + 21 + 1;
//		}
//		else if (ele_week == 4)
//		{
//			day = 1;
//		}
//		else
//		{
//			day = 4 - ele_week + 21 + 1;
//		}
//
//		printf("%d-%02d-%02d\n", year, 11, day);
//		printf("%d-%02d-%02d\n", year, 12, 25);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int year;
//	int flag;
//	int week = 6;
//	int leap = 0;
//	int day = 1;
//	//vector<string> out;
//	while (cin >> year)
//	{
//		//out.clear();
//		int tmp = year - 2000;
//		leap -= tmp / 100;
//		leap += tmp / 4;
//		leap = (tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? leap : leap + 1;
//		week = (week + 2 * leap + (tmp - leap)) % 7;
//		if (week == 0)
//			week = 7;
//
//		printf("%d-%02d-%02d\n", year, 1, day);//元旦
//		day = 1;
//
//		day += 13 + (week != 1 ? (7 - week + 2) : 1);//king
//		printf("%d-%02d-%02d\n", year, 1, day);
//		day = 1;
//
//		int two_week = (week + 31) % 7;
//		if (two_week == 0)
//			two_week = 7;
//		day += 13 + (two_week != 1 ? (7 - two_week + 2) : 1);//President
//		printf("%d-%02d-%02d\n", year, 2, day);
//		day = 1;
//
//		int six_week = (week + 31 + 28 + 31 + 30 + 31 +
//			((tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? 1 : 0)) % 7;
//		if (six_week == 0)
//			six_week = 7;
//		
//		day = 31 - (7 - (7 - six_week + 1)) + 1;
//		printf("%d-%02d-%02d\n", year, 5, day);
//
//		printf("%d-%02d-%02d\n", year, 7, 4);
//
//		int nine_week = (week + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 
//			((tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? 1 : 0)) % 7;
//		if (nine_week == 0)
//			nine_week = 7;
//		if (nine_week == 1)
//			day = 1;
//		else
//			day = 1 + (7 - nine_week + 1);
//		printf("%d-%02d-%02d\n", year, 9, day);
//		day = 1;
//
//		
//
//	}
	//while (cin >> year)
	//{
	//	//out.clear();
	//	int tmp = year - 2000;
	//	leap -= tmp / 100;
	//	leap += tmp / 4;
	//	leap = (tmp % 4 == 0 && (tmp % 100 != 0 || tmp % 400 == 0)) ? leap : leap + 1;
	//	week = (week + 2 * leap + (tmp - leap)) % 7;
	//	if (week == 0)
	//		week = 7;

	//	printf("%d-%02d-%02d\n", year, 1, day);//元旦
	//	day = 1;

	//	day += 13 + (week != 1 ? (7 - week + 2) : 1);
	//	//cout << year << "-" << 1 << "-"<< day << endl;
	//	printf("%d-%02d-%02d\n", year, 1, day);

	//}

//	return 0;
//}


//void swap(vector<int>& arr, int left, int right)
//{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//}
//
//void oddInOddEvenInEven(vector<int>& arr, int len) {
//	int flag = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (i % 2 == 0)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				continue;
//			}
//			else
//			{
//				flag = i + 1;
//				while (flag < len && arr[flag] % 2 != 0)
//				{
//					flag += 1;
//				}
//				if (flag < len)
//				{
//					swap(arr, flag, i);
//				}
//			}
//		}
//		else
//		{
//			if (arr[i] % 2 != 0)
//			{
//				continue;
//			}
//			else
//			{
//				flag = i + 1;
//				while (flag < len && arr[flag] % 2 == 0)
//				{
//					flag += 1;
//				}
//				if (flag < len)
//				{
//					swap(arr, flag, i);
//				}	
//			}
//		}
//	}
//}
//int main()
//{
//	vector<int> arr = { -1,5,6,8,-1,2,6};
//	oddInOddEvenInEven(arr, arr.size());
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//	return 0;
//}

#include<stdio.h>


//int main()
//{
//	int n = 0;
//	long long a = 1;
//	long long b = 0;
//
//	while (cin >> n)
//	{
//		a = 1;
//		b = 0;
//		if (n == 0)
//		{
//			break;
//		}
//		if (n == 1)
//		{
//			cout << 1 << ' ' << 1 << endl;
//			continue;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			a *= 5;
//		}
//		a -= 4;
//		b = a;
//
//		for (int i = 0; i < n; i++)
//		{
//			b = ((b - 1) / 5) * 4;
//		}
//		b += n;
//		cout << a << ' ' << b << endl;
//	}
//	return 0;
//}


//void doChange(string &str, vector<int> &v,int size)
//{
//	v.clear();
//	int count = size - str.size();
//	for (int i = 0; i < count; i++)
//	{
//		v.push_back(0);
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		v.push_back(str[i] - '0');
//	}
//}
//bool doJudge(vector<int> &a, vector<int> &b, vector<int> &c)
//{
//	vector<int> tmp;
//
//	for (int i = 0; i < b.size(); i++)
//	{
//		tmp.push_back(b[i] + c[i]);
//	}
//	
//	for (int i = b.size() - 1; i > 0; i--)
//	{
//		tmp[i - 1] += tmp[i] / 10;
//		tmp[i] = tmp[i] % 10;
//	}
//
//	for (int i = 0; i < tmp.size(); i++)
//	{
//		if (tmp[i] > a[i])
//		{
//			return true;
//		}
//		else if (tmp[i] < a[i])
//		{
//			return false;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int size;
//	string a;
//	string b;
//	string c;
//
//	vector<int> _a;
//	vector<int> _b;
//	vector<int> _c;
//
//	while (cin >> a >> b >> c)
//	{
//		size = max(a.size(), max(b.size(), c.size())) + 1;
//		doChange(a, _a, size);
//		doChange(b, _b, size);
//		doChange(c, _c, size);
//
//		if (doJudge(_a, _b, _c) && doJudge(_b, _a, _c) && doJudge(_c, _b, _a))
//		{
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//
//
//		a.clear();
//		b.clear();
//		c.clear();
//
//	}
//	return 0;
//}



//int main()
//{
//	int number;
//	cin >> number;
//	int ret = 1;
//	for (int i = 0; i < number - 2; i++)
//	{
//		ret *= 2;
//	}
//	cout << ret << endl; 
//
//	return 0;
//}



//int main()
//{
//	string n;
//	string r;
//	vector<int> num;
//	vector<int> rad;
//	vector<int> one;
//	vector<int> two;
//	vector<int> three;
//	vector<int> add;
//
//	while (cin >> n >> r)
//	{
//		num.clear();
//		rad.clear();
//		for (int i = 0; i < n.size(); i++)
//		{
//			num.push_back(n[i] - '0');
//		}
//		for (int i = 0; i < r.size(); i++)
//		{
//			rad.push_back(r[i] - '0');
//		}
//
//
//		//one
//		one.clear();
//		one.push_back(0);
//		for (int i = 1; i <= rad.size(); i++)
//		{
//			one.push_back(rad[i - 1] * 8);
//		}
//		for (int i = rad.size() - 1; i > 1; i--)
//		{
//			one[i - 1] += one[i] / 10;
//			one[i] = one[i] % 10;
//		}
//		//two
//		two.clear();
//		two.push_back(0);
//		for (int i = 1; i <= rad.size(); i++)
//		{
//			two.push_back(rad[i - 1] * 2);
//		}
//		for (int i = two.size() - 1; i > 1; i--)
//		{
//			two[i - 1] += two[i] / 10;
//			two[i] = two[i] % 10;
//		}
//		//three
//		three.clear();
//		three.push_back(0);
//		for (int i = 1; i <= rad.size(); i++)
//		{
//			three.push_back(rad[i - 1] * 6);
//		}
//		for (int i = three.size() - 1; i > 1; i--)
//		{
//			three[i - 1] += three[i] / 10;
//			three[i] = three[i] % 10;
//		}
//
//		/////////////////////////
//		add.clear();
//		add.push_back(three[0]);
//		add.push_back(three[1] + two[0]);
//		for (int i = 2; i < three.size(); i++)
//		{
//			add.push_back(three[i] + two[i - 1] + one[i - 2]);
//		}
//		add.push_back(two[two.size() - 1] + one[one.size() - 2]);
//		add.push_back(one[one.size() - 1]);
//		//////////////////////////////
//		for (int i = add.size() - 1; i > 1; i--)
//		{
//			add[i - 1] += add[i] / 10;
//			add[i] = add[i] % 10;
//		}
//		int count = 0;
//		for (int i = 0; add[i] == 0; i++)
//		{
//			count++;
//		}
//		/////////////////////////////
//		num.push_back(0);
//		num.push_back(0);
//		if (add.size() - count > num.size())
//		{
//			cout << "Yes" << endl;
//		}
//		else if (add.size() - count < num.size())
//		{
//			cout << "No" << endl;
//		}
//		else{
//			for (int i = count; i < add.size(); i++)
//			{
//				if (add[i] > num[i - count])
//				{
//					cout << "Yes" << endl;
//					break;
//				}
//
//				if (add[i] < num[i - 1])
//				{
//					cout << "No" << endl;
//					break;
//				}
//			}
//		}
//
//		n.clear();
//		r.clear();
//	}
//
//
//	return 0;
//}



//int main()树根
//{
//	int n = 0;
//	int num = 0;
//	int add = 0;
//
//	vector<int> v;
//	string str;
//
//	while (cin >> str)
//	{
//
//		for (int i = 0; i < str.size(); i++)
//		{
//			v.push_back(str[i] - '0');
//		}
//		
//		do{
//			add = 0;
//			for (int i = 0; i < v.size(); i++)
//			{
//				add += v[i];
//			}
//			num = add;
//			v.clear();
//			while (num > 0)
//			{
//				v.push_back(num % 10);
//				num /= 10;
//			}
//		} while (add / 10 != 0);
//		str.clear();
//		v.clear();
//		cout << add << endl;
//	}
//	return 0;
//}




//int main()
//{
//	register int i = 0;
//	int * p = &i;
//	*p = 3;
//	int *p1 = &(*p);
//	cout << "p" << p << endl;
//	cout << "p1" << p1 << endl;
//	return 0;
//}

//class Bonus {
//public:
//	int getMost(vector<vector<int> > board) {
//		// write code here
//		vector<vector<int>> arr;
//		arr.resize(board.size());
//		for (int i = 0; i < board.size(); i++)
//		{
//			arr[i].resize(board[0].size());
//		}
//
//		for (int i = 0; i < arr.size(); i++)
//		{
//			for (int j = 0; j < arr[i].size(); j++)
//			{
//				arr[i][j] = 0;
//			}
//		}
//		arr[0][0] = board[0][0];
//		for (int i = 1; i < arr.size(); i++)
//		{
//			arr[i][0] += arr[i - 1][0] + board[i][0];
//		}
//		for (int i = 1; i < arr[0].size(); i++)
//		{
//			arr[0][i] += arr[0][i - 1] + board[0][i];
//		}
//		for (int i = 1; i < arr.size(); i++)
//		{
//			for (int s = 1; s < arr[i].size(); s++)
//			{
//				int A = arr[i - 1][s] + board[i][s];
//				int B = arr[i][s - 1] + board[i][s];
//				arr[i][s] = max(A, B);
//			}
//		}
//		return arr[arr.size() - 1][arr[0].size() - 1];
//
//	}
//};


//bool fun(int arr[], int n, int S)
//{
//	vector<vector<bool>> subset(n);
//	for (int i = 0; i < subset.size(); i++)
//	{
//		subset[i].resize(S + 1);
//	}
//	for (int i = 0; i < S + 1; i++)
//	{
//		subset[0][i] = false;
//	}
//	subset[0][arr[0]] = true;
//	for (int i = 0; i < subset.size(); i++)
//	{
//		subset[i][0] = true;
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		for (int s = 1; s < S + 1; s++)
//		{
//			if (arr[i] > s)
//				subset[i][s] = subset[i - 1][s];
//			else
//			{
//				bool A = subset[i - 1][s - arr[i]];
//				bool B = subset[i - 1][s];
//				subset[i][s] = A || B;
//			}
//		}
//	}
//	return subset[n - 1][S];
//
//}
//
//int main()
//{
//	int arr[6] = { 3, 34,4, 12, 5, 2 };
//	int size = sizeof(arr) / sizeof(int);
//	int S = 9;
//	bool ret = fun(arr,size,S);
//	cout << ret << endl;
//	//max(2,3);
//	return 0;
//}
//int main()
//{
//	/*string s1;
//	string s2;*/
//	string s1 = "cafe";
//	string s2 = "coffee";
//	int min = 0;
//	//cin >> s1 >> s2;
//	vector<vector <int>> dp(s1.size() + 1, vector<int>(s1.size() + 1));
//	for (size_t i = 0; i < dp.size(); i++)
//	{
//		dp[i][0] = i;
//	}
//	for (size_t j = 0; j < dp[0].size(); j++)
//	{
//		dp[0][j] = j;
//	}
//	
//	for (size_t i = 1; i < dp.size(); i++)
//	{
//		for (size_t j = 1; j < dp[0].size(); j++)
//		{
//			if (s1[i - 1] == s1[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j - 1];
//			}
//			else
//			{
//				min = dp[i - 1][j] > dp[i][j - 1] ? dp[i][j - 1] :dp[i - 1][j] ; 
//				dp[i][j] = (min < dp[i - 1][j - 1] ? min : dp[i - 1][j - 1]) + 1;
//			}
//		}
//	}
//	cout << dp[dp.size() - 1][dp[0].size() - 1] << endl;
//	return 0;
//}

//int main()
//{
//	//vector<int> gifts = {1 ,2 ,2 ,5 ,3 ,4 };
//	vector<int> gifts = { 1, 2, 2, 5, 2, 2 };
//	int n = 6;
//	
//	int flag = 0;
//	vector<int> val;
//	vector<int> count;
//	int max = 0;
//	int index = -1;
//
//
//	val.push_back(gifts[0]);
//	count.push_back(0);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < val.size(); j++)
//		{
//			if (gifts[i] == val[j])
//			{
//				count[j]++;
//				break;
//			}
//			else if (j == val.size() - 1)
//			{
//				val.push_back(gifts[i]);
//				count.push_back(0);
//			}
//		}
//	}
//	for (int i = 0; i < count.size(); i++)
//	{
//		if (count[i] > max)
//		{
//			max = count[i];
//			index = i;
//		}
//	}
//	if (index == -1 || count[index] * 2 <= n)
//	{
//		return 0;
//	}
//	else{
//		return val[index];
//	}
//	return 0;
//
//}


//int main()
//{
//	int n = 0;
//	int c = 0;
//	int def = 0;
//	int tmp = 0;
//	vector<int> monster;
//	while (cin >> n >> def)
//	{
//		monster.clear();
//		//def = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			monster.push_back(tmp);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (def < monster[i])
//			{
//				c = def > monster[i] ? monster[i] : def;
//				while (def % c != 0 || monster[i] % c != 0)
//				{
//					c--;
//				}
//				def += c;
//			}
//			else
//			{
//				def += monster[i];
//			}
//		}
//		cout << def << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	string str;
//	int flag = 0;
//	//cin >> str;
//	while (cin >> str)
//	{
//		int arr[26] = { 0 };
//		flag = str.size();
//		for (int i = 0; i < str.size(); i++)
//		{
//			arr[str[i] - 'a'] += 1;
//		}
//		for (int i = 0; i < 26; i++)
//		{
//			if (arr[i] == 1)
//			{
//				for (int j = 0; j < str.size(); j++)
//				{
//					if (str[j] == i + 'a')
//					{
//						if (flag > j)
//						{
//							flag = j;
//						}
//					}
//				}
//			}
//		}
//		if (flag == str.size())
//		{
//			cout << -1 << endl;
//		}
//		else
//		{
//			cout << str[flag] << endl;
//		}
//	}
//	
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int upLine = 1;
//	int downLine = 4;
//	int flag = 1;
//	string str;
//
//	while (cin >> n)
//	{
//		cin >> str;
//		if (n < 4)
//		{
//			downLine = n;
//		}
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == 'U')
//			{
//				if (upLine == 1 && upLine == flag)
//				{
//					if (n < 4)
//					{
//						upLine = 1;
//					}
//					else
//					{
//						upLine = n - 3;
//					}
//					downLine = n;
//					flag = n;
//				}
//				else if (upLine == flag)
//				{
//					downLine--;
//					upLine--;
//					flag--;
//				}
//				else
//				{
//					flag--;
//				}
//			}
//			else
//			{
//				if (downLine == n && downLine == flag)
//				{
//					upLine = 1;
//					if (n < 4)
//					{
//						downLine = n;
//					}
//					else
//					{
//						downLine = 4;
//					}
//					flag = 1;
//				}
//				else if (downLine == flag)
//				{
//					downLine++;
//					upLine++;
//					flag++;
//				}
//				else
//				{
//					flag++;
//				}
//			}
//		}
//		for (int i = 0; i < 4 && i < n; i++)
//		{
//			printf("%d ", upLine + i);
//		}
//		cout << endl;
//		cout << flag << endl;
//	}
//	
//	return 0;
//}



//int main()
//{
//	int tmp = 0;
//	int count = 0;
//	int k;
//	int flag = 0;
//	int num = 0;
//	vector<int> in;
//	vector<int> left;
//	vector<int> right;
//	vector<int> out;
//	cin >> count;
//
//	while (count)
//	{
//		in.clear();
//		left.clear();
//		right.clear();
//		cin >> tmp;
//		flag = tmp;
//		tmp *= 2;
//		cin >> k;
//		while (tmp)
//		{
//			cin >> num;
//			in.push_back(num);
//			tmp--;
//		}
//		left = in;
//		for (int i = 0; k; i++)
//		{
//			out.clear();
//			for (int j = 0; j < flag; j++)
//			{
//				out.push_back(left[j]);
//				out.push_back(left[j + flag]);
//			}
//			left = out;
//			k--;
//		}
//		if (count == 1)
//		{
//			for (int i = 0; i < out.size() - 1; i++)
//			{
//				printf("%d ", out[i]);
//			}
//			printf("%d\n", out[out.size() - 1]);
//		}
//		else
//		{
//			for (int i = 0; i < out.size(); i++)
//			{
//				printf("%d ", out[i]);
//			}
//		}
//		
//		count--;
//	}
//
//	return 0;
//}


//int main()
//{
//	string str1;
//	string str2;
//	int flag = 0;
//	int size = 0;
//	int _size = 0;
//	int _flag = 0;
//	char *left = NULL;
//	char *right = NULL;
//
//	//cin >> str1;
//	//cin >> str2;
//	while (cin >> str1 >> str2)
//	{
//		if (str1.size() > str2.size())
//		{
//			str1.swap(str2);
//		}
//		for (int i = 0; i < str1.size(); i++)
//		{
//			for (int j = 0; j < str2.size(); j++)
//			{
//				if (str1[i] == str2[j])
//				{
//					size = 0;
//					flag = i;
//					left = &str1[i];
//					right = &str2[j];
//					while (left < &str1[str1.size()] && right < &str2[str2.size()] && *left == *right)
//					{
//						size++;
//						left++;
//						right++;
//					}
//					if (size > _size)
//					{
//						_size = size;
//						_flag = flag;
//					}
//				}
//			}
//		}
//		cout << str1.substr(_flag, _size) << endl;
//	}
//	
//
//	return 0;
//}
//abcsafjklmnopqrstuvw
//abcdefghijklmnop

//int main()
//{
//	int rabbat = 0;
//	int month = 0;
//	int mather = 1;
//	cin >> month;
//	queue<int> num;
//	num.push(0);
//	num.push(0);
//	if (month < 2)
//	{
//		cout << 1 << endl;
//		return 0;
//	}
//	for (int i = 0; i < month - 2; i++)
//	{
//		mather += num.front();
//		num.pop();
//		num.push(mather);
//	}
//	while (!num.empty())
//	{
//		rabbat += num.front();
//		num.pop();
//	}
//	rabbat += mather;
//	cout << rabbat << endl;
//	return 0;
//}



//int main()
//{
//	string str;
//	string _str;
//	int flag = 0;
//	int _flag = 0;
//	char next = NULL;
//	char _next = NULL;
//
//	getline(cin, str);
//	getline(cin, _str);
//
//	while (_flag < _str.size())
//	{
//		if (str[flag] != _str[_flag])
//		{
//			if (str[flag] == '?')
//			{
//				flag++;
//				_flag++;
//				if (_flag == _str.size())
//				{
//					printf("%s\n", "true");
//					return 0;
//				}
//			}
//
//			else if (str[flag] == '*')
//			{
//				if (str[flag + 1] == _str[_flag + 1] && flag + 1< str.size())
//				{
//					_flag++;
//					flag++;
//				}
//				else if (_flag == _str.size() - 1 && flag != str.size() - 1)
//				{
//					printf("%s\n", "false");
//					return 0;
//				}
//				else if (_flag == _str.size() - 1)
//				{
//					printf("%s\n", "true");
//					return 0;
//				}
//				else{
//					_flag++;
//				}
//			}
//			else
//			{
//				printf("%s\n", "false");
//				return 0;
//			}
//		}
//		else
//		{
//			flag++;
//			_flag++;
//		}
//
//	}
//	printf("%s\n", "true");
//	return 0;
//}


//int main()
//{
//	string addend;
//	string augend;
//	vector<int> add;
//	vector<int> aug;
//	string ret;
//
//	int size = 0;
//	int tmp = 0;
//	cin >> addend;
//	cin >> augend;
//
//	
//	for (int i = addend.size() - 1; i >= 0; i--)
//	{
//		add.push_back(addend[i] - '0');
//	}
//	for (int i = augend.size() - 1; i >= 0; i--)
//	{
//		aug.push_back(augend[i] - '0');
//	}
//
//	if (add.size() < aug.size())
//	{
//		for (int i = 0; i < add.size(); i++)
//		{
//			aug[i] += add[i];
//		}
//		aug.push_back(0);
//		for (int i = 0; i < aug.size(); i++)
//		{
//			aug[i] += tmp;
//			if (aug[i] > 9)
//			{
//				tmp = aug[i] / 10;
//				aug[i] = aug[i] % 10;
//			}
//			else
//			{
//				tmp = 0;
//			}
//		}
//		if (aug[aug.size() - 1] == 0)
//		{
//			aug.resize(aug.size() - 1);
//		}
//		for (int i = aug.size() - 1; i >= 0; i--)
//		{
//			ret.push_back(aug[i] + '0');
//		}
//		
//
//	}
//	else
//	{
//		for (int i = 0; i < aug.size(); i++)
//		{
//			add[i] += aug[i];
//		}
//		add.push_back(0);
//		for (int i = 0; i < add.size(); i++)
//		{
//			add[i] += tmp;
//			if (add[i] > 9)
//			{
//				tmp = add[i] / 10;
//				add[i] = add[i] % 10;
//			}
//			else
//			{
//				tmp = 0;
//			}
//		}
//		if (add[add.size() - 1] == 0)
//		{
//			add.resize(add.size() - 1);
//		}
//
//
//		for (int i = add.size() - 1; i >= 0; i--)
//		{
//			ret.push_back(add[i] + '0');
//		}
//	}
//	cout << ret << endl;
//
//	return 0;
//}

//class A{
//public:
//	A(){ p(); }
//	virtual void p(){ printf("A"); }
//	virtual ~A(){ p(); }
//};
//class B :public A{
//public:
//	B(){ p(); }
//	void p(){ printf("B"); }
//	~B(){ p(); }
//};
//int main()
//{
//	A* a = new B();
//	delete a;
//}



//int main()
//{
//	string str;
//	string left;
//	string right;
//	int flag_left[15] = { 0 };
//	int flag_right[15] = { 0 };
//	int left_boom = 0;
//	int right_boom = 0;
//
//	int flag = 0;
//	getline(cin, str);
//	flag = str.find('-');
//	left += str.substr(0, flag);
//	right += str.substr(flag + 1, str.size() - flag);
//
//	if (left.find("joker") != -1)
//	{flag_left[13] += 1;}
//	if (left.find("JOKER") != -1)
//	{flag_left[14] += 1;}
//
//	if (right.find("joker") != -1)
//	{flag_right[13] += 1;}
//	if (right.find("JOKER") != -1)
//	{flag_right[14] += 1;}
//
//
//
//	for (int i = 0; i < left.size(); i+=2)
//	{
//		if (left[i] == 'J'&& left[i + 1] != 'O')
//		{
//			flag_left[8] += 1;
//		}
//		else if (left[i] == 'Q')
//		{
//			flag_left[9] += 1;
//		}
//		else if (left[i] == 'K'&&left[i + 1] != 'E')
//		{
//			flag_left[10] += 1;
//		}
//		else if (left[i] == 'A')
//		{
//			flag_left[11] += 1;
//		}
//		else if (left[i] == '2')
//		{
//			flag_left[12] += 1;
//		}
//		else if (left[i] > '2')
//		{
//			flag_left[left[i] - '0' - 3] += 1;
//		}
//	}
//	for (int i = 0; i < right.size(); i++)
//	{
//		if (right[i] == 'J'&&right[i + 1] != 'O')
//		{
//			flag_right[8] += 1;
//		}
//		else if (right[i] == 'Q')
//		{
//			flag_right[9] += 1;
//		}
//		else if (right[i] == 'k'&&right[i + 1] != 'e')
//		{
//			flag_right[10] += 1;
//		}	
//		else if (right[i] == 'A')
//		{
//			flag_right[11] += 1;
//		}
//		else if (right[i] == '2')
//		{
//			flag_right[12] += 1;
//		}
//		else if (right[i] > '2')
//		{
//			flag_right[right[i] - '0' - 3] += 1;
//		}
//	}
//
//	if (flag_left[13] && flag_left[13] || flag_right[13] && flag_right[14])
//	{
//		cout << "joker JOKER" << endl;
//		return 0;
//	}
//	
//	for (int i = 0; i < 13; i++) ///// 4
//	{
//		if (flag_left[i] == 4)
//		{
//			left_boom = i + 1;
//			break;
//		}
//	}
//	for (int i = 0; i < 13; i++)
//	{
//		if (flag_right[i] == 4)
//		{
//			right_boom = i + 1;
//			break;
//		}
//	}
//	if (left_boom != 0 || right_boom != 0)
//	{
//		if (left_boom > right_boom)
//		{
//			cout << left << endl;
//		}
//		else
//		{
//			cout << right << endl;
//		}
//		return 0;
//	}
//
//
//	for (int i = 0; i < 13; i++)///////3
//	{
//		if (flag_left[i] == 3)
//		{
//			left_boom = i + 1;
//			break;
//		}
//	}
//	for (int i = 0; i < 13; i++)
//	{
//		if (flag_right[i] == 3)
//		{
//			right_boom = i + 1;
//			break;
//		}
//	}
//	if (left_boom != 0 || right_boom != 0)
//	{
//		if (left_boom > right_boom)
//		{
//			cout << left << endl;
//		}
//		else
//		{
//			cout << right << endl;
//		}
//		return 0;
//	}
//
//
//	for (int i = 0; i < 13; i++)///////2
//	{
//		if (flag_left[i] == 2)
//		{
//			left_boom = i + 1;
//			break;
//		}
//	}
//	for (int i = 0; i < 13; i++)
//	{
//		if (flag_right[i] == 2)
//		{
//			right_boom = i + 1;
//			break;
//		}
//	}
//	if (left_boom != 0 || right_boom != 0)
//	{
//		if (left_boom > right_boom)
//		{
//			cout << left << endl;
//		}
//		else
//		{
//			cout << right << endl;
//		}
//		return 0;
//	}
//
//
//
//
//	return 0;
//}


//int main() ///////////////////// 2020.3.17
//{
//	int n = 5;
//	int min = 0;
//	int _min = 0;
//	vector<int> left =  {1,1,1,1,1};
//	vector<int> right = {1,1,1,1,1};
//	int count = 0;
//
//	vector<int> left_tmp;
//	vector<int> right_tmp;
//	for (int i = 0; i < n; i++)
//	{
//		if (left[i] == 0 || right[i] == 0)
//		{
//			count += left[i];
//			count += right[i];
//			continue;
//		}
//		left_tmp.push_back(left[i]);
//		right_tmp.push_back(right[i]);
//	}
//	//left_tmp up 
//	for (int i = left_tmp.size(); i > 0; i--)
//	{
//		for (int j = 0; j < i - 1; j++)
//		{
//			if (left_tmp[j] > left_tmp[j + 1])
//			{
//				int tmp = left_tmp[j];
//				left_tmp[j] = left_tmp[j + 1];
//				left_tmp[j + 1] = tmp;
//			}
//		}
//	}
//	//right_tmp down
//	for (int i = right_tmp.size(); i > 0; i--)
//	{
//		for (int j = 0; j < i - 1; j++)
//		{
//			if (right_tmp[j] < right_tmp[j + 1])
//			{
//				int tmp = right_tmp[j];
//				right_tmp[j] = right_tmp[j + 1];
//				right_tmp[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 0; i++)
//	{
//		min += left_tmp[i];
//	}
//	for (int i = 0; i < right_tmp.size() - 1; i++)
//	{
//		min += right_tmp[i];
//	}
//	for (int j = 0; j < left_tmp.size(); j++)
//	{
//		for (int i = 0; i < 0; i++)
//		{
//			_min += left_tmp[i];
//		}
//		for (int i = 0; i < right_tmp.size() - 1; i++)
//		{
//			_min += right_tmp[i];
//		}
//		if (_min < min)
//		{
//			min = _min;
//		}
//	}
//	
//
//
//	count += 2 + min;
//	cout << count << endl;
//	return count;

	//for (int i = 0; i < n; i++)
	//{
	//	if (left[i] == 0 || right[i] == 0)
	//	{
	//		count += left[i];
	//		count += right[i];
	//		continue;
	//	}
	//	left_tmp.push_back(left[i]);
	//	right_tmp.push_back(right[i]);

	//}
	//for (int i = left_tmp.size(); i > 0; i--)
	//{
	//	for (int j = 0; j < i - 1; j++)
	//	{
	//		if (left_tmp[j] > left_tmp[j + 1])
	//		{
	//			int tmp = left_tmp[j];
	//			left_tmp[j] = left_tmp[j + 1];
	//			left_tmp[j + 1] = tmp;
	//		}
	//	}
	//}
	////right_tmp down
	//for (int i = right_tmp.size(); i > 0; i--)
	//{
	//	for (int j = 0; j < i - 1; j++)
	//	{
	//		if (right_tmp[j] < right_tmp[j + 1])
	//		{
	//			int tmp = right_tmp[j];
	//			right_tmp[j] = right_tmp[j + 1];
	//			right_tmp[j + 1] = tmp;
	//		}
	//	}
	//}
	//right_tmp.push_back(0);
	//min = right_tmp[0];
	//for (int i = 0; i <= left_tmp.size(); i++)
	//{
	//	_min = 0;
	//	for (int j = 0; j < i; j++)
	//	{
	//		_min += left_tmp[j];
	//	}
	//	for (int j = 0; j <= i; j++)
	//	{
	//		_min += right_tmp[j];
	//	}
	//	if (_min < min)
	//	{
	//		min = _min;
	//	}
	//}
	//return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int num = 1;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & (num << i))
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}

//int fun(vector<int>&num,int n)
//{
//
//}
//
//
//int main()
//{
//	int n = 0;
//	int tmp = 0;
//	int add = 0;
//	int mul = 0;
//
//	vector<int> num;
//	int count = 0;
//
//	cin >> n;
//	num.reserve(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tmp;
//		num.push_back(tmp);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		count += fun(num, i);
//	}
//
//
//	
//
//	return 0;
//}


//int fun(int year)
//{
//	if (year % 4 == 0)
//	{
//		if (year % 400 == 0)
//		{
//			return 1;
//		}
//		else if (year % 100 == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//	return 0;
//}
//int add(int *arr, int n)
//{
//	int day = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		day += arr[i];
//	}
//	return day;
//}
//int main()
//{
//	int key = 0;
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	int arr_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	cin >> year;
//	cin >> month;
//	cin >> day;
//
//	flag = fun(year);
//	arr_month[2] += flag;
//	key = add(arr_month, month);
//	cout << key + day << endl;
//	return 0;
//}

//class my
//{
//	friend ostream& operator<<(ostream & out, my tmp);
//public:
//	my(int i)
//	{
//		_val = i;
//	}
//	my operator++(int)
//	{
//		my tmp = _val;
//		_val++;
//		return tmp;
//	}
//	my& operator++()
//	{
//		_val++;
//		return *this;
//	}
//
//private:
//	int _val;
//};
//ostream& operator<<(ostream & out, my tmp)
//{
//	out << tmp._val;
//	return out;
//}
//void func( int& v1, int& v2,const int &v3,const int &v4)
//{
//	std::cout << v1 << ' ';
//	std::cout << v2 << ' ';
//	//v1++;
//	
//}

//void func( const my& v1, const my& v2)
//{
//	std::cout << v1 << ' ';
//	std::cout << v2 << ' ';
//	//v1++;
//	
//}
//int main()
//{
//	/*int i = 1;
//	int j = 0;*/
//	my i = 0;
//	func(++i,i++);
//	return 0;
//}

//void _printf(int n = 0, int flag = 0)
//{
//	if (flag == 0)
//		cout << "n == ";
//	else
//		cout << "     ";
//	for (int i = 31; i >= 0; i--)
//	{
//		cout << (n >> i) % 2;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	_printf(n);
//	cout << endl;
//	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
//	_printf(n);
//	_printf(0x55555555,1);
//	cout << endl;
//
//	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
//	_printf(n);
//	_printf(0x33333333,1);
//	cout << endl;
//
//	n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
//	_printf(n);
//	_printf(0x0f0f0f0f,1);
//	cout << endl;
//
//	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
//	_printf(n);
//	_printf(0x00ff00ff,1);
//	cout << endl;
//
//	n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
//	_printf(n);
//	_printf(0x0000ffff,1);
//	cout << endl;
//	cout << n << endl;
//
//
//
//	return n;
//}
//int main()
//{
//	string str;
//	int count = 1;
//	getline(cin, str);
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == '"')
//		{
//			while (str[i] != '"')
//			{
//				i++;
//			}
//			//str.insert(i,'\n');
//			i++;
//			if (i < str.size())
//			{
//				count++;
//				str[i] = '\n';
//			}
//		}
//		if (i < str.size() && str[i] == ' ')
//		{
//			count++;
//			str[i] = '\n';
//			//str.insert(i,'\n');
//		}
//	}
//	cout << str << endl;
//
//	return 0;
//}


//int main()
//{
//	size_t num = 0;
//	int max = 0;
//	int tmp = 0;
//	cin >> num;
//	num &= 255;
//	for (int i = 0; i < 8; i++)
//	{
//		tmp = 0;
//		while (i < 8 && (num >> i) % 2 == 1)
//		{
//			tmp++;
//			i++;
//		} if
//			(tmp > max)
//		{
//			max = tmp;
//		}
//	} 
//	cout << max << endl;
//	return 0;
//}


//class A
//{
//public :
//	virtual void func(int val = 12)
//	{
//		std::cout << "A->" << val << std::endl;
//	}
//	virtual void test()
//	{
//		func();
//	}
//};
//class B : public A
//{
//public :
//	void func(int val = 199)
//	{
//		std::cout << "B->" << val << std::endl;
//	}
//};
//int main(int argc, char* argv[])
//{
//	B*p = new B;
//	p->test();
//	system("pause");
//	return 0;
//}
//bool fun(int num)
//{
//	for (int i = 2; i*i <= num; i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int num = 0;
//	int n = 0;
//	int m = 0;
//
//	cin >> num;
//	n = num / 2;
//
//	m = num / 2;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (fun(n + i) && fun(m - i))
//		{
//			cout << n + i << endl;
//			cout << m - i << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	cout << "nihao" << endl;
//	return 0;
//}
//bool fun(int num)
//{
//	for (int i = 2; i*i <= num; i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}




//int main()
//{
//	size_t num = 0;
//	int max = 0;
//	int tmp = 0;
//
//	//cin >> num;
//	//num &= 255;
//	for (num = 0; num < 256; num++)
//	{
//		max = 0;
//		for (int i = 0; i < 8; i++)
//		{
//			tmp = 0;
//			while (i < 8 && (num >> i) % 2 == 1)
//			{
//				tmp++;
//				i++;
//			}
//			if (tmp > max)
//			{
//				max = tmp;
//			}
//		}
//
//		cout << "num = " << num << "    max = "<< max << endl;
//		//printf("num = %d  num_bin = %b  max = %d ", num, num, max);
//	}
//
//	
//
//	return 0;
//}

//int main()
//{
//	// write code here
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//
//	int btA[100] = { 0 };
//	int btB[100] = { 0 };
//	int countA = 0;
//	int countB = 0;
//
//	int A = a - 1;
//	int B = b - 1;
//
//	for (int i = 0; A > 0; i++)
//	{
//		btA[i] = A;
//		A = (A - 1) / 2;
//		countA++;
//	}
//	for (int i = 0; B > 0; i++)
//	{
//		btB[i] = B;
//		B = (B - 1) / 2;
//		countB++;
//	}
//
//	if (countA > countB)
//	{
//		
//		while (countB >= 0)
//		{
//			if (btA[countA] != btB[countB])
//			{
//				return btA[countA + 1] + 1;
//			}
//			countA--;
//			countB--;
//		}
//	}
//	else if (countA < countB)
//	{
//		
//		while (countA >= 0)
//		{
//			if (btA[countA] != btB[countB])
//			{
//				return btA[countA + 1] + 1;
//			}
//			countA--;
//			countB--;
//		}
//	}
//	else
//	{
//		
//		while (countA >= 0)
//		{
//			if (btA[countA] != btB[countB])
//			{
//				return btA[countA + 1] + 1;
//			}
//			countA--;
//			countB--;
//		}
//	}
//}

//int main()
//{
//	int mark = 0;
//	int len = 5;
//	int ch = 0;
//	int num = 0;
//	int sign = 0;
//	int size = 0;
//
//	int gift = 0;
//
//	string key;
//	getline(cin, key);
//	size = key.size();
//
//	size >= 8 ? len = 25 : (size >= 5 ? len = 10 : len);//length
//
//	for (int i = 0; i < size; i++)//char
//	{
//		if (key[i] >= 'a' && key[i] <= 'z')
//		{
//			ch |= 1;
//		}
//		else if (key[i] >= 'A' && key[i] <= 'Z')
//		{
//			ch |= 2;
//		}
//	}
//	if (ch == 0)
//	{
//		ch = 0;
//	}
//	else if (ch == 1 || ch == 2)
//	{
//		ch = 10;
//	}
//	else
//	{
//		ch = 20;
//	}
//
//	for (int i = 0; i < size; i++)//num
//	{
//		if (key[i] >= '0' && key[i] <= '9')
//		{
//			num++;
//		}
//	}
//	if (num == 1)
//	{
//		num = 10;
//	}
//	else if (num > 1)
//	{
//		num = 20;
//	}
//
//	for (int i = 0; i < size; i++)//sign
//	{
//		if ((key[i] >= 0x21 && key[i] <= 0x2f) ||
//			(key[i] >= 0x3a && key[i] <= 0x40) ||
//			(key[i] >= 0x5b && key[i] <= 0x60) ||
//			(key[i] >= 0x7b && key[i] <= 0x7e))
//		{
//			sign++;
//		}
//	}
//	if (sign > 1)
//	{
//		sign = 25;
//	}
//	else if (sign == 1)
//	{
//		sign = 10;
//	}
//
//	if (ch == 20 && num > 0 && sign > 0)//gift
//	{
//		gift = 5;
//	}
//	else if (ch > 0 && num > 0 && sign > 0)
//	{
//		gift = 3;
//	}
//	else if (ch > 0 && num > 0)
//	{
//		gift = 2;
//	}
//
//	mark = len + ch + num + sign + gift;
//	if (mark >= 90)
//	{
//		cout << "VERY_SECURE" << endl;
//	}
//	else if (mark >= 80)
//	{
//		cout << "SECURE" << endl;
//	}
//	else if (mark >= 70)
//	{
//		cout << "VERY_STRONG" << endl;
//	}
//	else if (mark >= 60)
//	{
//		cout << "STRONG" << endl;
//	}
//	else if (mark >= 50)
//	{
//		cout << "AVERAGE" << endl;
//	}
//	else if (mark >= 25)
//	{
//		cout << "WEAK" << endl;
//	}
//	else
//	{
//		cout << "VERY_WEAK" << endl;
//	}
//
//	cout << "key " << key << endl;
//	cout << "len " << len << endl;
//	cout << "ch" << ch << endl;
//	cout << "num " << num << endl;
//	cout << "sign " << sign << endl;
//	cout << "gift " << gift << endl;
//	cout << "mark " << mark << endl;
//
//	return 0;
//}
//int fun(int n, int m)
//{
//	if (n == 1 || m == 1)
//	{
//		return n + m;
//	}
//	else
//	{
//		return fun(n - 1, m) + fun(n, m - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//
//	cin >> m;
//	cin >> n;
//
//	int ret = fun(n, m);
//	cout << ret << endl;
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int key = 0;
//	cin >> n;
//	string str[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str[i];
//	}
//	for (int i = 1; i < n; i++)//length
//	{
//		if (str[i - 1].size() > str[i].size())
//		{
//			key += 1;
//			break;
//		}
//	}
//	for (int i = 1; i < n; i++)
//	{
//		if (strcmp(str[i - 1].c_str(), str[i].c_str()) > 0)
//		{
//			key += 2;
//			break;
//		}
//		if (strcmp(str[i - 1].c_str(), str[i].c_str()) > 0)
//		{
//			key += 2;
//			break;
//		}
//	}
//	switch (key)
//	{
//	case 0:
//		cout << "both" << endl;
//		break;
//	case 1:
//		cout << "lexicographically" << endl;
//		break;
//	case 2:
//		cout << "length" << endl;
//		break;
//	case 3:
//		cout << "none" << endl;
//	default:
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	string str;
//	getline(cin, str);
//	long long sum = 0;
//	int flag = 0;
//	int n = 0;
//	string::reverse_iterator it1 = str.rbegin();
//	while (it1 != str.rend())
//	{
//		if ((*it1 - '0') > 9)
//		{
//			return 0;
//		}
//		if (*it1 == '+')
//		{
//			return sum;
//		} if
//			(*it1 == '-')
//		{
//			return -sum;
//		} 
//			sum = sum + (*it1 - '0')*(int)pow(10, n);
//		n++;
//		it1++;
//	}
//	return sum;
//}
//int main() 
//{
//	int count = 0;
//	int num = 0;
//	int key = 0;
//	string str;
//	str.reserve(100);
//	getline(cin,str);
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+'))
//		{
//			return 0;
//		}
//	}
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			while (i < str.size() && str[i] >= '0' && str[i] <= '9')
//			{
//				num *= 10;
//				num += str[i] - 48;
//				i++;
//			}
//			if (i == str.size())
//			{
//				key % 2 == 1 ? num*(-1) : num;
//				return num;
//			}
//			else
//			{
//				return 0;
//			}
//			
//		}
//		else if (str[i] == '-')
//		{
//			key++;
//		}
//		else if (str[i] == '+')
//		{
//			;
//		}
//		else
//		{
//			return 0;
//		}
//
//	}
//	key % 2 == 1 ? num*(-1) : num;
//	return num;
//}

//int main()
//{
//	int size;
//	cin >> size;
//	vector<int> nums(size);
//	for (size_t i = 0; i < size; ++i)
//		cin >> nums[i];
//	int result = nums[0];
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		// 计算到num[i]的子数组的最大和
//		sum2 = sum1 >= 0 ? sum1 + nums[i] : nums[i];
//		if (sum2 > result)
//			result = sum2;
//		if (sum2 < 0)
//			sum2 = 0;
//		sum1 = sum2;
//	}
//	cout << result << endl;
//		return 0;
//}
//int main()
//{
//	int a;
//	float b;
//	float c;
//	scanf("%2d%3f%4f", &a, &b, &c);
//	printf("\na=%d,n=%d,c=%f", a, b, c);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	vector<int> num;
//	size_t _max = 0;
//	size_t max = 0;
//	int tmp = 0;
//	int flag = 0;
//
//	scanf("%d", &n);
//	num.reserve(n);
//
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		num.push_back(tmp);
//	}
//	if (n == 1)
//	{
//		printf("%d\n", num[0]);
//		return 0;
//	}
//	for (int i = 0; i + 1 < n; i++)
//	{
//		max = 0;
//		while (i + 1 < n && num[i] - num[i + 1] == 1)
//		{
//			max += num[i];
//			i++;
//			flag++;
//
//		}
//		if (i >= 1 && num[i] + 1 == num[i - 1])
//		{
//			max += num[i];
//		}
//		max > _max ? _max = max : max;
//
//		max = 0;
//		while (i + 1 < n && num[i] - num[i + 1] == -1)
//		{
//			max += num[i];
//			i++;
//			flag++;
//		}
//		if (i >= 1 && num[i] - 1 == num[i - 1])
//		{
//			max += num[i];
//			i--;
//		}
//		max > _max ? _max = max : max;
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		_max < num[i] ? _max = num[i] : _max;
//	}
//	printf("%u\n", _max);
//	
//
//	return 0;
//}
//int main()
//{
//	string A;
//	string B;
//	A.resize(100);
//	B.resize(100);
//	getline(cin, A);
//	getline(cin, B);
//	int flagA = 0;
//	int count = 0;
//	int max = 0;
//
//	string::iterator left = A.begin();
//	string::iterator right = A.end() - 1;
//	while (flagA < A.size())
//	{
//		max++;
//		count = 0;
//		left = A.begin();
//		right = A.end() - 1;
//
//		while (count < A.size() + B.size())
//		{
//			if (count == flagA)//switch in
//			{
//				left = B.begin();
//				//left = B.begin();
//
//			}
//			if (right - A.begin() == flagA)
//			{
//				right = B.end();
//			}
//
//			if (left == B.end())//switch out
//			{
//				left = A.begin() + flagA;
//			}
//			//right == B.begin();
//			if (right == B.begin())
//			{
//				right = A.begin() + flagA;
//			}
//
//			if (*left != *right)
//			{
//				max--;
//				break;
//			}
//			left++;
//			right--;
//			count++;
//		}
//		flagA++;
//	}
//	cout << max << endl;
//
//	return 0;
//}



//int main()
//{
//	unsigned M = 0;
//	unsigned N = 0;
//	char tmp = 0;
//	unsigned arr[32] = { 0 };
//	int size = 0;
//
//	scanf("%ud", &M);
//	scanf("%ud", &N);
//	//arr[size] = M%N;
//	if (N == 10)
//	{
//		printf("%u\n", M);
//		return 0;
//	}
//	while (M > 0)
//	{
//		arr[size] = M%N;
//		M /= N;
//		size++;
//	}
//	while (size > 0)
//	{
//		//pintf("%c",arr[size]);
//		if (arr[size - 1] <= 9)
//		{
//			printf("%c", arr[size - 1] + '0');
//		}
// 		else
//		{
//			printf("%c", arr[size - 1] - 10 + 'A');
//		}
//		size--;
//	}
//	putchar('\n');
//	return 0;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int AsubB = 0;
//	int BsubC = 0;
//	int AaddB = 0;
//	int BaddC = 0;
//	scanf("%d %d %d %d", &AsubB, &BsubC, &AaddB, &BaddC);
//	A = (AsubB + AaddB) / 2;
//	B = AaddB - A;
//	C = BaddC - B;
//	if (A + B == AaddB && A - B == AsubB && B - C == BsubC && B + C == BaddC)
//	{
//		printf("%d %d %d\n", A, B, C);
//		return 0;
//	}
//	else{
//		printf("No\n");
//		return 0;
//	}
//}



//class Solution {
//public:
//	Solution()
//	{}
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		vector<int> flag;// 标记下标的值
//		vector<int> num;//计数该值出现的次数
//		int flag_count = 0;
//		int max = 0;
//		int count = 0;
//
//		num.resize(numbers.size());
//		//flag.resize(numbers.size());
//		flag.push_back(numbers[count]);
//		//flag[flag_count] = numbers[count];
//		num[count]++;
//		count++;
//		
//		while (count < numbers.size())
//		{
//			flag_count = 0;
//			
//
//			while (flag_count < flag.size())
//			{
//				if (flag[flag_count] == numbers[count])
//				{
//					//flag_count = count;
//					break;
//				}
//				flag_count++;
//			}
//			if (flag_count == flag.size() && flag[flag_count - 1] != numbers[count])
//			{
//				flag.push_back(numbers[count]);
//			}
//			++num[flag_count];
//			++count;
//		}
//
//		max = num[0];
//		for (int j = 0; j < flag.size(); j++)
//		{
//			if (num[j] < num[j + 1])
//			{
//				max = num[j + 1];
//
//			}
//		}
//		return max;
//
//	}

//};


//int main()
//{
//	vector<int> me = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	Solution so;
//	int i = so.MoreThanHalfNum_Solution(me);
//	cout << i << endl;
//
//	return 0;
//}
//int main()
//{
//	//char str[255] = { 0 };
//	string str;
//	getline(cin, str);
//
//	int max = 0;
//	int tmp_size = 0;
//	int start = 0;
//	int count = 0;
//	int tmp = 0;
//	while (count < str.size())
//	{
//		
//		if (str[count] < '9' && str[count] > '0')
//		{
//			tmp = 0;
//			tmp_size = count;
//			while (str[count] <= '9' && str[count] >= '0')
//			{
//				tmp++;
//				count++;
//			}
//			
//		}
//		else
//		{
//			count++;
//		}
//		if (tmp > max)
//		{
//			max = tmp;
//			start = tmp_size;
//		}
//	}
//	cout << str.substr(start, max) << endl;
//
//	return 0;
//}

//int main()//逆序字符串
//{
//	int start;
//	int end;
//	int len = 0;
//
//	string str;//输入的字符串
//	string tmp;//输出的字符串
//	getline(cin, str);//不以空格为结束符进行输入
//	
//	start = str.rfind(' ');
//	end = str.size();
//
//	while (start > 0)
//	{
//		len = end - start - 1;
//		tmp += str.substr(start + 1, len);
//		tmp += ' ';
//		end = start;
//
//		start = str.rfind(' ',start - 1);
//	}
//	tmp += str.substr(0, str.find(' '));
//	cout << tmp << endl;
//	return 0;
//}


//int main()//排序子序列问题
//{
//	int n = 0;
//	int count = 0;
//	int tip = 0;
//	int bs = 0;
//	int tmp = 0;
//	scanf("%d", &n);
//	vector<int> ar;
//	ar.reserve(3 * n);
//	for (int i = 0; i < 3 * n; i++)//输入
//	{
//		cin >> tmp;
//		ar.push_back(tmp);
//	}
//
//	while (tip < n * 3 - 1 && ar[tip] == ar[tip + 1])//跳过相等的情况
//	{
//		tip++;
//	}
//	if (ar[tip] < ar[tip + 1])//确定开始的递增和递减的状态
//	{
//		bs = 0;
//		tip++;
//	}
//	else
//	{
//		bs = 1;
//		tip++;
//	}
//	count++;
//	while (tip < n * 3 - 1)//循环
//	{
//		while (bs == 1 && tip < n * 3 - 1)//递减的循环
//		{
//			if (ar[tip] < ar[tip + 1])//状态改变
//			{
//				count++;
//				tip++;
//				while (tip < n * 3 - 1&& ar[tip] == ar[tip + 1] )//消除相等的情况
//				{
//					tip++;
//				}
//				if (tip < n * 3 - 1 && ar[tip] < ar[tip + 1])//确定新的状态
//				{
//					bs = 0;
//				}
//				break;
//			}
//			tip++;
//		}
//		while (bs == 0 && tip < n * 3 - 1)//递增的循环
//		{
//			if (ar[tip] > ar[tip + 1])//状态改变
//			{
//				count++;
//				tip++;
//				while (tip < n * 3 - 1 && ar[tip] == ar[tip + 1])//消除相等
//				{
//					tip++;
//				}
//				if (tip < n * 3 - 1 && ar[tip] > ar[tip + 1])//确定新的状态
//				{
//					bs = 1;
//				}
//				break;
//			}
//			tip++;
//		}
//	}
//	//if ()
//	printf("%d\n", count);
//	return 0;
//
//}