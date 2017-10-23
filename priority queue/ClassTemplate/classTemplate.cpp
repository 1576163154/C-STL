#include<iostream>
#include<memory>
#include<vector>
using namespace std;

template<typename T> class Blob {
public:
	typedef T value_type;
	typedef vector<T>::size_type = size_type;



private:
	shared_ptr<vector<T>> data;
	void check(size_type i, const string& msg) const;


public:
	Blob() : data(make_shared<vector<T>>) {}
	Blob(std::initializer_list<T> il) : data(make_shared<vector<T>>(li)) {}

	size_type size() const {
		return data->size();
	}

	bool empty() const {
		return data->empty();
	}

	void push_back(const T& t) {
		data->push_back(t);
	}

	void push_back(T &&t) {
		data->push_back(std::move(t));
	}

	void pop_back();

	T& back();
	T& operator[](size_type i);
};

//∂®“Âcheck
template<typename T>
void Blob<T>::check(size_type i, const string& msg) const {
	if (i >= data->size()) {
		throw out_of_range(msg);
	}
}

template<typename T>
T& Blob<T>::back() {
	check(0, "back on empty Blob");
	return data->back();
}

template<typename T>
T& Blob<T>::operator[](size_type i) {
	check(i, "subscript out of range");
	return (*data)[i];
}

//pop_back
template<typename T>
void Blob<T>::pop_back() {
	check(0, "pop_back on empty Blob");
	data->pop_back();
}
void main() {
	Blob<int> bi = { 1,2,3 };
	cout << bi.size() << endl;

	system("pause");
}