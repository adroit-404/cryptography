#include <iostream>
#include <string>
using namespace std;

/*~~~~~~~~~~~ Declaring functions ~~~~~~~~ */

void encode();
void decode();

void choices()  //Prompts user to input choices
  {
    int choice;
    string opt[3] = {"1. Encode","2. Decode","3. Exit" };
    cout<<opt[0]<<endl<<opt[1]<<endl<<opt[2]<<endl<<"Please enter your choice: ";
    cin>>choice;
    cin.ignore();
    if(choice == 1) encode();
    if(choice == 2) decode();
  }

int main()
  {
    choices();
  }
void encode()  //Starts Encoding
  {
    string msg;
    int key = 3;
      cout<<"Please Enter the plain text to Encrypt: ";
      getline(cin,msg);     //Takes plain text and saves it into msg
      for(int i = 0; i < msg.size(); i++)
        {
          if(msg[i] >= char(65) && msg[i] <= char(87) || msg[i] >= char(97) && msg[i] <= char(119))
            cout<< char(msg[i] + key);
          else if(msg[i] > char(86) && msg[i] <= char(90) || msg[i] > char(119) && msg[i] <= char(122))
            cout<< char(msg[i] - 23);
          else                                                //for special characters
            cout<<msg[i];
        }
      return;
  }

  void decode()  //Starts Encoding
    {
      string msg;
      int key = 3;
      cout<<"Please Enter your Encrypted Text: ";
      getline(cin,msg);     //Takes plain text and saves it into msg
      for(int i = 0; i < msg.size(); i++)
        {
          if(msg[i] >= char(65) && msg[i] <= char(87) || msg[i] >= char(97) && msg[i] <= char(119))
            cout<< char(msg[i] - key);
          else if(msg[i] > char(86) && msg[i] <= char(90) || msg[i] > char(119) && msg[i] <= char(122))
            cout<< char(msg[i] + key);
          else                                                //for special characters
            cout<<msg[i];
        }
    return;
    }
