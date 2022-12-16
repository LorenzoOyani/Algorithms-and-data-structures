arr = [4,5,6,7,8,9,0];

for i in range (1, len(arr)):
    for j in range(0, len(arr)):
        
        while(arr[j] > arr[i]):
            temp = arr[i];

            k = i;
            while(k > j):
                arr[k] = arr[k -1];
                k -=1;

                arr[j] = temp
                print(arr);


