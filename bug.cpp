std::vector<int> vec = {1, 2, 3};
int* ptr = &vec[0];
vec.push_back(4); // Undefined Behavior: Invalidating the pointer
*ptr = 10;