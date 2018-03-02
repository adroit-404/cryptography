#include <iostream>
#include <string.h>
using namespace std;

/*~~~~~ Declaring functions ~~~~~~ */
void encode();
void decode();


void choices() //Prompts Options to the user
  {
    int select;
    string option[] = {"1. Encode","2. Decode","3. Exit" };
    cout<<option[0]<<endl<<option[1]<<endl<<option[2]<<endl<<"Please Select an option: ";
      cin>>select;
      cin.ignore();
        if(select == 1) encode();
        if(select == 2) decode();
  }

int main()  // My Main function
  {
    choices();
  }

void encode()  //Starts Encoding
  {
    string msg;
    int key = 13;
    cout<<"Please Enter the plain text to Encrypt: ";
    getline(cin,msg);     //Takes plain text and saves it into msg

    for(int i = 0; i < msg.size(); i++)
      {
        if(msg[i] >= char(65) && msg[i] <= char(77) || msg[i] >= char(97) && msg[i] <= char(109))
          cout<< char(msg[i] + key);
        else if(msg[i] > char(77) && msg[i] <= char(90) || msg[i] > char(109) && msg[i] <= char(122))
          cout<< char(msg[i] - key);
        else                                                //for special characters
          cout<<msg[i];
      }
  return;
  }

void decode()  //Starts Decoding
  {
    string msg;
    int key = 13;
      cout<<"Please Enter your Encrypted Message: ";
      getline(cin, msg);
    for(int i = 0; i < msg.size(); i++)
      {
        if(msg[i] >= char(65) && msg[i] <= char(77) || msg[i] >= char(97) && msg[i] <= char(109))
          cout << char(msg[i] - key);
        else if(msg[i] > char(77) && msg[i] <= char(90) || msg[i] > char(109) && msg[i] <= char(122))
          cout<< char(msg[i] + key);
      }
  }
