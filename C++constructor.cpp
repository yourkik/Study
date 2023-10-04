//https://wikidocs.net/17145 (참고 사이트)


//#include <iostream>
//using namespace std;
//
//class SimpleClass
//{
//private:
//    int num1;
//    int num2;
//public:
//    SimpleClass(int n1 = 0, int n2 = 0)  // 생성자 4
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
//    SimpleClass sc1;  // 생성자 4 호출. 디폴트 값 사용
//    sc1.Show();
//
//    SimpleClass sc2(100);  // 생성자 4 호출, 첫 멤버 값 세팅
//    sc2.Show();
//
//    SimpleClass sc3(100, 200);  // 생성자 4 호출, 두 멤버 모두의 값 세팅
//    sc3.Show();
//
//    system("pause");  // VC++ 에서만 사용
//
//    return 0;
//}



////동적할당
//#include <iostream>
//using namespace std;
//
//class SimpleClass
//{
//private:
//    int num1;
//    int num2;
//public:
//    SimpleClass(int n1 = 0, int n2 = 0)  // 생성자 4
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
//    psc1->Show(); // 포인터를 통한 간접 접근
//
//    SimpleClass* psc2 = new SimpleClass(100);
//    psc2->Show();
//
//    SimpleClass* psc3 = new SimpleClass(100, 200);
//    psc3->Show();
//
//    delete psc1, psc2, psc3;
//
//    system("pause");  // VC++ 에서만 사용
//
//    return 0;
//}




//클래스 멤버가 클래스 일 때 생성자 호출 법
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
//// 클래스 Point의 생성자
//Point::Point(const int& xpos, const int& ypos)//★
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
//        cout << "벗어난 범위의 값 전달" << endl;
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
//        cout << "벗어난 범위의 값 전달" << endl;
//        return false;
//    }
//    y = ypos;
//    return true;
//}



//멤버 이니셜라이저
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
//        : APPLE_PRICE(price), numOfApples(num), myMoney(money) // 멤버 이니셜라이저 ★
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
//        cout << "남은 사과: " << numOfApples << endl;
//        cout << "판매 수익: " << myMoney << endl << endl;
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
//        : myMoney(money), numOfApples(0) // 멤버 이니셜라이저
//    {
//    }
//    void BuyApples(FruitSeller& seller, int money)
//    {
//        numOfApples += seller.SaleApples(money);  // 메시지 전달(Message Passing)
//        myMoney -= money;
//    }
//    void ShowBuyResult() const
//    {
//        cout << "현재 잔액: " << myMoney << endl;
//        cout << "사과 개수: " << numOfApples << endl << endl;
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
//    cout << "과일 판매자의 현황: " << endl;
//    seller.ShowSalesResult();
//    cout << "과일 구매자의 현황: " << endl;
//    buyer.ShowBuyResult();
//
//    system("pause");  // VC++ 에서만 필요
//
//    return 0;
//}
