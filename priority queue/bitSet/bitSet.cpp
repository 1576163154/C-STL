#include<set>
#include<string>
#include<iostream>

using namespace std;
void main() {
	set<int> si;
	for (int i = 3; i < 6; i++) {
		si.insert(i);
	}
	
	//�������
	auto i = si.begin();
	while (i != si.end()) {
		cout << *i << ",";
		i++;
	}
	cout << endl;


	//�������
	auto ri = si.rbegin();
	while (ri != si.rend()) {
		cout << *ri << ",";
			ri++;
	}

	system("pause");
}