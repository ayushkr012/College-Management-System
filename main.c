#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int cp, cprogramming, python, x, java, database;
} st;
int mstudent()
{
    int num1, num2, num3, num4, x, i;
    char t[10], l[10];
    char a[12][40] = {
        "Sanskar",
        "Deepak",
        "Saurabh",
        "Vishnu sai teja",
        "Ayush",
        "Sankeerth kumaran",
        "Supraj chavla",
        "Lokesh kumar",
        "Mohammad yousf",
    };
    printf("Do you want to see student list ? \nEnter 1 if \"YES\" and 2 for \"NO\" \n");
    printf("Enter your option : ");
    scanf("%d", &num1);
    if (num1 > 2)
    {
        printf("Enter a valid option \n");
        printf("LETS TRY AGAIN\n");
        return mstudent();
    }
    else if (num1 == 1)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" student-%d.%s \n", i + 1, a[i]);
        }
    }
 printf("\nFurther....");
 printf("\n1.Add a student \n2.Remove a student \nChoose any one of the above options :");
 scanf("%d",&num2);
 if (num2 == 1)
 {
        printf("Enter surname of the student : ");
        scanf("%s", a[9]);
        printf("Enter First name of the student : ");
        scanf("%s", l);
        printf("Enter Middle name of the student : ");
        scanf("%s", t);
        strcat(a[9], " ");
        strcat(a[9], l);
        strcat(a[9], " ");
        strcat(a[9], t);
        printf("\nFurther....");
        printf("\nDo you want to see modified student list ? \nEnter 1 if \"YES\" and 2 for \"NO\" \n");
        printf("Enter your option : ");
        scanf("%d", &num3);
        if (num3 == 1)
        {
            for (i = 0; i < 10; i++)
            {
                printf(" student-%d.%s \n", i + 1, a[i]);
            }
        }
        else
        {
            printf("Your student list is sucessfully modified");
        }
 }
 else if (num2 == 2)
 {
        printf("Enter the student number : ");
        scanf("%d", &x);
        strcpy(a[x - 1], "_");
        printf("\nFurther....");
        printf("\n\nDo you want to see modified student list ? \nEnter 1 if \"YES\" and 2 for \"NO\" \n");
        printf("Enter your option : ");
        scanf("%d", &num4);
        if (num4 == 1)
        {
            for (i = 0; i < 10; i++)
            {
                printf(" student-%d.%s \n", i + 1, a[i]);
            }
        }
        else
        {
            printf("Your student list is sucessfully modified \n");
        }
 }
}
int mcourse()
{
 int i, y, l;
 char t[10], k[10];
 char p[9][30] = {
     "Computer programming",
     "C programming ",
     "Python programming ",
     "C++ programming ",
     "Java programming ",
     "SQL Database ",
 };
 printf("Available courses : \n");
 for (i = 0; i < 7; i++)
 {
     printf("Course - %d : %s \n", i + 1, p[i]);
 }
 printf("\nFurther....");
 printf("Do you want to ADD or DELETE a course course \nTo ADD a course enter 1 or else 2 : ");
 scanf("%d",&l) ;
 if(l == 1)
 {
        printf("\n");
        printf("Please enter only one word at a time (AS WE HAVE TRIED TO USE THE fgets and scanf but we failed to do so time:) " );
            printf("Enter the course tittle : ");
        scanf("%s", p[6]);
        printf("Enter the course name : ");
        scanf("%s", k);
        strcat(p[6], " ");
        strcat(p[6], k);
        printf("\nFurther....");
        printf("\nNew Course list : \n");
        for (i = 0; i < 7; i++)
        {
            printf("Course - %d : %s \n", i + 1, p[i]);
        }
        printf("\nYour course is sucessfully added !");
 }
 else if(l == 2)
 {
        printf("\nEnter course number : ");
        scanf("%d", &y);
        strcpy(p[y - 1], "_");
        printf("\nFurther....");
        printf("\nNew Course list : \n");
        for (i = 0; i < 9; i++)
        {
            printf("Course - %d : %s \n", i + 1, p[i]);
        }
        printf("\nYour course is sucessfully deleted !");
 }
 else
 {
        printf("\nOut of the database");
        printf("LETS TRY AGAIN !");
        return mcourse();
 }
}
int cmanage()
{
 int i, t, y;
 char p[8][20] = {"orator club",
                  " dance club",
                  "music club",
                  "robotics",
                  "skill night"};
 printf("Avalaible club's are : \n");
 for (i = 0; i < 8; i++)
 {
     printf("Club %d is %s \n", i + 1, p[i]);
 }
 printf("Want to add clubs in list ?\n");
 printf("Then enter 1 or else 2 \nEnter your choice : ");
 scanf("%d", &t);
 if (t == 1)
 {
 printf("Please enter only one word at a time (AS WE HAVE TRIED TO USE THE fgets and scanf for 10 time :) " );
 printf("Enter the name of the club : ");
 scanf("%s", p[6]);
 printf("\nFurther....");
 printf("NEW list : \n");
 for (i = 0; i < 8; i++)
 {
     printf("clubs %d is %s \n", i + 1, p[i]);
 }
 printf("\nThe club is successfully added ! \n");
 }
 else if (t == 2)
 {
 printf("\nEnter course number : ");
 scanf("%d", &y);
 strcpy(p[y - 1], "_");
 printf("\nYour course is sucessfully deleted !");
 printf("\nFurther....");
 printf("\nNew Course list : \n");
 for (i = 0; i < 9; i++)
 {
     printf("Course - %d : %s \n", i + 1, p[i]);
 }
 }
 return 0;
}
int cperformance()
{
 int i;
 char a[12][25] = {"Sanskar",
                   "Deepak",
                   "Saurabh",
                   "Vishnu sai teja",
                   "Ayush",
                   "Sankeerth kumaran",
                   "Supraj chavla",
                   "Lokesh kumar",
                   "Mohammad yousf",
                   "_"};
 for (i = 0; i < 10; i++)
 {
 printf(" student-%d.%s \n", i + 1, a[i]);
 }
 printf("Enter the student number from above : ");
 scanf("%d", &i);
 printf("Enter marks in Computer programming : ");
 scanf("%d", &st.cp);
 printf("Enter marks in C Programming : ");
 scanf("%d", &st.cprogramming);
 printf("Enter marks in Python programming : ");
 scanf("%d", &st.python);
 printf("enter marks in C++ Programming : ");
 scanf("%d", &st.x);
 printf("enter marks in Java programming : ");
 scanf("%d", &st.java);
 printf("Enter marks in SQL database : ");
 scanf("%d", &st.database);
 printf("\nDisplying marks you entered : \n");
 printf("Name : %s", a[i - 1]);
 printf("Marks in c programming : %d \n", st.cprogramming);
 printf("Marks in computer programming : %d \n", st.cp);
 printf("Marks in C++ programming : %d \n", st.x);
 printf("Marks in database : %d \n", st.database);
 printf("Marks in java : %d \n", st.java);
 printf("Marks in python : %d \n", st.python);
}
int matter()
{
 printf("\n");
 int num3, num2, num4, day, i, x, y, l;
 printf("You can do the follwing:\n\t1.View Subject List \n\t2.View Lecture Schedule \n\t3.Club List \n\t4.Academic performance \n\t5.Quit\n");
 printf("Enter the no : ");
 scanf("%d", &num2);
 switch(num2)
 {
    case 1:
 printf("The Subject list is as follows: \n1.Computer Programming \n2.Calculus for Engineers \n3.Electronic Devices and Circuits \n4.Elements of Electrical Engineering \n5.Applied Sciences \n6.Environmental Studies\n");
 matter();
 case 2:
 printf("Enter the day you want to see the schedule for:\n1.Monday \n2.Tuesday \n3.Wednesday \n4.Thurday \n5.Friday\n");
 scanf("%d",&day);
 switch(day)
 {
        case 1:
            printf("Monday's Class Schedule\n 08:00am-CP\n 09:00am-EVS\n 10:00amAS\n 12:00pm-EDC\n 02:00pm-EEE\n ");
            break;
        case 2:
            printf("Tuesday's Class Schedule\n 08:00am-EDC\n 09:00am-EVS\n 10:00amCP\n 12:00pm-EDC\n 02:00pm-AS\n ");
            break;
        case 3:
            printf("Wednesday's Class Schedule\n 08:00am-EEE\n 09:00amAS\n10:00am-Yoga\n12:00pm-EDC\n02:00pm-CP\n");
            break;
        case 4:
            printf("Thursday's Class Schedule\n08:00am-EVS\n09:00am-EEE\n10:00amAS\n12:00pm-EDC\n02:00pm-CP\n");
            break;
        case 5:
            printf("Friday's Class Schedule\n08:00am-Yoga\n09:00am-EEE\n10:00amAS\n12:00pm-EDC\n02:00pm-CP\n");
            break;
 }
 matter();
 case 3:
 printf("Clubs of Indian Information of Technology Nagpur are: \n->Orator Club \n->IoTics \n->Dot Slash \n->Skills Nights \n->Probe \n->Dimensions \n->Strokes \n->Music Club \n->Dance Club \n->Orator Club \n->Hindi Rajbhasha \n->Drama Club \n->ACE\n");
 matter();
 case 4:
 printf("Academic Performance\n");
 int num3, num2,num4,day,i,x=0,y=0,l;
char a[6][45]={
 " Computer Programming ",
 " Applied Science ",
 " Electronic Devics and Circuits ",
 " Elements of Electrical Engineering",
 " Environmental Studies " ,
 " Calculus for Engineers "};
 char b[10][25] ={"Sanskar",
 "Deepak",
 "Saurabh",
 "Vishnu sai teja",
 "Ayush",
 "Sankeerth kumaran",
 "Supraj chavla",
 "Lokesh kumar",
 "Mohammad yousf",
 };
 int c[10][6] = {{96,85,64,92,87,100},
 {91,85,64,93,97,91},
 {95,75,63,82,97,99},
 {97,99,100,100,100,100},
 {96,85,64,92,87,100},
 {9,75,9,95,89,6},
 {82,4,3,86,5,10},
 {4,23,12,54,6,10},
 {95,75,63,82,97,99},
 {97,9,10,0,20,10},
 };
 for(i=0;i<9;i++)
 {
            printf("%d.%s \n", i + 1, b[i]);
 }
 printf("Enter 1 if you find your name in the list else 2 : ");
 scanf("%d",&x);
 if(x == 1)
 {
            printf("Enter your number from above list: ");
            scanf("%d", &y);
            printf("*Note your marks are being shown out of 100 \n");
            printf("All marks are entered by admin and he holds the whole responsibility\n\n");
            for (i = 0; i < 6; i++)
            {
                printf("Your marks in %s \t are \"%d\" \n", a[i], c[y - 1][i]);
                l += c[y - 1][i];
            }
            if (l >= 300)
            {
                for (i = 0; i < 6; i++)
                {
                    if (c[y - 1][i] < 50)
                    {
                        printf("You have FAILED the exam ! \n");
                        break;
                    }
                }
                for (i = 0; i < 6; i++)
                {
                    if (c[y - 1][i] > 50)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                if (i == 6)
                {
                    printf("You have PASSED the exam ! \n");
                }
            }
            else
            {
                printf("you have FAILED in the exam \n");
            }
}
 else if(x == 2)
 {
            printf("If your name is not in the list please contact the admin \n");
 }
 else
 {
            printf("Enter a valid number \n Try again ! \n\n");
            matter();
 }
 case 5 :
 printf("Do you want to quit 1 for yes and 2 for no \n");
 scanf("%d",&num4);
 if(num4 == 1)
 {
            exit(0);
 }
 else
 {
            printf("\n");
            matter();
 }
 }
}
int main()
{
 int type, num1;
 char name[30];
 printf("CATEGEORIES : \n \t 1.Admin \n \t 2.Student \n");
 printf("Enter \"1\" for Admin or \"2\" for Sudent \n");
 printf("Entr your option : ");
 scanf("%d", &type);
 if (type == 1)
 {
 char l[30], t[45];
 printf("Enter your Surname : ");
 scanf("%s", name);
 printf("Enter your First name : ");
 scanf("%s", l);
 printf("Enter your Middle name : ");
 scanf("%s", t);
 strcat(name, " ");
 strcat(name, l);
 strcat(name, " ");
 strcat(name, t);
 printf("Welcome %s !", name);
 printf("\n");
 printf("Services we provide :\n\t1.Manage Student\n\t2.Manage Course\n\t3.Club Management\n\t4.Academic Performance\n\t5.Quit\n");
 printf("Choose any one of the option : ");
 scanf("%d",&num1);
 if(num1 <=5 && num1 >0)
 {
            if (num1 == 1)
            {
                return mstudent();
            }
            else if (num1 == 2)
            {
                return mcourse();
            }
            else if (num1 == 3)
            {
                return cmanage();
            }
            else if (num1 == 4)
            {
                return cperformance();
            }
            else if (num1 == 5)
            {
                exit(0);
            }
 }
 if(num1>5)
 {
            printf("Oops ! Choose a Valid option \n Try again \n");
            exit(0);
 }
 }
 if (type == 2)
 {
 char name[25];
 char l[30], t[45];
 printf("Enter Surname of student : ");
 scanf("%s", name);
 printf("Enter First name of student : ");
 scanf("%s", l);
 printf("Enter Middle name of student : ");
 scanf("%s", t);
 strcat(name, " ");
 strcat(name, l);
 strcat(name, " ");
 strcat(name, t);
 printf("Welcome %s !", name);
 return matter();
 }
 return 0;
}
