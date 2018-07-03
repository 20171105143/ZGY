#include <string.h>
#include <iostream>
using namespace std;

typedef struct student {
    char sno[50];
    char name[50];
    char gender[50];
    char birthday[50];
    char grade[50];
    char mobile[50];
    
    double score[5];
    double average;
    struct student *next;
} Student;

Student *head = NULL;

void printStudent(Student *s) {
    printf("%-5s%-15s%-8s%-10s%-10s%-10s%-6.2lf%-6.2lf%-6.2lf%-6.2lf%-6.2lf\n",
           s->sno, s->name, s->gender, s->birthday, s->grade, s->mobile,
           s->score[0], s->score[1], s->score[2], s->score[3], s->score[4]);
}
void printLinkList(Student *head) {
    while (head != NULL) {
        printStudent(head);
        head = head->next;
    }
}


