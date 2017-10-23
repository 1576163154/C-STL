#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;
template<typename Iterater, typename Value> 
Iterater find(Iterater first, Iterater last, Value const& value) {
	for (; first != last; first++) {
		if (*first == value)
			return first;
	}
}

//16.5 template print
template<typename T,unsigned N>
void print(T(&a)[N]) {
	for (int i = 0; i < N; i++) {
		cout << a[i] << ",";
	}
}





void main() {
	vector<int> vi = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//auto iter = ::find(vi.cbegin(), vi.cend(), 8);
	//if (iter != vi.cend()) {
	//	cout << "ÕÒµ½ÁË£¡£¡" << endl;
	//}

	list<int> l = { 1,2,4,6,5 };
	
	
	auto is_in_list = l.cend() != ::find(l.cbegin(), l.cend(), 2);

	int a[5] = { 1,3,2,4,5 };
	print(a);

	cout << endl;
	char b[5] = { 'a','c','d','d','e' };
	print(b);
	system("pause");
}