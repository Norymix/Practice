#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

void WriteFile(string str)
{
    ofstream file;
    file.open ("record.txt", ios::app);
    file << str << "\n";
    file.close();
}

int ReadSize(char ch, bool flag)
{
    int x;
    cout << "\nEdit size array " << ch <<" = ";
    if (flag) { char s[50]; sprintf(s, "%s %c", "\nСчитываем размерность массива ", ch); WriteFile(s); }
    cin >> x; 
    if (flag) { char s[50]; sprintf(s, "%s %c %c %d","Размерность массива ", ch, '=', x); WriteFile(s); }
    return x;
}

void ReadArray(int *array, int x, char ch, bool flag)
{
    cout << "Array " << ch << ":" << endl;
    for (int i=0; i<x; i++) 
    {
        cout << "Array["<< i << "] = ";
        scanf("%i", array+i);
        if (flag)  { char s[50]; sprintf(s, "%s %d", "Элемент массива =", array[i]); WriteFile(s); }
    }
}

int Treatment(int *array, int x, char ch, bool flag)
{
    if (flag)  { char s[50]; sprintf(s, "%s %c", "\nЧитаем количество смен знака в массиве ", ch); WriteFile(s); }
    int N = 0, r = array[0];
    for (int i = 0; i < x; i++)
    {
        if ((r>0 && array[i]<0) || (r<0 && array[i]>0))
        {
            N++;
        }
        r = array[i];
    }
    if (flag) { char s[70]; sprintf(s, "%s %c %c %i", "Количевство смен знака в массиве", ch, '=', N);  WriteFile(s); }
    return N;
}

void PrintfArray(int *array, int x, char ch, bool flag)
{
    if (flag) { char s[70]; sprintf(s, "%s %c", "\nСамое большое число смен знака в массиве", ch);  WriteFile(s); }
    cout << "\nThe largest number of sign swapping in array - " << ch << endl;
    for (int i = 0; i < x; i++) cout << ch << "[" << i << "]=" << array[i] << endl;
}

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "rus");
    cout << "Hello! Do you want to keep a record of the work program? (Y/N)\n";
    char c;
    bool flag = false;
    while (true)
    {
        cin>>c;
        bool def = (c=='y' || c=='Y' || c=='n' || c=='N');
        if (def) 
            {
                if (c=='y' || c=='Y') 
                {
                    flag = true;
                    WriteFile("Будут записываться логи работы программы!");
                    break;
                }
                else
                {
                    if (c=='n' || c=='N') break;
                }
            }
        cout << "You did not specify your choice! (Y/N)\n";
    }
    int SizeA = ReadSize('A', flag);
    int A[SizeA];
    ReadArray(A, SizeA, 'A', flag);
    int SizeB = ReadSize('B', flag);
    int B[SizeB];
    ReadArray(B, SizeB, 'B', flag);
    int SizeC = ReadSize('C', flag);
    int C[SizeC];
    ReadArray(C, SizeC, 'C', flag);
    int Per_A = Treatment(A, SizeA, 'A', flag);
    int Per_B = Treatment(B, SizeB, 'B', flag);
    int Per_C = Treatment(C, SizeC, 'C', flag);
    if ((Per_A > Per_B) && (Per_A > Per_C)) PrintfArray(A, SizeA, 'A', flag);
    else
        if ((Per_B > Per_A) && (Per_B > Per_C)) PrintfArray(B, SizeB, 'B', flag);
    else
        if ((Per_C > Per_A) && (Per_C > Per_B)) PrintfArray(C, SizeC, 'C', flag);
    else
    {
        if (flag) WriteFile("Количество смен знака во всех массивах одинаковое");
        cout << "The number of sign changes in all the same arrays\n";
    }
    //system("pause");
}
