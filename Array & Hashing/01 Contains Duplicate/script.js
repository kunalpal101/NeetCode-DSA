//Contains Duplicate
//HashSet Method
//Time Complexity: O(n)
//Space Complexity: O(n)

function containsDuplicate(nums){
    const hashset = new Set();

    for(let i = 0 ; i<nums.length ; i++){
        if(hashset.has(nums[i])) return true;
        else hashset.add(nums[i]);
    }
    return false;
}


function main(){
    const nums1 = [1,2,3,1];
    console.log(`Test case 1: ${containsDuplicate(nums1)}`); 

    const nums2 = [1,2,3,4];
    console.log(`Test case 2: ${containsDuplicate(nums2)}`);
}

main();