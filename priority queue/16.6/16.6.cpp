#include<iostream>

using namespace std;
template<typename T>
auto begin(T& i) {
	return i;
}

template<typename T>
auto end(T& i) {
	return i + sizeof(i) / sizeof(*i);
}


template<typename T>
void print( T& a) {
	auto begin = ::begin(a);
	auto end = ::end(a);
	while(begin != end) {
		cout << *begin << ",";
		begin++;
	}
}
void main() {
	int a[] = { 1,2,3, };
	print(a);

	system("pause");
}