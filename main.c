#include<stdio.h>  // standard input output header file.
#include<stdlib.h> // standard library header.
#include<conio.h>  // console input output header.
#include<string.h> // string header for text.
#include<limits.h> // it had all the limits of all kind of data types.
#include<windows.h> // for Handle Structure. // to hide the cursor.


void menu();
void title();
void end();
void hidecursor();
int pattern_loop();
void f_c();
void c_f();
void c_k();
void k_c();
void f_k();
void k_f();
int menu_1();
void about();
int choice; // user input, for option menu to use in switch function.
int i=0,j=0; // for using inside the loops;
char c; // for getting the character at the end [M || m] - for going back to the main menu.
char title_text[30]; // Array type character - That means a string [30] -it can hold 30 character(including the null char).

void hidecursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

int main()
{
    system("title Temparature Conversion - Md. Mirajul Islam Tashfi");
    hidecursor();
    fflush(stdin);
    system("cls");
    choice=0; // initializing choice as zero, every time main() function called it should be zero. [otherwise, 2nd time repeat run any kind input will take at the last input]
    FILE *file;
    char name[100];

    file = fopen("data.txt","a");

    if(file != NULL)
    {
        int a,option, p;

        system("color 70");

        printf("\n\n\n\t\tWhat is your name?\n\n\n\t\t");
        gets(name);

        fprintf(file,"\n%s", name);

        fclose(file);
        printf("\n\n\n\t\tWelcome %s \n\n", name);

        printf("\n\n\n\t\tWant to convert tempareture?(For YES press 1 or For NO press 0)?\n\t\t\t\t\t");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
        {
            menu_1();
            break;
        }
        case 0:
        {
            int a = 176;
            printf("\n\n");
            printf("\n\t\t\t\t\t  %C%C%C%C%C%C%C%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
            printf("\n\t\t\t\t\t  %C%C%C%C|    M - Main Menu    |%c%c%c%c",a,a,a,a,a,a,a,a);
            printf("\n\t\t\t\t\t  %C%C%C%C|    Q - Quit Program |%c%c%c%c",a,a,a,a,a,a,a,a);
            printf("\n\t\t\t\t\t  %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
            printf("\t\t\t\t\t\t\t");
            c = getch();
            if(c == 'M' || c == 'm')
                main();
            else if (c == 'q' || c == 'Q')
                exit(1);
            else
            {
                fflush(stdin);
                printf("\a");
                system("color F4");
                printf("\n\n\t\t\t\t\t Press any key to choose again!");
                getch();
                main();
            }
            break;
        }
        default:
        {
            fflush(stdin);
            printf("\a");
            system("color F4");
            printf("\n\n\t\t\t\t\t Press any key to choose again!");
            getch();
            main();
        }
        }
    }

    else
    {
        printf("File does not exists.");
    }


    getch();
    return 0;
}

int menu_1()

{
    system("title Temparature conversion - Md. Mirajul Islam Tashfi");
    hidecursor();
    fflush(stdin); // clear the output buffer.
    system("cls"); // clear the console window.
    system("color 30"); // putting color to the console [D - background color][0 - text color]
    printf("\n\n");  // printing some new lines
    printf("\n\t\t\t\t   \xC9");
    pattern_loop(205,54);
    printf("\xBB"); // printing the pattern using function.
    printf("\n\t\t\t\t   \xBA                       WELCOME TO THE TEMPERATURE CONVERSION                         \xBA");
    printf("\n\t\t\t\t   \xBA                                                                                     \xBA  ");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1                                                                         \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  1. Converting Temperature from Fahrenheit to Celsius                   \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  2. Converting Temperature from Celsius to Fahrenheit                   \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  3. Converting Temperature from Celsius to Kelvin                       \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  4. Converting Temperature from Kelvin to Celsius                       \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  5. Converting Temperature from Fahrenheit to Kelvin                    \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  6. Converting Temperature from Kelvin to Fahrenheit                    \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  7. About                                                               \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1                                                                         \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1                                                                         \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA                                                                                     \xBA  ");
    printf("\n\t\t\t\t   \xCC");
    pattern_loop(205,54);
    printf("\xB9");
    printf("\n\n\t\t\t\t\t        \xB1\xB1    ENTER YOUR CHOICE: ");
    scanf("%d",&choice);
    if(choice >= 1 && choice <= 7)
    {
        menu();
    }
    else
    {
        fflush(stdin);
        printf("\a");
        system("color F4");
        printf("\n\n\t\t\t\tPlease Choose a Number from The MAIN MENU Between 1 - 7");
        printf("\n\n\t\t\t\t\t Press any key to choose again!");
        getch();
        menu_1();
    }
}

void menu()
{
    switch(choice)
    {
    case 1:
        system("cls");
        strcpy(title_text,"Fahrenheit to Celsius ");
        title(title_text);
        f_c();
        break;
    case 2:
        system("cls");
        strcpy(title_text,"Celsius to Fahrenheit ");
        title(title_text);
        c_f();
        break;
    case 3:
        system("cls");
        strcpy(title_text,"Celsius to Kelvin ");
        title(title_text);
        c_k();
        break;
    case 4:
        system("cls");
        strcpy(title_text,"Kelvin to Celsius");
        title(title_text);
        k_c();
        break;
    case 5:
        system("cls");
        strcpy(title_text,"Fahrenheit to Kelvin ");
        title(title_text);
        f_k();
        break;
    case 6:
        system("cls");
        strcpy(title_text,"Kelvin to Fahrenheit ");
        title(title_text);
        k_f();
        break;
    case 7:
        system("cls");
        strcpy(title_text,"About ");
        title(title_text);
        about();
        break;

    default:
        printf("\a");
        system("color F4");
        printf("\n\n\t\t\t\t Please choose a number from the MAIN MENU between 1 - 9");
        printf("\n\n\t\t\t\t\t Press any key to choose again!");
        getch();
        getchar();
        menu_1();
    }
    getch();
}

void title(char* title)
{
    int a = 176;
    int t = 205,t1=203,t2=202,t3=186,t4=219;
    system("color E0");
    printf("\n\n");
    printf("\n\t\t\t\t\t\t %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C",t,t1,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t1,t);
    printf("\n\t\t\t\t\t\t %C%C%C %23.23s %C%C%C%",t4,t3,t4,title,t4,t3,t4);
    printf("\n\t\t\t\t\t\t %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C",t,t2,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t2,t);
    printf("");
    printf("");
    printf("");
}


void end()
{
    int a = 176;
    printf("\n\n");
    printf("\n\t\t\t\t\t  %C%C%C%C%C%C%C%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C|    M - Main Menu    |%c%c%c%c",a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C| Enter - Check Again |%c%c%c%c",a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C|    Q - Quit Program |%c%c%c%c",a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf("\t\t\t\t\t\t\t");
    c = getch();
    if(c == 'M' || c == 'm')
        menu_1();
    else if(c == 'q' || c == 'Q')
        exit(1);
    else
    {
        if(choice == 1)
        {
            system("cls");
            strcpy(title_text,"Fahrenheit to Celsius ");
            title(title_text);
            f_c();
        }
        else if(choice == 2)
        {
            system("cls");
            strcpy(title_text,"Celsius to Fahrenheit ");
            title(title_text);
            c_f();
        }
        else if(choice == 3)
        {
            system("cls");
            strcpy(title_text,"Celsius to Kelvin ");
            title(title_text);
            c_k();
        }
        else if(choice == 4)
        {
            system("cls");
            strcpy(title_text,"Kelvin to Celsius ");
            title(title_text);
            k_c();
        }
        else if(choice == 5)
        {
            system("cls");
            strcpy(title_text,"Fahrenheit to Kelvin ");
            title(title_text);
            f_k();
        }
        else if(choice == 6)
        {
            system("cls");
            strcpy(title_text,"Kelvin to Fahrenheit ");
            title(title_text);
            k_f();
        }
        else if(choice == 7)
        {
            system("cls");
            strcpy(title_text,"About        ");
            title(title_text);
            about();
        }
    }
}

// case 1
void f_c()
{
    float fahrenheit, celsius;

    printf("\n\n\n\t\t\t\t\t        Enter Temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32)*5/9;

    printf("\n\n\n\t\t\t\t\t        Temperature in Celsius: %.2f \n", celsius);
    end();
}
//case 2
void c_f()
{
    float fahrenheit, celsius;

    printf("\n\n\n\t\t\t\t\t        Enter Temperature in Celsius: ");
    scanf("%f",&celsius);

    fahrenheit=(((celsius*9)/5)+32);

    printf("\n\n\n\t\t\t\t\t        Temperature in Fahrenheit: %.2f \n", fahrenheit);
    end();
}
//case 3
void c_k()
{
    float celsius, kelvin;

    printf("\n\n\n\t\t\t\t\t        Enter Temperature in Celsius: ");
    scanf("%f",&celsius);

    kelvin = celsius + 273;

    printf("\n\n\n\t\t\t\t\t        Temperature in Kelvin: %.2f \n", kelvin);
    end();
}
//case 4
void k_c()
{
    float celsius, kelvin;

    printf("\n\n\n\t\t\t\t\t        Enter Temperature in Kelvin: ");
    scanf("%f",&kelvin);

    celsius = kelvin - 273;

    printf("\n\n\n\t\t\t\t\t        Temperature in Celsius: %.2f \n", celsius);
    end();
}
//case 5
void f_k()
{
    float fahrenheit, kelvin;

    printf("\n\n\n\t\t\t\t\t        Enter Temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);

    kelvin = (((fahrenheit-32)*5)/9)+273;

    printf("\n\n\n\t\t\t\t\t        Temperature in Kelvin: %.2f \n", kelvin);
    end();
}
//case 6
void k_f()
{
    float fahrenheit, kelvin;

    printf("\n\n\n\t\t\t\t\t        Enter Temperature in Kelvin: ");
    scanf("%f",&kelvin);

    fahrenheit = (((kelvin-273)*9)/5)+32;

    printf("\n\n\n\t\t\t\t\t        Temperature in Fahrenheit: %.2f \n", fahrenheit);
    end();
}

int pattern_loop(int ch,int pn)
{
    for(int i=1; i<=pn; i++);
    printf("%c",ch);
}

//case 7
void about()
{
    hidecursor();
    system("color C0");
    printf("\n\t\t\t     \xC9");
    pattern_loop(205,54);
    printf("\xBB"); // printing the pattern using function.                              |
    printf("\n\t\t\t     \xBA      WELCOME TO TEMPERATURE CONVERSION APPLICATION  -1.0    \xBA");
    printf("\n\t\t\t     \xCC");
    pattern_loop(205,54);
    printf("\xB9");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA Developer : Md. Mirajul Islam Tashfi                        \xBA");
    printf("\n\t\t\t     \xBA email     : mirajul.tashfi12@gmail.com                      \xBA");
    printf("\n\t\t\t     \xBA Version   : 1.0 - 07 oct 2020 [Wednesday]                   \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA     This application is made with C Programming             \xBA");
    printf("\n\t\t\t     \xBA     Language. It's just a fun application to                \xBA");
    printf("\n\t\t\t     \xBA          practice and Develop my skills.                    \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA    I also make the program in a very complicated            \xBA");
    printf("\n\t\t\t     \xBA          way to make it with in less codes.                 \xBA");
    printf("\n\t\t\t     \xBA      You can visit my site to observe the codes.            \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA   please feel free to email me for any kind of help         \xBA");
    printf("\n\t\t\t     \xBA           and to give any kind of suggestions               \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA                     'THANK YOU'                             \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xBA                                                             \xBA");
    printf("\n\t\t\t     \xC8");
    pattern_loop(205,54);
    printf("\xBC");
    getch();
    main();
}
