

function searchRange(nums, k){
  const left = leftMost(nums, k);
  const right = rightMost(nums, k);
  return [left, right];
}

function leftMost(nums, k){
  let high = nums.length;
  let low = 0;
  let first = -1;
  while(low <= high){
    let mid = Math.floor((low + high)/2);
    if(nums[mid] === k){
      first = mid;
      high = mid - 1;
    }else if(nums[mid] > k){
      high = mid -1;
    }else{
      low = mid + 1;
    }
  }
  return first;
}
function rightMost(nums, k){
  let high = nums.length -1;
  let low = 0;
  let last = -1;
  while(low <= high){
    let mid = Math.floor((low + high)/ 2);
    if(nums[mid] === k) {
      last = mid;
      low = mid + 1;
    }
    else if(nums[mid] > k) high = mid -1;
    else low = mid + 1;
  }
  return last;
}



function exec(){
  console.log(searchRange([1,2,3,3,3,4,5], 3))
  console.log(searchRange([1,2,2,3,3,4,5], 2))
}

exec();