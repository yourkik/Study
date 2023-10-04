//https://wikidocs.net/17145 (���� ����Ʈ)


//#include <iostream>
//using namespace std;
//
//class SimpleClass
//{
//private:
//    int num1;
//    int num2;
//public:
//    SimpleClass(int n1 = 0, int n2 = 0)  // ������ 4
//    {
//        num1 = n1;
//        num2 = n2;
//    }
//
//    void Show() const
//    {
//        cout << num1 << ' ' << num2 << endl;
//    }
//
//};
//
//
//int main(void)
//{
//    SimpleClass sc1;  // ������ 4 ȣ��. ����Ʈ �� ���
//    sc1.Show();
//
//    SimpleClass sc2(100);  // ������ 4 ȣ��, ù ��� �� ����
//    sc2.Show();
//
//    SimpleClass sc3(100, 200);  // ������ 4 ȣ��, �� ��� ����� �� ����
//    sc3.Show();
//
//    system("pause");  // VC++ ������ ���
//
//    return 0;
//}



////�����Ҵ�
//#include <iostream>
//using namespace std;
//
//class SimpleClass
//{
//private:
//    int num1;
//    int num2;
//public:
//    SimpleClass(int n1 = 0, int n2 = 0)  // ������ 4
//    {
//        num1 = n1;
//        num2 = n2;
//    }
//
//    void Show() const
//    {
//        cout << num1 << ' ' << num2 << endl;
//    }
//
//};
//
//
//int main(void)
//{
//    SimpleClass* psc1 = new SimpleClass;
//    psc1->Show(); // �����͸� ���� ���� ����
//
//    SimpleClass* psc2 = new SimpleClass(100);
//    psc2->Show();
//
//    SimpleClass* psc3 = new SimpleClass(100, 200);
//    psc3->Show();
//
//    delete psc1, psc2, psc3;
//
//    system("pause");  // VC++ ������ ���
//
//    return 0;
//}




//Ŭ���� ����� Ŭ���� �� �� ������ ȣ�� ��
////point.h
//#ifndef __POINT_H__
//#define __POINT_H__
//
//class Point
//{
//private:
//    int x;
//    int y;
//public:
//    Point(const int& xpos, const int& ypos);
//    int GetX() const;
//    int GetY() const;
//    bool SetX(int xpos);
//    bool SetY(int ypos);
//};
//
//#endif

////Point.cpp
//#include <iostream>
//#include "Point.h"
//
//using namespace std;
//
//// Ŭ���� Point�� ������
//Point::Point(const int& xpos, const int& ypos)//��
//{
//    x = xpos;
//    y = ypos;
//}
//
//int Point::GetX() const
//{
//    return x;
//}
//
//int Point::GetY() const
//{
//    return y;
//}
//
//bool Point::SetX(int xpos)
//{
//    if (xpos < 0 || xpos > 100)
//    {
//        cout << "��� ������ �� ����" << endl;
//        return false;
//    }
//    x = xpos;
//    return true;
//}
//
//bool Point::SetY(int ypos)
//{
//    if (ypos < 0 || ypos > 100)
//    {
//        cout << "��� ������ �� ����" << endl;
//        return false;
//    }
//    y = ypos;
//    return true;
//}



//��� �̴ϼȶ�����
//#include <iostream>
//
//using namespace std;
//
//class FruitSeller
//{
//private:
//    const int APPLE_PRICE;
//    int numOfApples;
//    int myMoney;
//public:
//    FruitSeller(int price, int num, int money)
//        : APPLE_PRICE(price), numOfApples(num), myMoney(money) // ��� �̴ϼȶ����� ��
//    {
//    }
//    int  SaleApples(int money)
//    {
//        int num = money / APPLE_PRICE;
//        numOfApples -= num;
//        myMoney += money;
//        return num;
//    }
//    void ShowSalesResult() const
//    {
//        cout << "���� ���: " << numOfApples << endl;
//        cout << "�Ǹ� ����: " << myMoney << endl << endl;
//    }
//};
//
//class FruitBuyer
//{
//private:
//    int myMoney;
//    int numOfApples;
//public:
//    FruitBuyer(int money)
//        : myMoney(money), numOfApples(0) // ��� �̴ϼȶ�����
//    {
//    }
//    void BuyApples(FruitSeller& seller, int money)
//    {
//        numOfApples += seller.SaleApples(money);  // �޽��� ����(Message Passing)
//        myMoney -= money;
//    }
//    void ShowBuyResult() const
//    {
//        cout << "���� �ܾ�: " << myMoney << endl;
//        cout << "��� ����: " << numOfApples << endl << endl;
//    }
//};
//
//
//int main(void)
//{
//    FruitSeller seller(1000, 20, 0);
//    FruitBuyer buyer(5000);
//    buyer.BuyApples(seller, 2000);
//
//    cout << "���� �Ǹ����� ��Ȳ: " << endl;
//    seller.ShowSalesResult();
//    cout << "���� �������� ��Ȳ: " << endl;
//    buyer.ShowBuyResult();
//
//    system("pause");  // VC++ ������ �ʿ�
//
//    return 0;
//}