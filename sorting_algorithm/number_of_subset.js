function subset(arr, n) {
  let res = 0;
  arr.sort();

  for (let i = 0; i < n; i++) {
    let count = 1;
    for (let i = 0; i < n - 1; i++) {
      if (arr[i] === arr[i + 1]) {
        count++;
      } else {
        break;
      }
      res = Math.max(res, count);
    }
  }
  return res;
}

let arr = [2, 3, 5, 6, 7, 0];
let n = arr.length;
document.write(subset(arr, n));
