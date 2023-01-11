
# Binary Search

Binary Search is a searching algorithm for finding an element's position in a sorted array.

In this approach, the element is always searched in the middle of a portion of an array.

## Binary Search Algorithm can be implemented in two ways:
- Iterative Method
- Recursive Method

## The general steps for both methods are discussed below:
1. The array in which searching is to be performed is:
![1](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-initial-array.png)
Let x = 4 be the element to be searched.

2. Set two pointers low and high at the lowest and the highest positions respectively.
![2](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-set-pointers.png)

3. Find the middle element mid of the array ie. arr[(low + high)/2] = 6.
![3](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid.png)

4. If x == mid, then return mid.Else, compare the element to be searched with m.

5. If x > mid, compare x with the middle element of the elements on the right side of mid. This is done by setting low to low = mid + 1.

6. Else, compare x with the middle element of the elements on the left side of mid. This is done by setting high to high = mid - 1.
![4](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-find-mid.png)

7. Repeat steps 3 to 6 until low meets high.
![5](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid-again.png)

8. x = 4 is found.
![6](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-found.png)

## Pseudo Code:
- Iterative Approach:
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
        
- Recursive Approach:
binarySearch(arr, x, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the right side
            return binarySearch(arr, x, low, mid - 1)


Eg:- (in Java)
import java.io.* ;
import java.util.* ;

public class BinarySearch {// class starts
    public static int binary_search_method(ArrayList<Integer> search, int left, int right, int key) {// binary_search_method starts

        if (right >= left) {
            int middle = left + ((right - left) / 2);
            if (search.get(middle) == key)
                return middle;
            if (search.get(middle) > key)
                return binary_search_method(search, left, middle - 1, key);
            return binary_search_method(search, middle + 1, right, key);
        }
        return -1;// if search element is not found
    }// binary_search_method ends

    public static void main(String[] args) throws IOException { // main function starts
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));// BufferedReader invoked 
        int i = 0;
        ArrayList<Integer> binsear = new ArrayList<Integer>();// integer arraylist created
        System.out.println("Enter an array , and separate the elements by single space   : ");
        String[] s = br.readLine().split(" ");
        for (i = 0; i < s.length; i++)
            binsear.add(Integer.parseInt(s[i]));// inputting each string element as integer in arraylist
        Collections.sort(binsear);// sorting the binsear arraylist elements
        i = 0;
        System.out.println("Check the ArrayList once ");
        while (i < binsear.size()) {// printing the sorted arraylist starts
            System.out.print(binsear.get(i) + "\t");
            i++;
        } //printing the sorted arraylist ends
        System.out.println("\nEnter the element to be searched: ");
        int key = Integer.parseInt(br.readLine());// storing the search element in key
        int result = binary_search_method(binsear, 0, (binsear.size() - 1), key);// storing the position in the arraylist whose element matches with the key 
        if (result == -1)
            System.out.println(key + " is not found ");
        else
            System.out.println(key + " is found at position " + result);
    }// main function ends
}// class ends

/*>java BinarySearch
Enter an array , and separate the elements by single space   : 
1 3 2 5 6 4
Check the ArrayList once 
1       2       3       4       5       6
Enter the element to be searched:
6
6 is found at position 5
 */
    

