#include<iostream>

using namespace std;

#define connect(n) i##n;

template<class _T1>
inline  void constructInPlace(_T1  *_Ptr)
{
	new (static_cast<void*>(_Ptr)) _T1();
}

#define BUFFER_CMD(cmd,name,len) char buffer##name[len];\
	cmd *name=(cmd *)buffer##name;constructInPlace(name);

//struct 变长数组成员
struct s {
	char* name;
	int count;
	int score[0];
};



void main() {
	
	BUFFER_CMD(s, one, 16384);
	one->name = "tom";
	one->count = 3;
	one->score[0] = 1;
	one->score[1] = 2;
	one->score[2] = 3;

	cout << sizeof(*one) << endl;
	cout << one->score[0] << endl;
	cout << one->score[1] << endl;
	cout << one->score[2] << endl;
	

	int i1 = 1;
	int i2 = 2;
	int i3 = 3;

	cout <<connect(2);
	system("pause");
}