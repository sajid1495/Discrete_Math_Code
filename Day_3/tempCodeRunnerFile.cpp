#include <iostream>
#include <vector>

std::vector<int> mergeArrays(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    
    // Get the size of the smaller array
    size_t size = std::min(a.size(), b.size());
    
    // Merge the arrays element by element
    for (size_t i = 0; i < size; ++i) {
        result.push_back(a[i]);
        result.push_back(b[i]);
    }
    
    // Append the remaining elements of the longer array
    for (size_t i = size; i < a.size(); ++i) {
        result.push_back(a[i]);
    }
    for (size_t i = size; i < b.size(); ++i) {
        result.push_back(b[i]);
    }
    
    return result;
}

int main() {
    // Example arrays
    std::vector<int> arrayA = {1, 3, 5, 7};
    std::vector<int> arrayB = {2, 4, 6, 8, 10};
    
    // Merge arrays
    std::vector<int> mergedArray = mergeArrays(arrayA, arrayB);
    
    // Print the merged array
    for (const auto& element : mergedArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
