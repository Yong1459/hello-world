#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

// 学生结构体
struct Student {
    char name[31];          // 学生姓名
    double dailyGrade;      // 每日成绩
    double finalGrade;      // 期末成绩
    double totalGrade;      // 总成绩
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
    Student students[100];   // 学生数组
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].dailyGrade >> students[i].finalGrade;
        students[i].totalGrade = students[i].dailyGrade * 0.4 + students[i].finalGrade * 0.6; // 计算总成绩
    }
    paixu(students, n); // 对学生数组按照总成绩排序
    for (int i = 0; i < n; i++) {
        printf("%s %.2f %.2f %.2f\n", students[i].name, students[i].dailyGrade, students[i].finalGrade, students[i].totalGrade);
    }
    return 0;
}

