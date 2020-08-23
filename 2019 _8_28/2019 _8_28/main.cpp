#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<time.h>
using namespace std;


class PokerHeap
{
	int PokerNum;
	int PokerColor;
public:
	int outPokerNum(int tmp)
	{
		PokerNum = tmp;
		return PokerNum;
	}
	int outPokerColor(int tmp)
	{
		PokerColor = tmp;
		return PokerColor;
	}
};


class poker
{
private:
	int _PokerNum;
	int _PokerColor;

	char * _PrintPokerColor()
	{
		switch (_PokerColor)
		{
		case 1:
			return "RedPeach";
			break;
		case 2:
			return "BlackPeach";
		case 3:
			return "RedDimond";
		case 4:
			return "BlackFlower";
		default:
			return "NULL";
		}
	}
	char * _PrintPokerNum()
	{
		if (_PokerNum < 11 && _PokerNum > 0)
		{
			char *arr[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };
			return arr[_PokerNum - 1];
		}
		else
		{
			switch (_PokerNum)
			{
			case 11:
				return "J";
			case 12:
				return "Q";
			case 13:
				return "K";
			default:
				return "NULL";
			}
		}
	}
public:
	void setPoker(int PokerNum, int PokerColor)
	{
		_PokerNum = PokerNum;
		_PokerColor = PokerColor;
	}
	int getNum()
	{
		return _PokerNum;
	}
	int getColor()
	{
		return _PokerColor;
	}
	void printPoker()
	{
		cout << _PrintPokerColor() << " " << _PrintPokerNum() << endl;
	}
	int showSize()
	{
		return _PokerNum;
	}
};


class player
{
private:
	int allPokerNum = 0;
	poker m_poker[18];
public:
	void addPoker(int PokerNum,int PokerColor)
	{
		m_poker[allPokerNum].setPoker(PokerNum, PokerColor);
		allPokerNum++;
	}

	void showPoker()
	{
		sortPoker();
		for (int i = allPokerNum - 1; i >= 0; i--)
		{
			m_poker[i].printPoker();
		}
	}
private:
	void sortPoker()
	{
		for (int i = allPokerNum - 1; i > 0;i--)
		{
			for (int j = 0; j < i;j++)
			{
				if (m_poker[j].showSize() > m_poker[ j + 1].showSize())
				{
					poker tmp = m_poker[j];
					m_poker[j] = m_poker[j + 1];
					m_poker[j + 1] = tmp;
				}
			}
		}
	}

};


void fun(player *people)
{
	PokerHeap ph;
	srand((unsigned)time(0));
	int num = 0;
	int color = 0;
	for (int i = 0; i < 18; i++)
	{
		num = rand() % 12 + 1;
		color = rand() % 3 + 1;
		people->addPoker(ph.outPokerNum(num), ph.outPokerColor(color));
	}
}

//int main()
//{
//	player p1;
//
//	fun(&p1);//给一名玩家分18张牌
//
//
//	p1.showPoker();
//	cout << "This p1" << endl << endl;
//
//
//	return 0;
//}

void PokerInit(int allPokerNum, player* p1, player* p2, player* p3 )// 给三名玩家分配牌
{
	int num = 1;
	int color = 1;
	poker tmp[100];
	int i = 0;
	for (num = 1; num < 14;num++)
	{
		for (color = 1; color < 5;color++)
		{
			tmp[i].setPoker(num, color);
			i++;
			if (i == allPokerNum)
			{
				break;
			}
		}
		if (i == allPokerNum)
		{
			break;
		}
	}
	for (i = 0; i < allPokerNum;i)
	{
		p1->addPoker(tmp[i].getNum(), tmp[i].getColor());
		i++;
		p2->addPoker(tmp[i].getNum(), tmp[i].getColor());
		i++;
		p3->addPoker(tmp[i].getNum(), tmp[i].getColor());
		i++;
	}

}
int main()
{
	int PokerNum = 54;
	int PlayerNum = 3;
	player p1, p2, p3;
	PokerInit(PokerNum, &p1, &p2, &p3);
	p1.showPoker();
	cout << endl;
	p2.showPoker();
	cout << endl;

	p3.showPoker();
	cout << endl;
	return 0;

}