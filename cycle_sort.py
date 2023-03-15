
def cycle_sort(array):
    writes = 0  # Keep track of the number of writes
    for cycleStart in range(0, len(array) - 1):
        item = array[cycleStart]
        pos = cycleStart
        # Find the correct position for the current item in the sorted part of the array
        for i in range(cycleStart + 1, len(array)):
            if array[i] < item:
                pos += 1
        # If the current item is already in the correct position, move on to the next item
        if pos == cycleStart:
            continue
        # Otherwise, swap the current item with the item in the correct position
        while item == array[pos]:
            pos += 1
        array[pos], item = item, array[pos]
        writes += 1
        # Continue swapping items until the cycle is complete
        while pos != cycleStart:
            pos = cycleStart
            for i in range(cycleStart + 1, len(array)):
                if array[i] < item:
                    pos += 1
            while item == array[pos]:
                pos += 1
            array[pos], item = item, array[pos]
            writes += 1
    return array  # Return the number of writes that were necessary to sort the array


def read_input() -> int:

    arr = list(map(int, input("Enter the array elements: ").strip().split()))
    return arr


if __name__ == "__main__":
    arr = read_input()
    res = cycle_sort(arr)
    print(f"The sorted array: {res}\n")
