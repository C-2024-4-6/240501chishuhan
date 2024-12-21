#include<iostream>
using namespace std;
struct Student {
    int id;
    double score;
};
Student* max(Student students[], int size) {
    Student* maxStudent = &students[0];
    for (int i = 1; i < size; i++) {
        if (students[i].score > maxStudent->score) {
            maxStudent = &students[i];
        }
    }
    return maxStudent;
}

int main() {

    Student students[] = {
        {1, 100.0},
        {2, 90.0},
        {3, 20.0},
        {4, 50.0},
        {5, 60.0}
    };
    int size = sizeof(students) / sizeof(students[0]);


    Student* topStudent = max(students, size);


    cout << "学号为 " << topStudent->id << " 的学生成绩最高，成绩为 " << topStudent->score << "。" << endl;

    return 0;
}