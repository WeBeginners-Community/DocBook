# C++ STL
C++ STL stands for Standard Template Library. C++ STL is a set of template classes that provides predefined functions and classes that help implement many Algorithms and Data Structures easily. It is a collection of containers, algorithms, and Iterators.

# Maps in C++
One such container that falls under the category of STL containers is the map.

Maps are the kind of containers used to implement sorted data structures so they can be quickly searched.
Such containers are called Associative Containers.

Maps are basically the collection of key-value pairs that are sorted by the keys. Keys are unique which means that no two mapped values can have the same key.
Thus Maps store the values in the mapped fashion.

## Syntax to Create a Map
```
std::map<key_datatype, value_datatype>map_name;
```
## Code

```
#include <string.h>  
#include <iostream>  
#include <map>  
#include <utility>  
using namespace std;  
int main()  
{  
   map<int, string> Students;  
   Students[101] = "Aman";
   Students[103] = "Amit";  
   Students[104] = "Sakshi";  
   Students[102] = "Nitin";  
   Students[105] = "Yash";   
   cout << Students[104] = " < <Students[104] << endl << endl;  
   cout << "Map size: " <<Students.size() << endl;  
   cout << endl << "Initial Order:" << endl;  
   for( map<int,string>::iterator ii = Students.begin(); ii!=Students.end(); ++ii)  
   {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
   }  
   cout << endl << "Reverse Order:" << endl;  
   for( map<int,string>::reverse_iterator ii = Students.rbegin(); ii != Students.rend(); ++ii)  
   {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
   }  
   return 0;
}  
```

## Output
```
Students[104] = Sakshi

Map size: 5

Natural Order:
101: Aman
102: Nitin
103: Amit
104: Sakshi
105: Yash

Reverse Order:
105: Yash
104: Sakshi
103: Amit
102: Nitin
101: Aman
```

## Basic Functions of Maps

### 1. begin()

This function returns an iterator to the first element in the map.

```
mapname.begin()
```
### 2. end()

This function returns an iterator to the last element in the map.

```
mapname.end()
```
### 3. size()

This function returns the number of elements in the map.

```
mapname.size()
```
### 4. max_size()

This function returns the maximum number of elements that the map can hold.

```
mapname.max_size()
```
### 5. empty()

This function returns whether the map is empty or not.

```
mapname.empty()
```
### 6. insert()

This function adds a new element in the map.

```
iterator mapname.insert({key, element})
```
### 7. erase()

This function returns 1 i.e. TRUE if the key element is found in the map else returns 0 i.e. FALSE. 

```
mapname.erase(key)
```
### 8. clear()

This function removes all the elements from the map.

```
mapname.clear()
```
### 9. find()

This function returns an iterator to the element with key-value ‘g’ in the map if found, else returns the iterator to end.

```
iterator = mapname.find(key)
```
### 10. count()

This function returns the number of times the key K is present in the map.

```
mapname.count(key K)
```







