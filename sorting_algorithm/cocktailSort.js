const cocktailSort = (arr) => {
  let start = 0;
  let end = arr.length;

  let swapped = false;

  while (swapped === true) {
    for (let i = start; i < end; i++) {
      if (arr[i] > arr[i + 1]) {
        let temp;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = true;
      }
    }

    if (swapped === false) break;

    swapped = false;

    for (let i = end - 1; i >= start; i--) {
      if (arr[i] > arr[i + 1]) {
        let temp;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = arr[i];
        swapped = true;
      }
    }
  }
  start = start + 1;
};

function printArr(arr) {
  for (let i = 0; i < arr.length; i++) {
    document.write(arr[i]);
  }
}

let arr = [5, 1, 4, 3, 2];
cocktailSort(arr);
printArr(arr);
