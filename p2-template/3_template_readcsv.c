#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_STRING   200

typedef struct {
    // Following members needed in struct:
    // - name: string
    // - roll number: string
    // - marks: integer
    // - grade: char

} student_t;

void print_student(student_t s) {
    // Output should look like the following:
    // Nitin C (abc123) got grade D with 50 marks

    // Fill in the correct info for the "_" values and the "..."
    printf("%_ (%_) for grade %_ with %_ marks\n", ...);
}

void compute_grade(student_t* sptr) {
    if (sptr->marks >= 90) sptr->grade = 'S';
    else if 
    else if
    else ;
}

int read_csv(char* filename, student_t s_array[MAX_STUDENTS]) {
    // Open a file for reading
    FILE* fp = fopen(filename, "r");
    int num = 0;

    char buf[MAX_STRING];
    while (fgets(buf, MAX_STRING, fp) != NULL) {
        student_t* sptr = &s_array[num];
        sscanf(buf, "%[^,],%[^,],%d", &(sptr->name), &(sptr->rollno), &(sptr->marks));
        compute_grade(sptr);
        num ++;
    }
    return ...; 
}

int main() {
    student_t s_array[MAX_STUDENTS];
    
    int num = read_csv("students.csv", s_array);

    for () {
        print_student(s);
    }
}
