#include<map>
#include<string>
#include<iostream>

using namespace std;

void main() {
	multimap<string, string> mm; //通讯录(姓名，电话，同一个姓名可能包含多个电话号码
	mm.insert(pair<string,string>("Tom", "2334343423434"));
	mm.insert(pair<string, string>("Tom", "12132323"));
	mm.insert(pair<string, string>("Anna", "343234"));

	std::multimap<string, string>::iterator iter = mm.begin();
	while (iter != mm.end()) {
		cout << (*iter).first << "," << (*iter).second << endl;
		iter++;
	}

	auto i = mm.find("Tom");
	if (i != mm.end()) {
		cout << (*i).first << "," << (*i).second << endl;
	}
	
	
	cout << "key个数：" << mm.count("Tom") << endl;
	int a = 5;
	cout << (a++) << endl;//然并卵 ！！！！！
	
	system("pause");
}