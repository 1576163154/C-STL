#include<queue>
#include<iostream>
#include<string>

using namespace std;

struct  Strs
{
	string s;
	Strs(string s):s(s){}
};

//三个参数 priority_queue 新增
struct cmp {
	bool operator()(Strs a, Strs b) {
		return a.s[0] > b.s[0];
	}
};

bool operator<(Strs a, Strs b) {
	return a.s[0] > b.s[0];
}



void main() {
	priority_queue<int> q;//①


	//for (int i = 0; i<10; i++)
	//	q.push(i);
	//while (!q.empty())
	//{
	//	std::cout << q.top() << std::endl;
	//	q.pop();
	//}
	//for (int i = 9; i >= 0; i--)
	//{
	//	q.push(i);
	//}
	//q.push(-3);
	//while (!q.empty())
	//{
	//	std::cout << q.top() << std::endl;
	//	q.pop();
	//}


	//priority_queue<Strs> pqStr;//②
	//pqStr.push(*(new Strs("a")));
	//pqStr.push(*(new Strs("ca"))); 
	//pqStr.push(*(new Strs("ba"))); 
	//pqStr.push(*(new Strs("da")));
	//pqStr.push(*(new Strs("ea")));

	//while (!pqStr.empty()) {
	//	cout << pqStr.top().s << endl;
	//	pqStr.pop();
	//}

	priority_queue<Strs, vector<Strs>, cmp> pqStr2;//③
	pqStr2.push(*(new Strs("a")));
	pqStr2.push(*(new Strs("ca")));
	pqStr2.push(*(new Strs("ba")));
	pqStr2.push(*(new Strs("da")));
	pqStr2.push(*(new Strs("ea")));
	
	while (!pqStr2.empty()) {
		cout << pqStr2.top().s << endl;
		pqStr2.pop();
	}
	system("pause");
}