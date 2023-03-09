def zigZag(arr, n):
    arr.sort()

    for i in range(1, n - 1, 2):
        arr[i], arr[i + 1] = arr[i + 1], arr[i]

    print(arr)


if __name__ == "__main__":
    arr = [4, 3, 2, 5, 6, 7, 8]
    n = len(arr)
zigZag(arr, n)
