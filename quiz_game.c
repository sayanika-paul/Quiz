#include<stdio.h>

void t1(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nConstants, Variables and Datatypes\n\n");
    printf("1) Which of the following sequence is used for moving cursor to newline?\n (1) backslash n\n (2) backslash r\n (3) backslash t\n (4)backslash v");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==1){
        p1=5;
    }
    printf("\n2) Which of the following is not a C keyword?\n (1) Volatile\n (2) enum\n (3) unsigned\n (4) go");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==4){
        p2=5;
    }

    printf("\n3) which of the following is not allowed in a variable name?\n (1) aplhabets\n (2) underscores\n (3) hyphens\n (4) numbers");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==3){
        p3=5;
    }
    printf("\n4) Which of the following is a user defined datatype?\n (1) structre\n (2) integer\n (3) character\n (4) boolean");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==1){
        p4=5;
    }

    printf("\n5) Which of the following is a correct way of defining a symbolic constant?\n (1) #define MARKS=100\n (2) #define MARKS 100\n (3) define 100 MARKS\n (4) #define = MARKS 100");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==2){
        p5=5;
    }

    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t2(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nOperators and Expressions\n\n");
    printf("1) Which of the following is not an arithmetic operator?\n (1) +\n (2) @\n (3) *\n (4) -");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==2){
        p1=5;
    }
    printf("\n2) Which of the following is an assignment operator?\n (1) **\n (2) +-\n (3) *=\n (4) +=+");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==3){
        p2=5;
    }
    printf("\n3) Which of the following is used for determing size of the operand?\n (1) size()\n (2) sizeof()\n (3) bytes()\n (4) auto()");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==2){
        p3=5;
    }
    printf("\n4) The expression !(x<=y) is equivalent to?\n (1) x>y\n (2) x==y\n (3) x=x*y\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==1){
        p4=5;
    }
    printf("\n5) Which of the following is assignment operator?\n (1) *\n (2) =\n (3) +/\n (4) ");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==2){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t3(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nManaging Input and Output\n\n");
    printf("1) Which of the following format code is used for printing a signed decimal interger?\n (1) ampersand f\n (2) ampersand i\n (3) ampersand d\n (4) ampersand j");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==2){
        p1=5;
    }
    printf("\n2) Which of the following prefix is used for long double?\n (1) l\n (2) J\n (3) L\n (4) h");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==3){
        p2=5;
    }
    printf("\n3) Which of the following reads onr character from standard input?\n (1) putchar\n (2) getchar\n (3) printf\n (4) fetch");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==2){
        p3=5;
    }
    printf("\n4) String constants are enclosed within ____________ symbols\n (1) double quotes\n (2) single quotes\n (3) square bracets\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==1){
        p4=5;
    }
    printf("\n5) An input field may be skipped by specifying __ in place of field width?\n (1) +\n (2) *\n (3) **\n (4) /i");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==2){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t4(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nDecision making and Branching\n\n");
    printf("1) Which of the following statement is used for unconditional branching?\n (1) break\n (2) goto\n (3) return\n (4) switch");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==2){
        p1=5;
    }
    printf("\n2) Which of the following could be used for replacing multiple if-else?\n (1) for\n (2) goto\n (3) switch\n (4) do");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==3){
        p2=5;
    }
    printf("\n3) what will be the output of the following code?\nif(x=5)\nprintf(True);\nelse\nprintf(False)\n (1) True is printed\n (2) x is assigned value 5 and true is printed\n (3) false\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==4){
        p3=5;
    }
    printf("\n4) A program stops its execution when ____________ statement is encountered\n (1) switch\n (2) break\n (3) continue\n (4) else");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==2){
        p4=5;
    }
    printf("\n5) For using an else statement, we need to have a previous __________ statement?\n (1) else\n (2) if\n (3) break;\n (4) continue");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==2){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t5(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nDecision making and Looping\n\n");
    printf("1) Which of the following statement ends with semi-colon?\n (1) while\n (2) do while\n (3) for\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==3){
        p1=5;
    }
    printf("\n2) Which of the following statement could be used for immediately exiting the program?\n (1) exit()\n (2) break\n (3) goto\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==1){
        p2=5;
    }
    printf("\n3) Which of the following statement skip the execution of the remaining part of the loop?\n (1) break\n (2) continue\n (3) both 1 and 2\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==1){
        p3=5;
    }
    printf("\n4) Choose the correct C statement\n (1) Lopps execute a group of statements repeatedly\n (2) loops usually execute as long as condition is met\n (3) loops take advantage of loop counter\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==4){
        p4=5;
    }
    printf("\n5) Loops in C language are implemented using\n (1) for block\n (2) while block\n (3) do-while block\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==4){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t6(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nArray\n\n");
    printf("1) How many integer values can the array N[5][5]?\n (1) 10\n (2) 25\n (3) 16\n (4) 24");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==2){
        p1=5;
    }
    printf("\n2) What index value should be used to access the last element of the array N[10]?\n (1) 10\n (2) 9\n (3) 11\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==2){
        p2=5;
    }
    printf("\n3) Array can be classified as: \n (1) derieved datatype\n (2) fundamental datataype\n (3) user defined datatype\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==1){
        p3=5;
    }
    printf("\n4) Arr[5] = {1, 2, 3, 4, 5};\nArr[2] will be\n (1) 4\n (2) 3\n (3) 2\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==2){
        p4=5;
    }
    printf("\n5) Subscript of an array could be:\n (1) integer constatnt\n (2) integer variable\n (3) expressions that yeild integer\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==4){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t7(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nCharacter Arrays and Strings\n\n");
    printf("1) Which of the following can be returned by strcmp()?\n (1) Positive value\n (2) Negative value\n (3) Zero\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==4){
        p1=5;
    }
    printf("\n2) Which of the following functions can be used to concatenate only a specific number of character from one string to another?\n (1) strcat()\n (2) strstr()\n (3) strncat()\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==3){
        p2=5;
    }
    printf("\n3) Which function could be used for determining the length of a string\n (1) length()\n (2) strlen()\n (3) strcat()\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==2){
        p3=5;
    }
    printf("\n4) String are enclosed within:\n (1) double quotes\n (2) single quotes\n (3) square brackets\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==1){
        p4=5;
    }
    printf("\n5) Which of the following header file could be used for string functions\n (1) <stdlib.h>\n (2) <stringh.h>\n (3) <string.h>\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==3){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t8(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nCUser-defined Functions\n\n");
    printf("1) A function that calls itself is a ________ function\n (1) recursive\n (2) library\n (3) calling\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==1){
        p1=5;
    }
    printf("\n2) In C program, the function definition can be placed \n (1) before the main function\n (2) after the main function\n (3) within the main function\n (4) both 1 and 2");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==4){
        p2=5;
    }
    printf("\n3) Function declaration should consist of\n (1) return type\n (2) parameter list\n (3) function name\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==4){
        p3=5;
    }
    printf("\n4) Parameters are written within\n (1) paranthesis\n (2) single quotes\n (3) square brackets\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==1){
        p4=5;
    }
    printf("\n5) The return type must be _____ if no value is returned\n (1) void\n (2) char\n (3) int\n (4) boolean");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==1){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t9(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0;
    printf("\nStructures and Unions\n\n");
    printf("1) Which of the following operators can be used with structure variables\n (1) =\n (2) +\n (3) ==\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==1){
        p1=5;
    }
    printf("\n2) Structure definition should end with \n (1) :\n (2) .\n (3) ;\n (4) either 1 or 3");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==3){
        p2=5;
    }
    printf("\n3) What is the size of a C structure?\n (1) C structure is always 128 bytes\n (2) size of C structure is the totatl bytes of all elements of structure\n (3) size of C structure is the size of largest elements\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==4){
        p3=5;
    }
    printf("\n4) Structures can contaion\n (1) integer values\n (2) float values\n (3) characters\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==4){
        p4=5;
    }
    printf("\n5) The size of a union is determined by the size of the __________\n (1) first member in the union\n (2) Last member in the union\n (3) biggest member in the union\n (4) Sum of the sizes of all members");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==1){
        p5=5;
    }
    printf("\n\nYour score: %d", p1+p2+p3+p4+p5);
}
void t10(){
    int a1, a2, a3, a4, a5, p1=0, p2=0, p3=0, p4=0, p5=0, p;
    printf("\nPointers\n\n");
    printf("1) Pointer to a pointer could be defined as\n (1) *ptr\n (2) ptr*prt\n (3) **ptr\n (4) all of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a1==3){
        p1+=5;
    }
    printf("\n2) A pointer stores the _______ of another variable\n (1) address\n (2) value\n (3) compliment\n (4) either 1 or 3");
    printf("\nAnswer: ");
    scanf("%d", &a2);
    if(a2==1){
        p2+=5;
    }
    printf("\n3) Prior to using a pointer it should be\n (1) declared\n (2) initiaized\n (3) both 1 and 2\n (4) none of the above");
    printf("\nAnswer: ");
    scanf("%d", &a1);
    if(a3==3){
        p3+=5;
    }
    printf("\n4)  The address operator &, cannot act on\n (1) R-values\n (2) arithmetic expressions\n (3) both 1 and 2\n (4) local variables");
    printf("\nAnswer: ");
    scanf("%d", &a4);
    if(a4==3){
        p4+=5;
    }
    printf("\n5) In order to fetch the address of the variable we write preceding _________ sign before variable name.\n (1) comma\n (2) pound\n (3) ampersand\n (4) asterisk");
    printf("\nAnswer: ");
    scanf("%d", &a5);
    if(a5==3){
        p5+=5;
    }
    p = p1+p2+p3+p4+p5;
    printf("\n\nYour score: %d", p);
}
void quiz(){
    int i, j;
    printf("\n\nPress 1 and then enter key for starting the quiz  ");
    scanf("%d", &i);
    if(i==1){
        printf("\nChoose your topic. Press\n1 for constants, variables and datatypes.\n2 for operators and expressions.\n3 for managing input and output operations.\n4 for decision making and brancing.\n5 for decision making and looping.\n6 for arrays.\n7 for character arrays and strings.\n8 for user defined functions.\n9 for structures.\n10 for pointers\n\n");
        printf("\nTopic: ");
        scanf("%d", &j);
        if(j==1){
            t1();
        }
        else if(j==2){
            t2();
        }
        else if(j==3){
            t3();
        }
        else if(j==4){
            t4();
        }
        else if(j==5){
            t5();
        }
        else if(j==6){
            t6();
        }
        else if(j==7){
            t7();
        }
        else if(j==8){
            t8();
        }
        else if(j==9){
            t9();
        }
        else if(j==10){
            t10();
        }
    }
    else{
        printf("Can't start the quiz");
    }
}
int main(){
    int d;
    printf("\t\t\t\t\t\tQUIZ\n");
    printf("\nAll the questions are compulsory.\n+5 fir each correct answer.\nNo negative scoring");
    quiz();
    printf("\n\nWant to take another quiz?\n 1 for Yes / 0 for No: ");
    scanf("%d", &d);
    if(d==1){
        quiz();
    }
    printf("\n\nTHANK YOU");
    return 0;
}
