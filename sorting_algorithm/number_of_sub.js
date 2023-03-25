function subsets(arr, n) {
  let mp = {};
  for (let i = 0; i < n; i++) {
    if (mp.hasOwnProperty(arr[i])) {
      let val = mp[arr[i]];
      delete mp[arr[i]];
      mp[arr[i]] = val + 1;
    } else {
      mp[arr[i]] = 1;
    }
  }
  let res = 0;
  for (const [key, value] of Object.entries(mp)) {
    res = Math.max(res, value);
  }
  return res;
}

let arr = [2, 3, 4, 5, 6, 7, 8, 9];
let n = arr.length;
document.write(subsets(arr, n));
