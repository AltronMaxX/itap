#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y;
    setlocale(LC_ALL,"Russian");
    cout << "������� x,y: " << endl;
    cin >> x,y;
    
    if (y == -abs(x))
    {
    	cout << "��";
	}
    else if ((y == -abs(x)) && (y <= -25))
    {
    	cout << "���";
	}
	/*
	else
	{
		cout << "�� �������";
	}
	*/
    return 0;
}
