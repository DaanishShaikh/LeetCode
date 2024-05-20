#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    std::vector<int> nums(n);
    for(int i=0 ; i<n ; i++){
        cin >> nums[i];
    }
    std::vector<std::vector<int>> result = subsets(nums);

    std::cout << "Subsets: \n";
    for (const auto& subset : result) {
        std::cout << "{ ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "}\n";
    }

    return 0;
}
