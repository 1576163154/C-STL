#include<string>
#include<iostream>
using namespace std;


void main() {

	string str1 = "[db]";
	string str2 = "host=127.0.0.1";
	//省略空格处理
	//string db;
	//if (str1[0] == '[' && str1[str1.size() - 1] == ']') {
	//	db = str1.substr(1, str1.size() - 2);
	//}

	//size_t pos = str2.find('=');
	//cout << pos << endl;
	//string left = str2.substr(0, pos);
	//string right = str2.substr(pos + 1, str2.size() - pos - 1);

	//cout << db << endl;
	//cout << left << endl;
	//cout << right << endl;

	/*char szServer[16];
	memset(szServer, 0, sizeof(szServer));
	snprintf(szServer, sizeof(szServer), "server_%d", 4);*/

	char* str = "8";
	cout << *(unsigned short*)str;
	system("pause");
}