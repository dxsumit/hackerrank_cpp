
// class problem 

#include <iostream>
#include <sstream>

using namespace std;

class Student {
    private:
        int student_age, student_standard;
        string student_first_name, student_last_name;

    public:
        void set_val(int age, int standard, string first_name, string last_name) {
            student_age         = age;
            student_standard    = standard;
            student_first_name  = first_name;
            student_last_name   = last_name;
        }
        string to_string() {
            stringstream s;
            s << student_age << "," << student_first_name << "," << student_last_name << "," << student_standard;
            return s.str();
            
        }
        int get_age() {
            return student_age;
        }
        string get_last_name() {
            return student_last_name;
        }
        string get_first_name() {
            return student_first_name;
        }
        int get_standard() {
            return student_standard;
        }
        
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_val(age, standard, first_name, last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    
    return 0;
}
