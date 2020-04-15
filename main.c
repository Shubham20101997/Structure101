#include <stdio.h>
#include <stdlib.h>

struct stud{
    int roll;
    char *name;
    int age;
    char *address;

};
struct stud student[4];


int age(){

    for (int i=0;i<4;i++){
         if (student[i].age==14){
            printf("%s\n",student[i].name);
        }
    }


    return 0;
}
int roll_no(){
    for (int i=0; i<4;i++){
        //student[i].roll=roll;
        if (student[i].roll%2==0){
            printf("%s\n",student[i].name);
        }
    }


    return 0;

}
int details(int roll){
   for (int i=0;i<4;i++){
        if (student[i].roll==roll){
            printf("Name:%s\n",student[i].name);
            printf("Age:%d\n",student[i].age);
            printf("Address:%s\n",student[i].address);
        }
   }
 }

int main(int argc, char *argv[])
{
    //printf("Hello world!\n");
    //struct stud student[4];

    student[0].roll= 2;
    student[0].name="shubham";
    student[0].age=22;
    student[0].address="olympia opanline_1";

    student[1].roll= 3;
    student[1].name="mohan";
    student[1].age=24;
    student[1].address="olympia opanline_2";

    student[2].roll= 5;
    student[2].name="golu";
    student[2].age=14;
    student[2].address="olympia opanline_3";

    student[3].roll= 4;
    student[3].name="subhash";
    student[3].age=14;
    student[3].address="olympia opanline_4";
    printf("Students with even roll number:\n");
    roll_no();
    printf("Students with age 14 years:\n");
    age();
    printf("\nEnter the roll number:");
    int rollno;
    scanf("%d",&rollno);
    printf("Details:\n");
    details(rollno);
    return 0;
}
