//Sezer Mehmed - String Palindrome using stack
#include <malloc.h>
#include <cstring>
#include <iostream>
using namespace std;
int top = -1;
char* stack;

void push(char ele)
{
    stack[++top] = ele;
}
char pop()
{
    return stack[top--];
}

// Function that returns 1
// if str is a palindrome
int isPalindrome(char str[])
{
    int length = strlen(str);

    // Allocating the memory for the stack
    stack = (char*)malloc(length * sizeof(char));

    // Finding the mid
    int i, mid = length / 2;

    for (i = 0; i < mid; i++) {
        push(str[i]);
    }

    // Check if the length of the string
    // is odd, if odd then neglect the
    // middle character
    if (length % 2 != 0) {
        i++;
    }

    // While not the end of the string
    while (str[i] != '\0') {
        char ele = pop();

        // If the characters differ then the
        // given string is not a palindrome
        if (ele != str[i])
            return 0;
        i++;
    }
    return 1;
}

int main()
{
    char str[100];
    cout << "Give a word to check polindorme or not." << endl << ">> ";
    cin >> str;
  
    if (isPalindrome(str))
    {
        cout << ("it is a polindrome");
    }
    else
    {
        cout << ("it is not a palindrome");
    }

    return 0;
} 
