#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stack>
#include<vector>


using namespace std;

template<class Type>
class TreeNode
{
public:
	TreeNode()
	{}
	TreeNode(Type _val) : val(_val), left(nullptr), right(nullptr), bf(0)
	{}
	~TreeNode()
	{}
public:
	TreeNode<Type> * left;
	TreeNode<Type> * right;
	Type val;
	int bf;

};

template<class Type>
class AVLTree
{
public:
	AVLTree() : head(nullptr)
	{}
	~AVLTree()
	{}

public:
	bool treePush(Type n)
	{
		stack<TreeNode<Type> *> st;

		TreeNode<Type> *ptr = head;
		TreeNode<Type> *up_ptr = nullptr;
		if (!head)
		{
			head = new TreeNode<Type>(n);
			return true;
		}
			

		while (ptr)
		{
			st.push(ptr);
			if (n > ptr->val)
				ptr = ptr->right;
			if (n < ptr->val)
				ptr = ptr->left;
			else
				return false;
		}
		ptr = new TreeNode<Type>(n);

		while (!st.empty())
		{
			up_ptr = st.top();
			st.pop();
			/*if (up_ptr->bf == 0)
				break;*/
			if (ptr == up_ptr->left)
				up_ptr->bf--;
			else
				up_ptr->right++;

			if (up_ptr->bf < -1 && ptr->bf < 0)
				rotaryR(up_ptr);
			else if (up_ptr->bf < -1 && ptr->bf > 0)
				rotaryLR(up_ptr);
			else if (up_ptr->bf > 1 && ptr->bf < 0)
				rotaryRL(up_ptr);
			else if (up_ptr->bf > 1 && ptr->bf > 0)
				rotaryL(up_ptr);

			ptr = up_ptr;
		}

	}

private:
	void rotaryL(TreeNode<Type> *& ptr)
	{
		cout << " L " << endl;
	}
	void rotaryR(TreeNode<Type> *& ptr)
	{
		cout << "R" << endl;
	}
	void rotaryLR(TreeNode<Type> *& ptr)
	{
		cout << "LR" << endl;
	}
	void rotaryRL(TreeNode<Type> *& ptr)
	{
		cout << "RL" << endl;
	}
private:
	TreeNode<int> *head;
};

int main()
{
	AVLTree<int> a;
	vector<int> test = { 5, 3, 4, 1, 7, 8, 2, 6, 0, 9 };
	for (int i = 0; i < test.size(); i++)
	{
		a.treePush(test[i]);
	}
	
	//a.treePush(2);
	
	//TreeNode<int> b(2);
	//TreeNode<int> * b = new TreeNode<int> (2);

	return 0;
}