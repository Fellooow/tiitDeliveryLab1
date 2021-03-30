//боре.*/
//
//
//#include <iostream>
//#include <string>
//#include "Bor.h"
//
//using namespace std;
//
////const int ALPHABET_SIZE = 26;
////
////struct vertex
////{
////    vertex* next[ALPHABET_SIZE];
////    int strings_amount;
////
////    vertex();
////};
////
////vertex::vertex()
////{
////    for (int i = 0; i < ALPHABET_SIZE; ++i)
////    {
////        next[i] = nullptr;
////    }
////    strings_amount = 0;
////}
////
////vertex* root = new vertex();
////
////void add_string(string& line)
////{
////    vertex* current = root;
////    int n = line.length();
////    for (int i = 0; i < n; ++i)
////    {
////        int symbol = line[i] - 'a';
////        if (current->next[symbol] == nullptr)
////        {
////            current->next[symbol] = new vertex();
////        }
////        current = current->next[symbol];
////    }
////    current->strings_amount++;
////}
////
////void delete_string(string& line)
////{
////    vertex* current = root;
////    int n = line.length();
////    for (int i = 0; i < n; ++i)
////    {
////        current = current->next[line[i] - 'a'];
////        if (current == nullptr)
////        {
////            return;
////        }
////    }
////    current->strings_amount--;
////}
////
////bool has_a_string(string& line)
////{
////    vertex* current = root;
////    int n = line.length();
////    for (int i = 0; i < n; ++i)
////    {
////        current = current->next[line[i] - 'a'];
////        if (current == nullptr)
////        {
////            return false;
////        }
////    }
////    return current->strings_amount > 0;
////}
////
////string output = "";
////
////void output_all_strings(vertex* current = root)
////{
////    for (int i = 0; i < current->strings_amount; ++i)
////    {
////        cout << output << "\n";
////    }
////    for (int i = 0; i < ALPHABET_SIZE; ++i)
////    {
////        if (current->next[i] != nullptr)
////        {
////            output.push_back('a' + i);
////            output_all_strings(current->next[i]);
////            output.pop_back();
////        }
////    }
////}
//
//int main()
//{
//    vertex* root = new vertex();
//    while (true)
//    {
//        cout << "\t1 - Add WORD\n" << "\t2 - Erase WORD\n" << "\t3 - Find WORD\n" << "\t4 - Show Tree\n" << "\t5 - Exit\n";
//        char type;
//        cin >> type;
//        if (type == '1')
//        {
//            string word;
//            system("cls");
//            cout << "Word to add (say no to probel)" << endl;
//            cin >> word;
//            add_string(word,root);
//        }
//        else if (type == '2')
//        {
//            string word;
//            system("cls");
//            cout << "Word to erase" << endl;
//            cin >> word;
//            delete_string(word,root);
//        }
//        else if (type == '3')
//        {
//            string word;
//            system("cls");
//            cout << "Find word" << endl;
//            cin >> word;
//            has_a_string(word,root) ? cout << "YES\n" : cout << "NO\n";
//        }
//        else if (type == '4')
//        {
//            system("cls");
//            cout << "\n";
//            clear_output();
//            output_all_strings(root);
//        }
//        else if (type == '5')
//
//            exit(0);
//    }
//
//    return 0;
//}

/*Бор.Вставка строки в бор.Удаление строки из бора.Поиск строки в
боре.*/


#include <iostream>
#include <string>
#include "Bor.cpp"

using namespace std;

int main()
{
	vertex* root = new vertex();
	while (true)
	{
		cout << "Use only ENGLISH" << endl;
		cout << "\t1 - Add WORD\n" << "\t2 - Erase WORD\n" << "\t3 - Find WORD\n" << "\t4 - Show Tree\n" << "\t5 - Exit\n";
		char type;
		cin >> type;
		if (type == '1')
		{
			string word;
			system("cls");
			cout << "Word to add (say no to probel)" << endl;
			cin >> word;
			add_string(word, root);
			system("cls");
		}
		else if (type == '2')
		{
			string word;
			system("cls");
			cout << "Word to erase" << endl;
			cin >> word;
			delete_string(word, root);
			system("cls");
		}
		else if (type == '3')
		{
			string word;
			system("cls");
			cout << "Find word" << endl;
			cin >> word;
			has_a_string(word, root) ? cout << "YES\n" : cout << "NO\n";
		}
		else if (type == '4')
		{
			system("cls");
			cout << "\n";
			clear_output();
			output_all_strings(root);
		}
		else if (type == '5')

			exit(0);
	}

	return 0;
}