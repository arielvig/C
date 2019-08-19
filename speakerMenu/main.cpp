#include <iostream>
#include <string>

using namespace std;
struct speaker
{
    string name, phone, topic;
    double fee;
};

int main()
{
    speaker info;
    speaker infos[10];
    int choice, i;
    do{
    cout << "Welcome to Speaker Search!" << endl;
    cout << "Enter 1 to view all speaker information." << endl;
    cout << "Enter 2 to enter new speaker information." << endl;
    cout << "Enter 3 to edit speaker information." << endl;
    cout << "Enter 4 to search speakers by topic." << endl;
    cout << "Enter 5 to search speakers by name." << endl;
    cout << "Enter 6 to search speakers by fee required." << endl;
    cin >> choice;

    if(choice == 1)
    {
        cout << "Name: " << infos[i].name << "Phone: " << infos[i].phone << "Topic: " << infos[i].topic << "Fee: " << infos[i].fee << endl;
    }
    if(choice == 2)
    {
        cout << "Enter a name: ";
        cin.ignore();
        getline(cin, infos[i].name);
        cout << "Enter phone number: " << endl;
        cin >> infos[i].phone;
        cout << "Enter a topic: " << endl;
        cin >> infos[i].topic;
        cout << "Enter a fee: " << endl;
        cin >> infos[i].fee;

    }

    if(choice == 3)
    {
        int sNum;
        cout << "Enter number of speaker you wish to edit:" << endl;
        cin >> sNum;
        while(sNum <= 0)
        {
            cout << "Invalid speaker number entered.";
            cin >> sNum;
        }
        cout << "Enter 1 to edit the speaker's name:" << endl;
        cout << "Enter 2 to edit the speaker's phone number:" << endl;
        cout << "Enter 3 to edit the speaker's topic:" << endl;
        cout << "Enter 4 to edit the speaker's fee required:" << endl;
        cin >> choice;
        while (choice < 1 || choice > 4)
        {
            cout << "Invalid option" << endl;
            cin >> choice;
        }
    }

    }while(choice > 1 || choice < 6);

    return 0;
}


/*



struct speakerInfo
    {
           string name;
           string bangoo;    //Japanese for phone
           string speakTopic;
           int feeReq;
           };

//Function prototypes
void getSpeaker(speakerInfo *);
void printSpeaker(speakerInfo *);
void editSpeaker(speakerInfo *);

int main()
{
        int NUM_SPEAKERS = 10; //The number of speakers
        int index;             //Loop counter...
        speakerInfo infos[10];    //Array to hold the stats for each speaker...

        //Choice for menu
        int submenu;

        do{
        cout << "Please select a choice from this submenu.\n"
             << "11) Enter Speaker Information.\n"
             << "22) Change Speaker Information.\n"
             << "33) Print Speaker Information.\n"
             << "44) Leave this menu.\n"
             << "Selection: ";
        cin >> submenu;

        switch (submenu){
               case enter:{
                    //enter speaker information
                    getSpeaker(infos);
                    }
                    break;
               case change:{
                    //change speaker information
                    editSpeaker(infos);
                    }
                    break;
               case print:{
                    //print speaker information
                    printSpeaker(infos);
                    }
                    break;
                    }}
                    while (submenu != leave);

   system("pause");
   return 0;
}
void getSpeaker(speakerInfo *p){ //where p stands for the array name
                                         //array name = pointer
     int index=0;
     int size=10; // Array size
     for (index=0; index < size; index++){
     cout <<"Please enter the following information of speaker "<<index<< " : \n";
     cout <<"Speaker Name:";
     cin.ignore();  //To skip remaining '\n' character
     getline (cin, p[index].name);
     cout<<"\nSpeaker Telephone Number:";
    // cin.ignore();  //To skip remaining '\n' character
     getline (cin, p[index].bangoo);
     cout<<"\nSpeaker Topic:";
    // cin.ignore(); //To skip remaining '\n' character
     getline (cin, p[index].speakTopic);
     cout<<"\nFee Required:";
     cin>>p[index].feeReq;
     }}

void printSpeaker(speakerInfo *p){
     int index=0;
     int size=10; // Array size
     for (index=0; index < size; index++){
     cout <<"The information entered for each speaker is: \n";
     cout << "SPEAKER "<<index<<endl;
     cout << "Speaker Name: "<<p[index].name<<endl;
     cout << "Speaker Telephone Number: "<<p[index].bangoo<<endl;
     cout << "Speaker Topic: "<<p[index].speakTopic<<endl;
     cout << "Speaker Fee Required: "<<p[index].feeReq<<endl;
     }}


void editSpeaker(speakerInfo *p){
     int i; //placeholder for the number wanted to be edited.
     cout << "Please enter the number of the speaker you would like to edit."
          << "\nExample: 5\n";
     cin >> i;
     if (i <=9)
          {
     cout << endl;
     cout <<"Please enter the updated information of the speaker: \n";
     cout <<"Speaker Name:";
     cin.ignore();  //To skip remaining '\n' character
     getline (cin, p[i].name);
     cout<<"\nSpeaker Telephone Number:";
     getline (cin, p[i].bangoo);
     cout<<"\nSpeaker Topic:";
     getline (cin, p[i].speakTopic);
     cout<<"\nFee Required:";
     cin>>p[i].feeReq;}
     else
     {
         cout << "I'm sorry, that is an invalid selection.\n"
              << "The speakers range from 0-9.\n"
              << "Please select this option again.\n\n";
              }
     }
*/
