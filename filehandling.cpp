#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream write_data;
    ifstream read_data;
    string st;
    int ctr = 0;
    write_data.open("my file.txt");

    char ch;
    if (!write_data)
    {
        cout << "file not opened";
    }
    else
    {
        int num[] = {1, 2, 1, 2, 3, 3, 3};
        // for (int i = 0; i < 7; i++)
        // {
        //     write_data << num[i]<<"\n";
        // }
        int i = 2;

        while (i != 0)
        {
            getline(cin, st);
            write_data << st<<endl;
            i--;
        }
    }
    write_data.close();
    int num, a, b, c, d, e, no;
    no = 3;
    read_data.open("my file.txt");
    // while (read_data>>noskipws  >> ch)
    // while(read_data.get(st))
   while(read_data>>noskipws>>ch)
    {
        ctr++;
        // if(ch=="\n")
        // continue;
        cout << st;
    }
    // read_data>>a>>b>>c>>d>>e;
    // cout<<a<<b<<c<<d<<e;
    // while(read_data>>num)
    // {
    //      if(num == 3)
    //      {
    //      cout<<"match found\n";
    //      ctr++;
    //      }
    //     //cout<<num;
    // }
     cout<<ctr;
    read_data.close();
}