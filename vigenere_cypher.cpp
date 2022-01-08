#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
string key(string s, string k)
{ int i = 0;
  while(k.length()<s.length())
  {

    k+=k[i];
    i++;
  }
  return k;
}
string encrypt(string s,string k)
{
  string res="";
  k = key(s,k);
  for (int i = 0; i < s.length(); i++)
  {
  res+=char((int(int(s[i])+int(k[i]))%26)+65);
  }
  return res;

}
string decrypt(string s,string k)
{
  string res="";
  k = key(s,k);
  for (int i = 0; i < s.length(); i++)
  {
  res+=char((int(int(s[i])-int(k[i])+26)%26)+65);
  }
  return res;

}
int  main()
{ while(1)
  {
    string s,k;
      cout<<"1.Encrypt\n";
      cout<<"2.Decrypt\n";
      cout<<"3.Exit\n";
      cout<<"Select operation: ";
      int choice;
      cin>>choice;
      switch (choice) {
        case 1:
        {
          cout<<"Enter plaintext and key: ";
          cin>>s;
          cin>>k;
          cout<<encrypt(s,k)<<"\n";
          break;
        }
        case 2:
        {
          cout<<"Enter encrypted text and key: ";
          cin>>s;
          cin>>k;
          cout<<decrypt(s,k)<<"\n";
          break;
        }
        case 3:
        {
          exit(0);
        }
      }


  }
  return 0;
}
