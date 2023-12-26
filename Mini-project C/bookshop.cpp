#include<iostream>
#include<string>  // Include the necessary header for string
using namespace std;

int ascii = 178, i = 0;
char ch = ascii;

struct BookShop {
    int id;
    float price;
    string name, a_name, p_name;
} B[25];

void Heading() {
    cout << "\n";
    for (int i = 1; i <= 26; i++)
        cout << ch;
    cout << "Book Shop Project";
    for (int i = 1; i <= 26; i++)
        cout << ch;
}

void Insert() {
    system("cls");
    Heading();
    cout << "\n\n ENTER BOOK ID ->";
    cin >> B[i].id;
    cout << "\n\n ENTER BOOK NAME ->";
    cin >> B[i].name;
    cout << "\n\n ENTER AUTHOR NAME  ->";
    cin >> B[i].a_name;
    cout << "\n\n ENTER PUBLISHER NAME ->";
    cin >> B[i].p_name;
    cout << "\n\n ENTER BOOK PRICE ->";
    cin >> B[i].price;
    i++;
    cout << "\n\n\n" << ch << ch << "INSERT NEW BOOK" << ch << ch;
}


void Search() {
    system("cls");
    Heading();
    if (i == 0)
        cout << "\n\n\n" << ch << ch << "STRUCTURE IS EMPTY" << ch << ch;
    else {
        int t_id, found = 0;
        cout << "\n\n ENTER BOOK ID FOR SEARCH ->";
        cin >> t_id;
        for (int a = 0; a < i; a++) {
            if (t_id == B[a].id) {
                cout << "\n\n BOOK NAME ->" << B[a].name;
                cout << "\n\n AUTHOR NAME ->" << B[a].a_name;
                cout << "\n\n PUBLISHER NAME ->" << B[a].p_name;
                cout << "\n\n BOOK PRICE ->" << B[a].price;
                found++;
            }
        }
        if (found == 0)
            cout << "\n\n\n" << ch << ch << "BOOK ID NOT FOUND" << ch << ch;
    }
}

void update() {
    system("cls");
    Heading();
    if (i == 0)
        cout << "\n\n\n" << ch << ch << "STRUCTURE IS EMPTY" << ch << ch;
    else {
        int t_id, found = 0;
        cout << "\n\n ENTER BOOK ID FOR SEARCH ->";
        cin >> t_id;
        for (int a = 0; a < i; a++) {
            if (t_id == B[a].id) {
                cout << "\n\n BOOK NAME ->" << B[a].name;
                cout << "\n\n AUTHOR NAME ->" << B[a].a_name;
                cout << "\n\n PUBLISHER NAME ->" << B[a].p_name;
                cout << "\n\n BOOK PRICE ->" << B[a].price;
                found++;
            }
        }
        if (found == 0)
            cout << "\n\n\n" << ch << ch << "BOOK ID NOT FOUND" << ch << ch;
    }
}

int main() {
    int choice;

    p:
    system("cls");
    Heading();

    cout << "\n";
    for (int i = 1; i <= 26; i++)
        cout << ch;
    cout << "Book Shop Project";
    for (int i = 1; i <= 26; i++)
        cout << ch;
    cout << "\n\n" << ch << ch << "1.INSERT Book";
    cout << "\n\n" << ch << ch << "2.SEARCH Book";
    cout << "\n\n" << ch << ch << "3.UPDATE Book";
    cout << "\n\n" << ch << ch << "4.DELETE Book";
    cout << "\n\n" << ch << ch << "5.SHOW ALL Books";
    cout << "\n\n" << ch << ch << "6.EXIT";
    for (int i = 1; i <= 26; i++)
        cout << ch;
    cout << "\n\n" << ch << ch << "ENTER YOUR CHOICE ->";
    cin >> choice;

    switch (choice) {
    case 1:
        Insert();
        break;
    case 2:
        Search();
        break;
    case 3:
        // Add your code for updating a book
        break;
    case 4:
        // Add your code for deleting a book
        break;
    case 5:
        // Add your code for showing all books
        break;
    case 6:
        exit(0);
    default:
        cout << "\n\n" << ch << ch << "PLEASE SELECT CORRECT OPTION" << ch << ch;
    }

    return 0;
}
