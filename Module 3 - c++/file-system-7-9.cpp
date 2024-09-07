#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string data;

    // ifstream inp_file("data.txt");

    // for (int i = 0; i < 10; i++)
    // {
    //     getline(inp_file, data);
    //     cout << data << endl;
    // }

    // ofstream out_file("data.txt");
    // out_file << "\nThis is new text";

    ofstream out_file("data.txt", ios::app);
    out_file << "\nThis is new text";

    out_file.close();
    return 0;
}