#include <list>
#include <iostream>
#include <complex>
using namespace std;


void push(list<complex<int>>& lst, complex<int> element) {
    list<complex<int>>::iterator p = lst.begin();
    while (p != lst.end())
    {
        complex<int> tmp = p;
        if (tmp.imag() > element.imag()) break;
        p++;
    }
    lst.insert(p, element);
}


void pop(list<complex<int>>& lst, int n) {
    list<complex<int>>::iterator p = lst.begin();
    for (int i = 0; i < n; i++)
    {
        //if (p > element) break;
        p++;
    }
    lst.erase(p);
}

list<complex<int>> filter(list<complex<int>>& lst) {
    list<complex<int>>::iterator p = lst.begin();
    list<complex<int>> ans;
    while (p != lst.end())
    {
        complex<int> tmp =p;
        //cout << tmp.imag() % 2;
        if (tmp.imag() % 2 == 0){
            //cout << tmp;
            ans.push_back(tmp);
        }
        p++;
    }
    return ans;
}

void print(list<complex<int>> lst) {
    list<complex<int>>::iterator p = lst.begin();
    while (p != lst.end())
    {
        cout << *p;
        p++;
    }
}

int main() {
    complex<int> c1(4, 4);
    complex<int> c2(4, 5);
    complex<int> c3(4, 6);
    list<complex<int>> l = { c1, c2, c3 };
    cout << "Yes" << endl;

    //push(l, c2);

    //pop(l, 0);
    cout << endl;

    print(l);

    //cout << c1;
}
