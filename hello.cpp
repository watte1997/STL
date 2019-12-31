// hello.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> v;
	for (int i = 0; i < 20; i++)
		v.push_back(i);
	vector <int>::iterator i;
	for ( i = v.begin(); i !=v.end(); i++)
	{
		cout << *i << " ";
		*i *= 2;
	}
	cout << endl;
	for (vector <int>::reverse_iterator j=v.rbegin(); j!=v.rend() ; j++)
	{
		cout << *j << " ";
	}
	return 0;
}


