#include <iostream>
#include <vector>
using namespace std;

class Course
{
private:
    int cid;
    string name;
    double fees;

public:
    Course()
    {
    }
    Course(int cid, string name, double fees)
    {
        this->cid = cid;
        this->name = name;
        this->fees = fees;
    }

    void acceptCourse()
    {
        cout << "Enter course id - ";
        cin >> cid;
        cout << "Enter course name - ";
        cin >> name;
        cout << "Enter course fees - ";
        cin >> fees;
    }
    void displayCourse()
    {
        cout << "Course Id - " << cid << endl;
        cout << "Course Name - " << name << endl;
        cout << "Course Fees - " << fees << endl;
    }
    int getCid()
    {
        return cid;
    }
};

class Student
{
private:
    int rollno;
    string name;
    vector<Course *> course_taken;

public:
    Student()
    {
    }
    Student(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }
    void acceptStudent()
    {
        cout << "Enter rollno - ";
        cin >> rollno;
        cout << "Enter name - ";
        cin >> name;
    }
    void displayStudent()
    {
        cout << "Rollno - " << rollno << endl;
        cout << "Name - " << name << endl;
    }

    void addCourse(Course *course)
    {
        course_taken.push_back(course);
    }

    int getRollNo()
    {
        return rollno;
    }

    vector<Course *> &getCoursesTaken()
    {
        return course_taken;
    }
};

int menu()
{
    int choice;
    cout << "**********************************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Course" << endl;
    cout << "2. Display All Courses" << endl;
    cout << "3. Add Student" << endl;
    cout << "4. Display All Students" << endl;
    cout << "5. Purchase a Course" << endl;
    cout << "6. Display all students with their course taken" << endl;
    cout << "7. Display courses taken by the specific student" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    cout << "**********************************************" << endl;

    return choice;
}

void addDummyCourses(vector<Course *> &course_list)
{
    course_list.push_back(new Course(1, "C++", 5000));
    course_list.push_back(new Course(2, "Java", 7000));
    course_list.push_back(new Course(3, "Python", 7000));
    course_list.push_back(new Course(4, "DSA", 6000));
}

void addDummyStudents(vector<Student *> &student_list)
{
    student_list.push_back(new Student(1, "Anil"));
    student_list.push_back(new Student(2, "Mukesh"));
    student_list.push_back(new Student(3, "Ramesh"));
    student_list.push_back(new Student(4, "Suresh"));
    student_list.push_back(new Student(5, "Ram"));
    student_list.push_back(new Student(6, "Sham"));
}

// it will display all the courses from the course_list
void displayAllCourses(vector<Course *> &course_list)
{
    for (int i = 0; i < course_list.size(); i++)
        course_list[i]->displayCourse();
}

void purchaseCourse(vector<Course *> &course_list, vector<Student *> &student_list)
{
    int rollno;
    cout << "Enter your rollno - ";
    cin >> rollno;
    bool found = false;
    for (int i = 0; i < student_list.size(); i++)
    {
        if (rollno == student_list[i]->getRollNo())
        {
            found = true;
            displayAllCourses(course_list);
            int cid;
            cout << "Enter the course id that you want to take - ";
            cin >> cid;
            for (int j = 0; j < course_list.size(); j++)
            {
                if (cid == course_list[j]->getCid())
                {
                    // to add the course in the student's courses taken
                    // student_list[i]->addCourse(course_list[j]);

                    // OR

                    // to add the course in the student's courses taken
                    student_list[i]->getCoursesTaken().push_back(course_list[j]);
                }
            }
            break;
        }
    }
    if (!found)
        cout << "Student not found..." << endl;
}

void displayAllStudentsAlongWithCourseTaken(vector<Student *> student_list)
{
    for (int i = 0; i < student_list.size(); i++)
    {
        student_list[i]->displayStudent();
        cout << "************************" << endl;
        displayAllCourses(student_list[i]->getCoursesTaken());
        cout << "************************" << endl;
    }
}

void courseTakenBySpecificStudent(vector<Student *> &student_list)
{
    int rollno;
    cout << "Enter your rollno - ";
    cin >> rollno;
    for (int i = 0; i < student_list.size(); i++)
    {
        if (rollno == student_list[i]->getRollNo())
        {
            student_list[i]->displayStudent();
            cout << "************************" << endl;
            displayAllCourses(student_list[i]->getCoursesTaken());
            cout << "************************" << endl;
        }
    }
}

int main()
{
    vector<Course *> course_list;
    vector<Student *> student_list;

    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            // Adding the course by taking input from user
            // Course *course = new Course();
            // course->acceptCourse();
            // course_list.push_back(course);
        }
            addDummyCourses(course_list);
            break;
        case 2:
            displayAllCourses(course_list);
            break;
        case 3:
        {
            // Adding the student by taking input from user
            // Student *student = new Student();
            // student->acceptStudent();
            // student_list.push_back(student);
        }
            addDummyStudents(student_list);
            break;
        case 4:
            for (int i = 0; i < student_list.size(); i++)
                student_list[i]->displayStudent();
            break;
        case 5:
            purchaseCourse(course_list, student_list);
            break;
        case 6:
            displayAllStudentsAlongWithCourseTaken(student_list);
            break;
        case 7:
            courseTakenBySpecificStudent(student_list);
            break;

        default:
            break;
        }
    }

    return 0;
}