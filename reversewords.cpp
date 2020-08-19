#include <iostream>
#include <string>


void reverseChars(std::string& str, int startIndex, int endIndex)
{
  while(startIndex < endIndex){
    char temp = str[startIndex];
    str[startIndex] = str[endIndex];
    str[endIndex] = temp;
    startIndex++;
    endIndex--;
  }
}


void reverseWord(std::string& str)
{
  if (str.empty()){
    return;
  }
  reverseChars(str, 0, str.length()-1); 
  int startIndex = 0; 

  for (int i = 0, n = str.length(); i <=n ; i++){
    if (i == n || str[i] == ' '){
      int end = i -1; 
      reverseChars(str, startIndex, end); 
      startIndex = i+1; 
    }
  }
}


int main() 
{
  std::string message = "This is a test";

  std::cout << message << '\n';
  reverseWord(message); 
  std::cout << message << '\n';

}
