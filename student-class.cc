/*
 *        File: student-class.cc
 *      Author: Nasseef Abukamail, Sebastien Hucks
 *        Date: April 08, 2019
 * Description: Student structure example with vectors.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
class Student {
public:
    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    void outputData();

private:
    int id;  //id must be >= 0
    string name;
    double score; //>= 0, -1 default
}; //semicolon is important


// function prototypes
// void printStudent(const Student &st);
// void inputStudent(Student &st);

int main(int argc, char const *argv[]) {

    Student s;
    s.setId(123);
    s.setId(-123);
    s.setName("Bob");
    s.setScore(85);
    s.setScore(-37);
    s.setScore(142);

    // cout << "   Id: " << s.getId() << endl;
    // cout << " Name: " << s.getName() << endl;
    // cout << "Score: " << s.getScore() << endl;

    s.outputData();




    return 0;
}  // main

int Student::getId() {
    return id;
}

void Student::setId(int newId) {
    if (newId >= 0)
    {
        id = newId;
    }
}

string Student::getName(){
    return name;
}

void Student::setName(string newName){
    name = newName;
}

double Student::getScore(){
    return score;
}

void Student::setScore(double newScore){
    if(newScore >= 0 && newScore <= 100){
        score = newScore;
    }
}

void Student::outputData(){
    cout << "   Id: " << id << endl;
    cout << " Name: " << name << endl;
    cout << "Score: " << score << endl;
}

/*
 * Extra credit (Due: Wednesday 4/10/2019 @ 11:59 PM):
 * Complete the Student class by implementing and testing all
 * the getters and setters.
 * In addition, add another member function of the class called output that
 * prints a Student object. For example, to print an object s you would execute
 * the following code:
 *          s.output(); //it should display id, name, and score
 *
 * Create a public repository on GitHub, push your code to the repository and
 * tag me (@nasseef) in the final commit message. Please make sure your program works
 * before you tag me.
 */