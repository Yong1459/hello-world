#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

// ѧ���ṹ��
struct Student {
    char name[31];          // ѧ������
    double dailyGrade;      // ÿ�ճɼ�
    double finalGrade;      // ��ĩ�ɼ�
    double totalGrade;      // �ܳɼ�
};


void paixu(Student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].totalGrade < students[j+1].totalGrade) {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    Student students[100];   // ѧ������
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].dailyGrade >> students[i].finalGrade;
        students[i].totalGrade = students[i].dailyGrade * 0.4 + students[i].finalGrade * 0.6; // �����ܳɼ�
    }
    paixu(students, n); // ��ѧ�����鰴���ܳɼ�����
    for (int i = 0; i < n; i++) {
        printf("%s %.2f %.2f %.2f\n", students[i].name, students[i].dailyGrade, students[i].finalGrade, students[i].totalGrade);
    }
    return 0;
}

