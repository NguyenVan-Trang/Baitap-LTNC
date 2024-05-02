#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int age;
    string first_name, last_name;
    int standard;
    public:
    int get_age() {
        return age;
    }
    void set_age(int n) {
        age = n;
    }
    string get_first_name() {
        return first_name;
    }
    void set_first_name(string n) {
        first_name = n;
    }
    string get_last_name() {
        return last_name;
    }
    void set_last_name(string n) {
        last_name = n;
    }
    int get_standard() {
        return standard;
    }
    void set_standard(int n) {
        standard = n;
    }
    void present1() {
        cout << age << "\n" << last_name << ", " << first_name << "\n" << standard;
    }
    void present2() {
        cout << age << "," << first_name << ',' << last_name << "," << standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    st.present1();
    cout << endl;
    cout << endl;
    st.present2();
    return 0;
}
