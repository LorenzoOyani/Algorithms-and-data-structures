def DAC_Max(array, index, size):
    max = -1

    if (size - 1 == 0):
        return array[index]
    if (index >= size - 2):
        if (array[index] > array[index + 1]):
            return array[index]
        else:
            return array[index + 1]

    max = DAC_Max(array, index + 1, size)

    if (array[index] > max):
        return array[index]
    else:
        return max


def DAC_Min(arr, index, n):
    min = 0
    if (n - 1 == 0):
        return arr[index]
    if (index >= n - 2):
        if (arr[index] > arr[index + 1]):
            return arr[index]
        else:
            return arr[index + 1]

    min = DAC_Min(arr, index + 1, n)

    if (arr[index] < min):
        return arr[index]
    else:
        return arr[index + 1]


if __name__ == "__main__":
    min, max = 0, - 1

a = [70, 30, 50, 80, 140, 12, 13]

# Recursion call
max = DAC_Max(a, 0, 7)

min = DAC_Min(a, 0, 7)

print("The minimum number in a given array is: ", min)
print("The maximum number in the given array is : ", max)
