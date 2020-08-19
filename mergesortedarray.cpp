#include <iostream>
#include <vector> 

std::vector<int> merge_arrays(std::vector<int> arr_one, std::vector<int> arr_two)
{
  std::vector<int> ans; 
  int one = 0; 
  int two = 0; 
  while (one < arr_one.size() && two < arr_two.size()){
    if (arr_one[one] < arr_two[two]){
      ans.push_back(arr_one[one]);
      one++; 
    } else if (arr_one[one] > arr_two[two]){
      ans.push_back(arr_two[two]);
      two++;
    }
  }
  while (one < arr_one.size()){
    ans.push_back(arr_one[one]);
    one++;
  }
  while (two < arr_two.size()){
    ans.push_back(arr_two[two]);
    two++;
  }


  return ans;
}


int main()
{
  std::vector<int> arr_one {3, 4, 6, 10, 11, 15};
  std::vector<int> arr_two {1, 5, 8, 12, 14, 19};

  std::vector<int> ans = merge_arrays(arr_one, arr_two);
  
  for (int i = 0; i < ans.size()-1; i++) {
    std::cout << ans[i] << '\n'; 
  }

}
