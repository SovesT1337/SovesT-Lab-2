#include <iostream>
using namespace std;

void n1(int x,int y){
    if (x % 2 == 1 and y % 2 == 1)
        cout << "Verno" << endl;
    else
        cout << "Neverno" << endl;
}

void n2(int x, int y){
    if (x < 20 xor y < 20)
        cout << "Verno" << endl;
    else
        cout << "Neverno" << endl;
}

void n3(int x, int y){
    if (x == 0 or y == 0)
        cout << "Verno" << endl;
    else
        cout << "Neverno" << endl;

}

void n4(int x, int y, int z){
    if (x < 0 and y < 0 and z < 0)
        cout << "Verno" << endl;
    else
        cout << "Neverno" << endl;
}

void n5(int x, int y, int z){
    if (x % 5 == 0 xor y % 5 == 0 xor z % 5 == 0)
        cout << "Verno" << endl;
    else
        cout << "Neverno" << endl;
}

void n6(int x,int y, int z){
    if (x > 100 or y > 100 or z > 100)
        cout << "Verno" << endl;
    else
        cout << "Neverno" << endl;
}

void zadanie1() {
    int x,y,z;
    cin >> x >> y >> z;
    n1(x,y);
    n2(x,y);
    n3(x,y);
    n4(x,y,z);
    n5(x,y,z);
    n6(x,y,z);
}

void f1(pair<int,int> a, pair<int,int> b){
    if (a.first == b.first or a.second == b.second)
        cout << "Ladia Ugrozhaet" << endl;
    else
        cout << "Ladia Neugrozhaet" << endl;
}

void f2(pair<int,int> a, pair<int,int> b){
    if (abs(a.first-a.second) == abs(b.first-b.second))
        cout << "Slon Ugrozhaet" << endl;
    else
        cout << "Slon Neugrozhaet" << endl;
}

void f3(pair<int,int> a, pair<int,int> b){
    if (abs(a.first-b.first) == 1 or abs(a.second-b.second) == 1)
        cout << "Korol Hodit" << endl;
    else
        cout << "Korol Nehodit" << endl;
}

void f4(pair<int,int> a, pair<int,int> b){
    if (abs(a.first-a.second) == abs(b.first-b.second) or a.first == b.first or a.second == b.second)
        cout << "Ferz Ugrozhaet" << endl;
    else
        cout << "Ferz Neugrozhaet" << endl;
}

void f5(pair<int,int> a, pair<int,int> b){
    if (a.first == b.first and (b.second-a.second) == 1)
        cout << "Peshka Hodit" << endl;
    else if (abs(b.first-a.first) == 1 and b.second-a.second == 1)
        cout << "Peshka Ugrozhaet" << endl;
    else
        cout << "Peshka Neugrozhaet" << endl;
}

void zadanie2(){
    pair<int,int>a;
    cin >> a.first >> a.second;
    pair<int,int>b;
    cin >> b.first >> b.second;
    f1(a,b);
    f2(a,b);
    f3(a,b);
    f4(a,b);
    f5(a,b);
}

void k1(){
    int i;
    for (i = 1; i<10; i++) {
        cout << i * 7 << endl;
    }
}

void k2(){
    int n,i;
    cin >> n;
    for (i = 1; i<10; i++) {
        cout << i * n << endl;
    }
}

void zadanie3(){
    k1();
    k2();
}

void t1(){
    int i,k;
    k=1;
    for (i = 8; i < 16; i++){
        k*=i;
        cout << k << endl;
    }
}

void t2(){
    int i,k,a;
    k=1;
    cin >> a;
    for (i = a; i < 21; i++){
        k*=i;
        cout << k << endl;
    }
}

void t3(){
    int i,k,b;
    k=1;
    cin >> b;
    for (i = 1; i < b+1; i++){
        k*=i;
        cout << k << endl;
    }
}

void t4(){
    int i,k,a,b;
    k=1;
    cin >> a >> b;
    for (i = a; i < b+1; i++){
        k*=i;
        cout << k << endl;
    }
}

void zadanie4(){
    t1();
    t2();
    t3();
    t4();
}

int main(){
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    return 0;
}
