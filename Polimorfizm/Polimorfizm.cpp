#include <iostream>
using namespace std;

class Paint 
{
protected:
	string slash = "/";
	string slash_2 = "\\";
	string star = "*";
	string plus = "+";
public:
	virtual void print() 
	{}
};


class Tree_plus : public Paint
{
public:
	virtual void print() 
	{
		cout << " " + slash + slash_2 + " ";
		cout << endl;
		cout << slash + plus + plus + slash_2;
		cout << endl;
	}
};

class Tree_star : public Paint
{
public:
	virtual void print()
	{
		cout << " " + slash + slash_2 + " ";	
		cout << endl;
		cout << slash + star + star + slash_2;
		cout << endl;
	}
};

class Tree_slash : public Paint
{
public:
	virtual void print()
	{
		cout << " " + slash + slash_2 + " ";
		cout << endl;
		cout << slash + slash + slash_2 + slash_2;
		cout << endl;
	}
};
int main()
{
	Tree_plus p;
	Tree_star s;
	Tree_slash sl;
	Tree_plus* var1 = &p;
	Tree_star* var2 = &s;
	Tree_slash* var3 = &sl;
	Paint* arr[3]{var1,var2,var3};
	for (size_t i = 0; i < 3; i++)
	{
		arr[i]->print();
	}
}