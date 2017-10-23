#include<iostream>
#include<thread>
#include<utility>
#include<chrono>
#include<functional>
#include<atomic>
using namespace std;
void func1(){
	for (int i = 0; i < 5; i++) {
		cout << "Thread 1 is running!" << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}

}

void func2(int& n) {
	for (int i = 0; i < 5; i++) {
		cout << "Thread 2 is running!" << endl;
		++n;
		this_thread::sleep_for(chrono::milliseconds(1000));

	}
	
}
void main() {
	int n = 0;
	thread one(func1);
	thread two(func2,std::ref(n));
	thread three(std::move(two));
	one.join();
	three.join();

	cout << n << endl;

	thread threadj;
	cout << "before initialize ,joinable :" << threadj.joinable() << endl;
	threadj = thread(func1);
	cout << "after started joinable :" << threadj.joinable() << endl;
	threadj.join();
	cout << "after join(),joinable : " << threadj.joinable() << endl;
	
	system("pause");
}