#include <iostream>
#include <cmath>

using namespace std;

float distance(float x1, float x2,float y1, float y2){ // ���������� ������������ ���������� ����� 2-�� ������������
    return sqrt(((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));
}

float t(float a, float b, float c){ // ���������� true, ���� ��������, false � ��������� ������
    if (a < b+c){
        if (b < a+c){
            if (c < a+b){
                return true;
            }

            else{
                return false;
            }
        }

        else{
            return false;
        }
    }

    else{
        return false;
    }
}

/*

1)������ x1 x2 x3 y1 y2 y3 ��� ���� ����� ������������
2)��������� ����� ��������
3)��������� ����� �� ���� ����� �����������
4)Profit

*/
int main(){
    setlocale(LC_ALL,"Russian");

    bool dist;

    float x1,x2,x3,y1,y2,y3;
    
    cout << "������� ���������� x1,x2,x3,y1,y2,y3";
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    cout << endl;

    float dist1, dist2, dist3;
    dist1 = distance(x1,x2,y1,y2);
    dist2 = distance(x3,x2,y3,y2);
    dist3 = distance(x1,x3,y1,y3);

    bool t1;
    t1 = t(dist1, dist2, dist3);
    
    if (t1){// ��������� ����� �� �������� �����������
        cout << "����������� � ������� ��������� ����������";
    }
    else{
        cout << "������������ � ������� ��������� �� ����������";
    }
    
    return 0;    
}