#include <iostream>
#include <string>
using namespace std;

void affine(string text, int x, int y)
  {
    for(int i = 0; i < text.size(); i++)
      {
        if(text[i] >= char(65) && text[i] <= char(77))
          cout<< int(text[i] - 65);
        else if(text[i] >= char(97) && text[i] <= char(109))
          cout << int(text[i] - 97);
        else if (text[i] > char(77) && text[i] <= char(90))
          cout << int(text[i] - 97);
        else if (text[i] > char(109) && text[i] <= char(122))
            cout<< char(text[i] - 109);

      }
    std::cout <<x<<y << '\n';
  }

int main()
  {
    string msg;
    int a,b;
    cout<<"Enter the plain text: ";
    getline(cin , msg);
    cout<<"Enter A Coefficient: ";
    cin>>a;
    cin.ignore();
    cout<<"Enter B Coefficient: ";
    cin>>b;
    cin.ignore();
    affine(msg, a , b);
  }
