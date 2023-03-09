let arr = [3, 4, 5, 6, 7, 8, 1, 2];
let d = 2;
let n = arr.length;

function rotateToTheLeft(arr, n, d) {
  let p = 1;
  while (p <= d) {
    let lastElem = arr[0];
    for (let i = d; i < n; i++) {
      arr[i] = arr[i + 1];
    }
    arr[n - 1] = lastElem;
    p++;
  }
  for (let i = 0; i < n; i++) {
    console.log(arr[i] + " ");
  }
}
