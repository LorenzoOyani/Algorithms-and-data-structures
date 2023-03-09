function mostFrequent(arr, size) {
  let maxCount = 0;
  let mostFrequent;
  for (let i = 0; i < size; i++) {
    let count = 0;
    for (let j = 0; j < size; j++) {
      if (arr[i] === arr[j]) {
        count++;
      }
    }
    if (maxCount > count) {
      maxCount = count;
      mostFrequent = arr[i];
    }
  }
  return mostFrequent;
}

let arr = [40, 40, 30, 50, 30, 30, 70, 80, 40, 30];
let n = arr.length;

mostFrequent(arr, n);
