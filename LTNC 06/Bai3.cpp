#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student
{
    private:
    int x, y, z, t, a;
    public:
    void input() {
        int x_, y_, z_,t_, a_;
        cin >> x_ >> y_ >> z_ >> t_ >> a_;
        x = x_; y = y_; z = z_; a = t_; a = a_;
    }
    int calculateTotalScore() {
        return (x+y+z+t+a);
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
