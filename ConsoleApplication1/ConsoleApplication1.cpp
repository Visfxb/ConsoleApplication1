//#include "Vector.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//int main()
//{
//	Vector <int> a;
//	Vector <float> b(4, 3.14);
//	a.print();
//	b.print();
//	cout << "--------------------------------\n";
//	a.push_back(256);
//	a.push_back(-2);
//	b.push_back(2.71);
//	b.push_back(0.01);
//	a.print();
//	b.print();
//	cout << "--------------------------------\n";
//	a[0] = 1;
//	b[0] = 1.11;
//	a.print();
//	b.print();
//	cout << "--------------------------------\n";
//	cout << "Size: " << a.getSize() << "  Last: " << a[a.getSize() - 1] << endl;
//	cout << "Size: " << b.getSize() << "  Last: " << b[b.getSize() - 1] << endl;
//	cout << "--------------------------------\n";
//	cout << "Max: " << a.find_max() << "  Min: " << a.find_min() << endl;
//	cout << "Max: " << b.find_max() << "  Min: " << b.find_min() << endl;
//	return 0;
//}

int main()
{
	vector<int> v;

	for (int i = 0; i < 20; i++)
		v.push_back(rand() % 100 - 50);
	
	
	//for (int i = 0; i < v.size(); i++)
	//	cout << v[i] << " ";
	//cout << endl;
	//
	//for (iter = v.begin(); iter != v.end(); iter++)
	//	cout << *iter << " ";
	//cout << endl;
	//
	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;
	//
	//for (int& item : v)
	//	cout << item << " ";
	//cout << endl;
	//
	//for (auto item : v)
	//	cout << item << " ";
	//cout << endl;

	//for (auto item : v)
	//	cout << item << " ";
	//cout << endl;
	//
	//cout << "-----------------------------\n";
	//cout << "Task 1\n";
	//it = v.begin() + v.size() / 2;
	//it = v.insert(it, 6, 0);
	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;

	//cout << "-----------------------------\n";
	//cout << "Task 2\n";
	//v.erase(v.begin() + v.size() / 2, v.end());
	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;

	//cout << "-----------------------------\n";
	//cout << "Task 3\n";
	//cout << "Max: " << *max_element(v.begin(), v.end()) << endl;
	//cout << "Min: " << *min_element(v.begin(), v.end()) << endl;

	//cout << "-----------------------------\n";
	//cout << "Task 4\n";
	//replace_if(v.begin(), v.begin() + v.size() / 2, [](int item) {return item < 0; }, -1);
	//replace_if(v.begin() + v.size() / 2, v.end(), [](int item) {return item > 0; }, 1);
	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;

	//cout << "-----------------------------\n";
	//cout << "Task 5\n";
	//remove_if(v.begin(), v.begin() + v.size() / 2, [](int item) {return item == -1; });
	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;

	//cout << "-----------------------------\n";
	//cout << "Task 6\n";
	//v[2] = 0;
	//v[4] = 0;
	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;

	//it = find(v.begin(), v.end(), 0);
	//if (it == v.end()) cout << "Not found\n";
	//else
	//{
	//	it = find(it + 1, v.end(), 0);
	//	if (it == v.end()) cout << "Not found second\n";
	//	else v.erase(it);
	//}

	//for (int item : v)
	//	cout << item << " ";
	//cout << endl;



	vector<int>::iterator it;





}