#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    fstream output;
    char* liczby = new char[10000];
    file.open("binarysearch.dat", ios::in);
    output.open("sorted.dat", ios::out);
    if(file.good())
    {
        for(int i = 10; i <= 10000; i+=10)
        {
            if(i < 100 && i >= 10)
            {
                file.seekg(3, ios_base::cur);
                file.getline(liczby, 20);
                
                output.write(liczby, strlen(liczby));
                output << endl;
            }
            else if(i >= 100 && i < 1000)
            {
                file.seekg(4, ios_base::cur);
                file.getline(liczby, 20);
                output.write(liczby, strlen(liczby));
                output << endl;
            }
            else if(i>=1000 && i < 10000)
            {
                file.seekg(5, ios_base::cur);
                file.getline(liczby, 20);
                output.write(liczby, strlen(liczby));
                output << endl;
            }
            
        }
    }
    file.close();
    output.close();
    cout << "Wykonano!";
    delete[] liczby;
}
