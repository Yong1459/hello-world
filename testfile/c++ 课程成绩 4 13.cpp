#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

struct Student {
    char name[31];
    double m;
    double f;
    double t;
};

void paixu(Student a[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (a[j].t < a[j + 1].t) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
 
    Student b[101];
    int n = 0;


    while (cin >> b[n].name >> b[n].m >> b[n].f) {
        b[n].t = b[n].m * 0.4 + b[n].f * 0.6 ;
        n++;
    }


    paixu(b, n);


    for (int i = 0; i < n; i++) {
        cout <<fixed<<setprecision(2)<< b[i].name << " " << b[i].m << " " << b[i].f << " " << b[i].t << endl;
    }

    return 0;
}

