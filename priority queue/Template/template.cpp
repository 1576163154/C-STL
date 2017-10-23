#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

//模板函数
template <typename T>
int compare(const T& a, const T& b) {
	if (b < a) {
		return 1;
	}
	else if (a < b) {
		return -1;
	}
	else
		return 0;
}

template<unsigned N,unsigned M>
int compareArray(const char(&a)[N], const char(&b)[M]) {
	cout << N << "," << M << endl;
	return strcmp(a, b);
}

class Sales_data {
public:
	Sales_data(){}
	~Sales_data(){}

private:
	int price;

};

void main() {
	vector<int> v1 = { 3,16,3 };
	vector<int> v2 = { 1,34,4 };

	cout << compare(1, 0) << endl;
	cout << compare(0.2, 2.1) << endl;
	cout << compare(v1, v2) << endl;

	cout << compareArray("hi", "fjd") << endl;
	Sales_data s1;
	Sales_data s2;


	//compare(s1, s2);//Sales_data类没有定义 < 运算符
	
	system("pause");
}