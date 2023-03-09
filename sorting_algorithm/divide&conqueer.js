function DAC_Min(arr, low, high) {
  let min;

  if (high - 1 === 0) {
    return arr[low];
  }
  while (low > high - 2) {
    if (arr[low] > arr[low + 1]) {
      return arr[low];
    } else {
      return arr[low + 1];
    }
  }
  min = DAC_Min(arr, low + 1, high);
  if (arr[low] < min) {
    return arr[low];
  } else {
    min;
  }
}

function DAC_Max(arr, index, n) {
  let max;
  if (index - 1 === 0) {
    return arr[index];
  }
  while (index > n - 2) {
    if (arr[index] > arr[index + 1]) {
      return arr[index];
    } else {
      return arr[index + 1];
    }
  }
  max = DAC_Max(arr, index + 1, n);
  if (arr[index] > max) {
    return arr[index];
  } else {
    max;
  }
}

let arr = [2, 4, 1, 6, 7, 9, 0];
let n = arr.length;

min = DAC_Min(arr, 0, n);
max = DAC_Max(arr, 0, n);
