// topic 4: Strings - functions over strings
//1) Strings in C: char S[10]; // array of char's
// functions;
// strcpy(s1, s2) - copy s2 over s1
// strcmp(s1, s1) - compares s1 and s2
// strlen(s) - lenght of string
// strcpy(s1, s2, n) - copy first n chars of s2 over s1
// strncmp(s1, s1 ,n) - compare n chars of s1 and s2
// stricmp(s1, s2) - lower case or upper case no matter
// stripz(s) - transform lower to upper cas 
// strlwr(s) - transform upper to lower case 
// strcat(s1, s2) - concatenate s1 and s2 (s1 + s2)
// strncat(s1, s1, n) - concatenate n chars of s2 -> s1
// strchr(s1, char) - search char in s1
// strbrk(s1, s2) - return pointer to char = any of chars in s2
// strstr(s1, s2) - return pointer to the beginning of s2 in s1
// example1 - page 72/6.8
// example2: enter several ID-numbers, check for duplicates.
// find sex - male or famale, sort ascending.
#include <iostream>
#include <string>
using namespace std;
void main() 
{
char egn[10][11], temp[11];
int i, br, j, sex;
	do 
	{
		cout << "\n How many ID numbers: ";
		cin >> br;
	} while(br < 1 || br > 10);
	cin.ignore();
	for(i = 0; i < br; i++)
	{
		cout << "\n Enter ID: ";
		cin.getline(egn[i], 11);
	for(j = i - 1; j >= 0; j--) 
		if(!strcmp(egn[i], egn[j]))
		{
		cout << "\n Enter different ID";
		i--; break;
		}}
		for(i = 0; i < br; i++)
		{
		cout << egn[i] << "\t";
		sex = egn[i][9] - '\0';
		if(sex % 2 == 0)
			cout << "male" << endl;
		else cout << "famale" << endl;
		}
		for(i = 0; i < br - 1; i++)
			if(strcmp(egn[i], egn[i + 1]) > 0)
			{
			strcpy(temp, egn[i]);
			strcpy(egn[i], egn[i + 1]);
			strcpy(egn[i + 1], temp);
			}
			for(i = 0; i < br; i++)
				cout << egn[i] << "\t";
			cout << endl;
			system("pause");
		}
// Strings in C++: string s; // vector of chars
// functions:
// s.size() - number of chars
// s.empty() - true if empty string
// s1.append(s2) - append s2 to the end of s1
// s1.compare(s2) - return 0 if s1 = s2
// s1.assign(s2) - copy s2 to s1
// s1.swap(s2) - exchange s1 and s2
// int pos = s1.find(s2, 0) -search substring s2 in s1, starting from 0 position
// find_first_of or find_first_not_of // (find first appearance of char of s2 in s1)
// find_last_of or find_last_not_of
// s1.insert(position, s2) -inserts s2 in s1
// s.erase(position, number of chars) - delete a part of string
// s.replace(position, number of chars, s2) - replace a part of s1 with s2 at (position of char) - extract a char at position 
