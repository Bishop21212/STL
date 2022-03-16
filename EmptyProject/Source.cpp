#include<iostream>
#include<array>
#include<vector>
using namespace std;
#define tab "\t"
#define delimeter "\n-----------------------------\n"
#define STL_DEQUE
//#define STL_ARRAY
//#define STL_VECTOR
int main()
{
	setlocale(LC_ALL, "");
#ifdef STL_ARRAY
	std::array<int,5>arr = { 3,5,8,13,21 };
	for (int i{ 0 }; i < arr.size(); ++i)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // STL_ARRAY

#ifdef STL_VECTOR
	//VECTOR - КОНТЕЙНЕР хранит данные в виде динамического массива
	std::vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i{ 0 }; i < vec.size(); ++i)
	{
		cout << vec[i] << tab;
	}
	cout << endl;

	vec.resize(12);
	cout << "Size:   " << vec.size() << endl;
	cout << "MaxSize:   " << vec.max_size() << endl;
	cout << "Capacity:   " << vec.capacity() << endl;
	cout << delimeter << endl;
	vec.push_back(55);
	cout << "Size:   " << vec.size() << endl;
	cout << "MaxSize:   " << vec.max_size() << endl;
	cout << "Capacity:   " << vec.capacity() << endl;
	cout << delimeter << endl;

	try
	{
		//throw "My exeption";
		throw 4;
		for (int i{ 0 }; i < vec.capacity(); ++i)
		{
			//cout << vec[i] << tab;
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	catch (const char* e)
	{
		cerr << e << endl;
	}
	catch (int e)
	{
		cerr << "Error # " << e << endl;
	}
	catch (...)
	{
		cerr << "Something happened" << endl;
	}

	cout << "NUll element: " << vec.front() << endl;
	cout << "Posledni element: " << vec.back() << endl;
	int* p_arr = vec.data();

	vec.assign({ 1,2,4,8,16,32 });
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end();++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	for(std::vector<int>::reverse_iterator rit = vec.rbegin();rit!=vec.rend();++rit)
	{
		cout << *rit << tab;
	}
	cout << endl;
	cout << "Size:   " << vec.size() << endl;
	cout << "MaxSize:   " << vec.max_size() << endl;
	cout << "Capacity:   " << vec.capacity() << endl;
	cout << delimeter << endl;
	int index;
	int value;
	cout << "index: "; cin >> index;
	cout << "Element: "; cin >> value;
	cout << "Count: "; cin >> count;
	std::vector<int>::const_iterator position = vec.begin() + index;
	vec.insert(vec.begin() + index,count,value);
	for (int i : vec)cout << i << tab; cout << endl;


#endif // STL_VECTOR
	
#ifdef STL_DEQUE

#endif // STL_DEQUE

}