#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
  setlocale(LC_ALL,"Russian");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  string str;
  string word = "";
  cout << "������� ������:" << endl;
  getline(cin, str);

  char c;
  cout << "������� ������:" << endl;
  cin >> c;

  string comp = " ,.;!?";
  bool f = false;

  for (int i = 0; i < str.size(); ++i){//�������� �� ������
    if (str[i] == c){//���� ������� ������ ������ �������� �����
      int k = str.find_first_of(comp, i+1);//����������, ������� ������ ������� ���������� ����� �����
      if (str[i] == str[k-1] && i != k-1){//���� ��� �� �������� ������ ������ � ��������� ������ ����� ����� �������
        for (int j = i; j < k; j++){//������� ��� �����
          cout << str[j];
          f = true;
        }
        cout << endl;
      }
    }
  }

  if(!f) {//���� ����� ���� ��� - �������
    cout << "� ������ �� ������� ����� ����!";
  }

  return 0;
}

/*
test_input:
1) hello. level, kayak, world!
   l
2) ����; �����, ������; �����! ������?
   �

test_output:
1) level
2) �����
*/