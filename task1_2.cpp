#include <list>
#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    string firstName;
    string secondName;
    string sex;
    int age;
    int height;
    int weight;
    string dateOfBirth;
    string phoneNumber;
    string address;

    Human() { age = 0; height = 0; weight = 0; }
    Human(int vage, int vheight, int vweight, string sn, string fn) {
        age = vage;
        height = vheight;
        weight = vweight;
        secondName = sn;
        firstName = fn;
    }

};


Human comparison(Human h1, Human h2) {
    if (h1.age > h2.age) {
        return h1;
    }
    else if (h1.age < h2.age)
    {
        return h2;
    }
    else {
        if (h1.height > h2.height) {
            return h1;
        }
        else if (h1.height < h2.height)
        {
            return h2;
        }
        else {
            if (h1.weight > h2.weight) {
                return h1;
            }
            else if (h1.weight < h2.weight)
            {
                return h2;
            }
            else {
                const char* tmpsn1 = (h1.secondName).c_str();
                const char* tmpsn2 = (h2.secondName).c_str();
                if (strcmp(tmpsn1, tmpsn2) < 0 ) {
                    return h1;
                }
                else if (strcmp(tmpsn1, tmpsn2) > 0) {
                    return h2;
                }
                else {
                    const char* tmpfn1 = (h1.firstName).c_str();
                    const char* tmpfn2 = (h2.firstName).c_str();
                    if (strcmp(tmpfn1, tmpfn2) < 0) {
                        return h1;
                    } 
                    else if (strcmp(tmpfn1, tmpfn2) > 0){
                        return h2;
                    }
                }
            }
        }
    }
}


void test(list<Human>& lst, Human element) {
    list<Human>::iterator p = lst.begin();
    while (p != lst.end())
    {
        Human tmp = *p;
        cout << "p: " << tmp.firstName << endl;
        cout << comparison(*p, element).firstName << endl;
        p++;
    }
}


void push(list<Human>& lst, Human element) {
    list<Human>::iterator p = lst.begin();
    while (p != lst.end())
    {
        Human tmp = *p;
        //if (tmp.imag() > element.imag()) break;
        p++;
    }
    lst.insert(p, element);
}


Human pop(list<Human>& lst, int n) {
    list<Human>::iterator p = lst.begin();
    Human res;
    for (int i = 0; i < n; i++)
    {
        if (i == 0) res = *p;
        //if (p > element) break;
        p++;
    }
    lst.erase(p);
    return res;
}


//оставляет только те элементы списка которые удовлетворяют условию
list<Human> filter(list<Human>& lst) {
    list<Human>::iterator p = lst.begin();
    list<Human> ans;
    while (p != lst.end())
    {
        Human tmp = *p;
        //cout << tmp.imag() % 2;
        if (tmp.age){
            //cout << tmp;
            ans.push_back(tmp);
        }
        p++;
    }
    return ans;
}

void print(list<Human> lst) {
    list<Human>::iterator p = lst.begin();
    while (p != lst.end())
    {
        Human tmp = *p;
        cout << tmp.age;
        p++;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    Human h1(5, 6, 7, "Шибанов", "Михаил");
    Human h2(5, 6, 7, "Швецова", "Оксана");
    Human h3;
    list<Human> l = { h1, h3 };

    //test(l, h2);
    //cout << comparison(h1, h2).age << endl;

    //push(l, c2);

    //pop(l, 0);
    cout << endl;

    //print(l);

    //cout << c1;
}
