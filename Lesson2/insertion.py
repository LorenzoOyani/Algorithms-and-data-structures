
def insertionSort(arr):
    for i in range(1, len(arr)):

        key = arr[i]

        j = i -1

        while(j >=0 and arr[j] > key):
                arr[j + 1] = arr[j];
                j -=1


        arr[j + 1] = key        




arr = [5,8,5,4,8,1,2,7,0];
insertionSort(arr);
for i in range(len(arr)):
        print ("%d" % arr[i]);



