#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Vector {
	T* arr;
	int size;

public:
	Vector() {
		size = 0;
		arr = nullptr;
	}
	Vector(int size, T value) {
		this->size = size;
		this->arr = new T[size];
		for (int i = 0; i < size; i++)
			arr[i] = value;
	}
	~Vector() {
		if (size > 0)
		{
			delete[] arr;
			size = 0;
		}
	}

	int getSize() const { return size; }
	void print()const {
		if (size == 0)
			cout << "Array is empty\n";
		else
		{
			for (int i = 0; i < size; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
	}

	void push_back(T item) {
		T* tmp = new T[size + 1];
		for (int i = 0; i < size; i++)
			tmp[i] = arr[i];
		tmp[size] = item;
		if (arr != nullptr) delete[] arr;
		arr = tmp;
		size++;
	}

	T& operator[](int number) { return arr[number]; }

	T find_max()const {
		T max = arr[0];
		for (int i = 1; i < size; i++)
			if (arr[i] > max) max = arr[i];
		return max;
	}
	T find_min()const {
		T min = arr[0];
		for (int i = 1; i < size; i++)
			if (arr[i] < min) min = arr[i];
		return min;
	}

};
