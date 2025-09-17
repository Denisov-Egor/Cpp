#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        
        num_map[nums[i]] = i;
    }
    
    // Добавляем возврат по умолчанию на случай, если решение не найдено
    // (хотя по условию всегда должно быть решение)
    return {};
}