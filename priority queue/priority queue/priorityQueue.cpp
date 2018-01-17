#include<queue>
#include<iostream>
#include<string>
#include<functional>

using namespace std;



//三个参数 priority_queue 新增
struct cmp {
	bool operator()(string a, string b) {
		return a[0] > b[0];
	}
};

bool operator<(string a, string b) {
	return a[0] > b[0];
}


template<typename T> void print_pq(T& q) {
	while (q.empty() == false) {
		cout << q.top() << " ";
		q.pop();
	}
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


	//priority_queue<string> pqStr;//②
	//pqStr.push(*(new string("a")));
	//pqStr.push(*(new string("ca"))); 
	//pqStr.push(*(new string("ba"))); 
	//pqStr.push(*(new string("da")));
	//pqStr.push(*(new string("ea")));

	//while (!pqStr.empty()) {
	//	cout << pqStr.top().s << endl;
	//	pqStr.pop();
	//}

	priority_queue<string, vector<string>, cmp> pqStr2;//③ 栈顶最小，其余情况并不保证有序
	pqStr2.push(*(new string("a")));
	pqStr2.push(*(new string("ca")));
	pqStr2.push(*(new string("ba")));
	pqStr2.push(*(new string("da")));
	pqStr2.push(*(new string("ea")));
	
	//while (!pqStr2.empty()) {
	//	cout << pqStr2.top().s << endl;
	//	pqStr2.pop();
	//}
	print_pq(pqStr2);


	priority_queue<int> pqi;
	for (auto i : { 1,8,5,6,3,4,0,9,7,2 })
		pqi.push(i);

	print_pq(pqi);//栈顶默认取当前最大元素


	//另外一种
	auto cmp2 = [] (int left, int right ) {
		return  (left ^ 1) < (right ^ 1);
	};

	//0001  0010 0011 0100 0101 0110 0111 1000 1001
	//	0001
	//
	//	1            3       3        5        5       7        7       9        9

	priority_queue<int, vector<int>, decltype(cmp2)>  pqi2(cmp2);
	for (auto i : { 1,8,5,6,3,4,0,9,7,2 })
		pqi2.push(i);

	cout << endl;
	print_pq(pqi2);
	system("pause");
}