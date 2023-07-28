#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std ;

// QUESTION 1 ----------------------------------------------------------------------------------------------------------
/* int SumFromFile(string filename, int & input1, int & input2) {
    ifstream input_file(filename) ;
    if (!input_file.is_open()) {
        cout << "Problem opening input file!" << endl ;
        return 0 ;
    }
    input_file >> input1 ;
    input_file >> input2 ;

    return input1 + input2 ;
} */

// QUESTION 2 ----------------------------------------------------------------------------------------------------------
/*struct Password {
    string prefix;
    int middle;
    string suffix;
    Password() {
        this->prefix = "ABC" ;
        this->middle = 123 ;
        this->suffix = "+" ;
    }
    Password(string prefix, int middle, string suffix) {
        this->prefix = prefix ;
        this->middle = middle ;
        this->suffix = suffix ;
    }
    void printPassword() {
        cout << "Password = " << prefix << middle << suffix << endl;
    }
};

Password getGeneratedPassword(fstream& infile) {
    Password temp ;
    int num_chars = 0 ;
    infile.read((char*)&num_chars, 4) ;
    char* letters ;
    letters = new char[num_chars] ;
    infile.read(letters, num_chars) ;
    temp.prefix = letters ;
    delete[] letters ;

    int num_special_chars = 0 ;
    infile.read((char*)&num_special_chars, 4) ;
    char* specials ;
    specials = new char[num_special_chars] ;
    infile.read(specials, num_special_chars) ;
    temp.suffix = specials ;

    return temp ;
}

struct PasswordContainer {
    int numPasswords;
    vector<Password> passwords;
    void readAllPasswords(string filename){
        fstream infile(filename, ios::binary | ios_base::in) ;
        infile.read((char*) & numPasswords, 4) ;
        for (int i = 0; i < numPasswords; i++) {
            passwords.push_back(getGeneratedPassword(infile)) ;
        }
    }
}; */

// QUESTION 3 ----------------------------------------------------------------------------------------------------------
/* class Student {
public:
    string name ;
    map<string, float> grades ;
    map<string, float>::iterator iter ;

    Student(string name, map<string, float> grades) {
        this->name = name ;
        this->grades = grades ;
    }
    float getAverage() {
        iter = grades.begin() ;
        float grades_sum = 0 ;
        int num_classes = 0 ;
        for (; iter != grades.end(); iter++) {
            grades_sum += iter->second ;
            num_classes ++ ;
        }
        return grades_sum / num_classes ;
    }
}; */

// QUESTION 4 ----------------------------------------------------------------------------------------------------------
/* class Employee {
public:
    string name ;
    string eid ;
    float base_salary ;
    virtual float calculate_salary() { return base_salary ; }
    virtual void display() { } ;
    Employee(string name, string eid, float base_salary) {
        this->name = name ;
        this->eid = eid ;
        this->base_salary = base_salary ;
    }
};

class Manager : public Employee {
public:
    int years_of_experience ;
    int num_reportees ;
    Manager(string name, string eid, float base_salary, int years_of_experience, int num_reportees) :
    Employee(name, eid, base_salary) {
        this->years_of_experience = years_of_experience ;
        this->num_reportees = num_reportees ;
    }
    void display() {
        cout << this->name << " "
        << this->eid << " "
        << this->base_salary << " "
        << this->years_of_experience << " "
        << this->num_reportees << endl ;
    }
    float calculate_salary() {
        return this->base_salary * this->years_of_experience * this->num_reportees ;
    }
};

class Clerk : public Manager {
public:
    int num_projects ;
    Clerk(string name, string eid, float base_salary, int years_of_experience, int num_reportees, int num_projects) :
    Manager(name, eid, base_salary, years_of_experience, num_reportees) {
        this->num_projects = num_projects ;
    }
    void display() {
        cout << this->name << " "
        << this->eid << " "
        << this->base_salary << " "
        << this->num_projects << endl ;
    }
    float calculate_salary() {
        return ( this->base_salary / 2 ) * this->num_projects ;
    }
}; */

int main() {

//    QUESTION 1 -------------------------------------------------------------------------------------------------------
/*    string source = "source.txt" ;
    int num1 ;
    int num2 ;
    int sum = SumFromFile(source, num1, num2) ;
    cout << "sum: " << sum << endl ;
    return 0 ; */

//    QUESTION 2 -------------------------------------------------------------------------------------------------------
/*    string source_binary = "source_binary" ;
    PasswordContainer passwords ;
    passwords.readAllPasswords(source_binary) ;
    for (int i = 0; i < passwords.numPasswords; i++) {
        passwords.passwords.at(i).printPassword() ;
    } */

//    QUESTION 3 -------------------------------------------------------------------------------------------------------
/*    map<string, float> alecks ;
    string name = "alecks" ;
    alecks.emplace("intro to poopy", 87.5) ;
    alecks.emplace("how to wash dishes", 34.6) ;
    alecks.emplace("wiping ass 101", 3.4) ;
    alecks.emplace("how to use hearing aids", 0.0) ;
    Student Alecks(name, alecks) ;
    cout << "alecks's shit average: " << Alecks.getAverage() << endl ; */

//    QUESTION 4 -------------------------------------------------------------------------------------------------------
/*    Employee employee("alecks", "5555a", 15) ;
    employee.display() ;
    Manager manager("hoody", "6666b", 15, 3, 1) ;
    manager.display() ;
    Clerk clerk("nic", "7777c", 15, 5, 2, 80) ;
    clerk.display() ;

    cout << "alecks's salary: " << employee.calculate_salary() << endl ;
    cout << "hoody's salary: " << manager.calculate_salary() << endl ;
    cout << "nic's salary: " << clerk.calculate_salary() << endl ; */

    map<string, int> map1 ;
    map1.emplace("alecks", 1) ;
    map1.emplace("hoody", 2) ;
    map1.emplace("nic", 3) ;
    map<string, int>::iterator i ;
    i = map1.begin() ;
    for (; i != map1.end(); i++) {
        cout << i->first << ", " << i->second << endl ;
    }
    return 0;
}