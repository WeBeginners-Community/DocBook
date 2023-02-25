# C++ STL Algorithms

C++ STL algorithms are a set of functions provided by the C++ Standard Library that allow programmers 
to perform common operations on containers and ranges of elements. 
They are designed to be flexible and efficient, and provide a powerful toolset for C++ developers.

## Basic Syntax
The basic syntax of a C++ STL algorithm is as follows:
Example-
```cpp
algorithm_name(container_begin, container_end, function_pointer_or_object)
  ```
                        
* algorithm_name: The name of the algorithm to be used.
* container_begin: An iterator pointing to the first element of the container.
* container_end: An iterator pointing to the last element of the container.
* function_pointer_or_object: A pointer to a function or an object that defines the operation to be performed on each element.

## Example
Here's an example of using a C++ STL algorithm to find the maximum element in a vector:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec {1, 2, 3, 4, 5};

    auto max = std::max_element(vec.begin(), vec.end());

    std::cout << "The maximum element in the vector is: " << *max << std::endl;

    return 0;
}
```


## Commonly Used Algorithms
1. <u> **_std::for_each_** 

**std::for_each**--- applies a function to each element in a range.

```cpp
std::for_each(container_begin, container_end, function_pointer_or_object)

```


2. **_std::transform_**

**std::transform**--- applies a function to each element in a range and stores the result in another range.

```cpp
std::transform(container_begin, container_end, output_container_begin, function_pointer_or_object)


```


3. **_std::find_**

**std::find**--- searches for an element in a range and returns an iterator to the first occurrence of the element.

```cpp
std::find(container_begin, container_end, value)


```


4. **_std::sort_**

**std::sort**--- sorts the elements in a range in ascending order.

```cpp
std::sort(container_begin, container_end)


```


5. **_std::reverse_**

**std::reverse**--- reverses the order of the elements in a range.

```cpp
std::reverse(container_begin, container_end)


```


6. **_std::accumulate_**

**std::accumulate**--- calculates the sum of the elements in a range.

```cpp
std::accumulate(container_begin, container_end, initial_value)


```


7. **_std::count_**

**std::count**--- counts the number of occurrences of an element in a range.

```cpp
std::count(container_begin, container_end, value)


```


8. **_std::unique_**

**std::unique**--- removes consecutive duplicates from a range.

```cpp
std::unique(container_begin, container_end)


```


9. **_std::max_element()_**

**std::max_element()**--- finds maximum element from container.

```cpp
max_element(start_iterator, end_iterator);



```


10. **_std::min_element()_** 

**std::min_element()**--- finds minimum element from container.

```cpp
min_element(start_iterator, end_iterator);

```


11. **_std::binary_search()_**

**std::binary_search()**--- on a sorted range of elements. 
It returns true if the element being searched is found in the range, and false otherwise.

```cpp
binary_search(start_iterator, end_iterator, value);

```


12. **_std::copy()_**

**std::copy()**--- is used to copy elements from one container (such as an array, vector, or list) 
to another container or a different location in the same container.

```cpp
copy(start_iterator, end_iterator, dest_iterator);
```



# Conclusion
C++ STL algorithms are a powerful toolset that can help C++ developers 
perform common operations on containers and ranges of elements efficiently and flexibly.
By understanding the basic syntax and commonly used algorithms, you can write cleaner 
and more concise code that is easier to maintain and debug.





