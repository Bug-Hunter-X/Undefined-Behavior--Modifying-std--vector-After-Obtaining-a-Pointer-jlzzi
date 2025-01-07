std::vector<int> vec = {1, 2, 3};
for (int& x : vec) { // Use iterators or range-based for loop for safety
  x *= 2;
}
vec.push_back(4); // No longer causes undefined behavior

//To access elements by index, use at():
std::cout << vec.at(0) << std::endl; //Safe element access