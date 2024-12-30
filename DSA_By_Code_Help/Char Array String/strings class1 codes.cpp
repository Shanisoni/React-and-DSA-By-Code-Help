#include <iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int size) {

  
  int index = 0;
  while(ch[index] != '\0') {
    index++;
  }
  return index;

    
  // int length = 0;

  // for(int i=0; i<size; i++) {
  //  if(ch[i] == '\0') {
  //    //ruk jao
  //    break;
  //  }
  //  else {
  //    length++;
  //  }
  // }

  // return length;
}

void reverseString(char ch[] , int n) {
  int i=0; 
  int j = n-1;

  while(i<=j) {
    swap(ch[i], ch[j]);
    i++;
    j--;
  }
  
}

void convertToUpperCase(char ch[], int n) {

  int index = 0;

  while(ch[index] != '\0') {
    
    //check if lowercase, then convert to upper case
    if(ch[index] >= 'a' && ch[index] <='z') {
      ch[index] = ch[index] - 'a' + 'A';
    }
    index++;
  }
}

void replaceCharacter(char ch[], int n) {
  int index = 0;
  
  while(ch[index] != '\0') {
    if(ch[index] == '@') {
      //insert space
      ch[index] = ' ';
    }
    index++;
  }
}

bool checkPalindrome(char ch[], int n) {
  //n -> length of string
  int i=0; 
  int j = n-1;

  while( i<= j) {
    if(ch[i] == ch[j]) {
      i++;
      j--;
    }
    else {
      //characters are not matching
      return false;
    }
  }
  //agar yaha pohjoch gye ho
  //iska matlab saare characters match kr gye h 
  ///iska matlab palindrome hai 
  //iska matlab return true krdo
  return true;
  
}


int main() {

  // string name;

  // cin >> name;

  //empty string
  //string temp = "";

  // cout << "Length of string: "  << name.length() << endl;
  // cout << "String is empty or not: " << temp.empty() << endl;
  //cout <<"Character at position 0 is: " << name.at(0) << endl;

  // cout << "Front character of string is: "<< name.front() << endl;
  // cout << "back character of string is: "<< name.back() << endl;

  // string str1 = "Love";
  // string str2 = "Babbar";

  // cout << "before appending" << endl;
  // cout << str1 << endl;
  // cout << str2 << endl;
  
  // //apend
  // str1.append(str2);

  // cout << "After appending" << endl;
  // cout << str1 << endl;
  // cout << str2 << endl;

  // string desc = "This is a car";
  // desc.erase(4, 3);
  // cout << desc << endl;


  // string name = "Love Babbar";
  // string middle = "kumar ";

  // name.insert(5, middle);

  // cout << "Printing name:  " << name << endl;


  // string name = "love" ;

  // cout << name << endl;

  // name.push_back('R');
  // cout << name << endl;

  // name.pop_back();
  // cout << name << endl;


  // string str1 = "yaar tera super star desi kalakar";
  // string str2  = "staryyyy";


  // if(str1.find(str2) == string::npos){
  //  //not found
  //  cout << "Not FOund" << endl;
  // }
  // else {
  //  cout << "Found" << endl;
  // }

  // string str1 = "babbar";
  // string str2 = "Love";

  // if(str1.compare(str2) == 0) {
  //  cout << "Matching" << endl;
  // }
  // else {
  //  cout << "not matching " << endl;
  // }


  string desc = "this is a car, big daddy of all suvs";

  cout << desc.substr(19, 5) << endl;
  
  















  
  // //creation
  // string name;

  // //input
  // //cin >> name;
  // //getline(cin, name);

  // //print
  // cout <<"Printing name: "  << name << endl;

  //cout << "printing first character: "  << name[0] << endl;
  // int index = 0;
  // while(name[index] != '\0') {
  //  cout << "index: " << index <<" character: " << name[index] << endl;
  //  index++;
  // }

  // cout << "Printing index 6 value: " << name[6] << endl;
  // int value = (int)name[6];

  // cout << "Value: " << value << endl;

  

  // char ch[100];

  // //cin >> ch;
  // cin.getline(ch, 100);

  // int len = findLength(ch, 100);

  // bool isPalindrome = checkPalindrome(ch, len);
  
  // if(isPalindrome) {
  //  cout << "Valid Palindrome" << endl;
  // }
  // else {
  //  cout << "Invalid Palindrome" << endl;
  // }

  // cout << "before " << ch << endl;
  // replaceCharacter(ch,100);
  // // convertToUpperCase(ch, 100);
  // cout << endl << "after " << ch << endl;
  
  

  // cout << "Before " << ch << endl;
  
  // int len = findLength(ch, 100);
  
  // reverseString(ch,len);
  
  // cout<<endl << "After " << ch << endl;


  
  // int len = findLength(ch, 100);

  // cout << "length og string is: "<< len << endl;
  // cout << "printing length: " << strlen(ch) << endl;
  


















  
    // //creation
    // char ch[100];
  
    // //input 
    // //cin >> ch;
    // cin.getline(ch, 100);
  
    // ///print
    // cout<< "Printing the value of ch: " << ch << endl;
  
  //   //printing using loop
  //   for(int i=0; i<10; i++) {
  //    cout <<"At Index: " << i << " " << ch[i] << endl;
  //   }

 //   char temp = ch[6];
  // int value = (int)temp;
  // cout << "printing integer value: " << value << endl;



//   int arr[10];
//   //input
//   for(int i=0; i<10; i++) {
//     cin >> arr[i];
//   }
//print
// for(int i=0; i<10 ; i++) {
//   cout << arr[i];
// }
  return 0;
}