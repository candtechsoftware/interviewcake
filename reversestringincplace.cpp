#include <iostream> 

void swap(std::string str, int left, int right)
{
  auto tmp = str[left];
  str[left] = str[right];
  str[right] = tmp;
}

void reverse(std::string& str){
  int l = 0, r = str.length()-1 ;

  while (l < r) {
    std::swap(str[l], str[r]);
    l++;
    r--; 
  }
}

int main(){
  std::string a = "this"; 
  std::cout << a << '\n';
  reverse(a);
  std::cout << a << '\n';
}

