#include <iostream>

using namespace std;

int main()
{
    int* pt1, * pt2, * pt3=0;
    pt1 = new int;
    pt2 = new int;
    pt3 = new int;

    cin >> *pt1 >> *pt2;
    *pt3 = *pt1 + *pt2;
    cout << *pt3;
    delete pt1, pt2, pt3;


    return 0;
}
