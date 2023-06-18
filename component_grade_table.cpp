#include<bits/stdc++.h>
using namespace std;

struct componentGradeTable {
    string ID;
    string full_name;
    string class_name;
    float firtst_grade, second_grade, third_grade;
};

string standardizedName(string a) {
    string standardized;
    bool capitalNext = true;
    for(char c : a) {
        if(isalpha(c)) {
            if(capitalNext) {
            capitalNext = false;
            standardized += toupper(c);
            }
            else {
                standardized += tolower(c);
            }
        }
        else if(isspace(c)) {
            capitalNext = true;
            standardized += " ";
        }
    }
    return standardized;
}

void sortingName(componentGradeTable a[],int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n-i-1; i++) {
        if(a[i].full_name > a[i + 1].full_name) {
            swap(a[i],a[i+1]);
        }
    }
    }
}

void input(componentGradeTable a[], int n) {
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ID);
        getline(cin, a[i].full_name);
        getline(cin, a[i].class_name);
        cin >> a[i].firtst_grade >> a[i].second_grade >> a[i].third_grade;
    }
}

void printList(componentGradeTable a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " " << a[i].ID << " " << a[i].full_name << " " << a[i].class_name << " " ;
        cout << fixed << setprecision(1) << a[i].firtst_grade << " " << a[i].second_grade << " " << a[i].third_grade << endl;
    }
}

int main() {
    int n; cin >> n;
    componentGradeTable student[n];
    input(student, n);
    sortingName(student, n);
    printList(student, n);

    return 0;
}