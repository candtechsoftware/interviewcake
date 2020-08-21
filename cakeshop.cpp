#include <iostream> 
#include <vector> 

bool cake_order(std::vector<int> take, std::vector<int> dine, std::vector<int> served)
{
  int i = 0, j = 0;     

  int take_size = take.size()-1;
  int dine_size = dine.size()-1; 

  std::vector<int> ans;

  for(auto s : served){
    if (i <= take_size && s == take[i]){
      i++;
    } else if (j <= dine_size && s == dine[j]){
      j++;
    } else {
      return false;
    }
  }

  if (j != dine.size() || i != take.size()){
    return false;
  }
  return true; 
}

int main()
{
  std::vector<int> take_out{17, 8, 24};
  std::vector<int> dine_in{12, 19, 2};

  std::vector<int> served{17, 8, 12, 19, 24, 2};

  bool ans = cake_order(take_out, dine_in, served);

  std::cout << ans << '\n';

}
