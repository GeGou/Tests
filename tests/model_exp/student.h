//File: student.h

class Student {
private:
    char* name;
    int no;
    int year_of_studies;
public:
    void set_name(const char*);
    void set_no(int);
    void set_year_of_studies(int);
    char* get_name()const;
    int get_no()const;
    int get_year_of_studies()const;
};