///Muhammad Hamza

# include<iostream>
# include<conio.h>
using namespace std;
int main()
{  cout<<"The WOrking of Programe is :"<<endl<<endl;
   cout<<"\t\tHamza then press 'dote' when"<<endl<<"\t\tplease complete then Press 'Dote' "<<endl;
   cout<<"\t\tFor Example: Peter 'Dote' please'dote' answwer "<<endl;
   cout<<"\t\tTerminate the Question line  with 'Question Marks'";
    const int Unknown_Character_Size=50;   // Array Size constant
    const int Local_Size_of_Character=15;  // Array Size constant
    int x;   // X variable for Count Unknow

    char Show_Character,character[Local_Size_of_Character],peter[Local_Size_of_Character]={'p','l','e','a','s','e',' ',' ',' ',' ',' ',' ',' ','\0'};
    char Question[Unknown_Character_Size]; // This Array for the get question from user.

while(true){
  cout<<endl;
  cout<<"Repitition:";//Hamza then press 'Space' when please complete then Press 'Dote' "
  for(int i=0; i<12; i++){  // If you write Hidan code then press "Space" not Dote
  Show_Character=getch();
      if(Show_Character=='.'){
          cout<<" ";
          x=0;
        while(true){
        character[x]=getch();
        cout<<peter[x];
        if(character[x]=='.'){
          cout<<" ";
          break;}
        x++;
        }

      }
      if(Show_Character=='.')continue;
      cout<<Show_Character;
  }
  cout<<endl<<"Ask Question:\t";   //This loop Ask the Question from User.
  for(int qus_loop=0; qus_loop<=50; qus_loop++){
           Question[qus_loop]=getche();
           if(Question[qus_loop]=='?')       // Terminate the Question line  with 'Question Marks'
           break;
       }

  cout<<endl;
  cout<<"The Answe :\t";   //This Section show the Output

  for(int j=0; j<=x; j++)
  cout<<character[j];
   // This Section Ask the user More Question
  cout<<endl<<endl;
  char continue_Break_Character;
  cout<<"Are you intersted ask more question. Then press Y/N";
  continue_Break_Character=getch();
  if(continue_Break_Character=='Y' || continue_Break_Character=='y')continue;
  if(continue_Break_Character=='N' || continue_Break_Character=='n')break;
  }
cout<<endl<<"Thanks...";
}
