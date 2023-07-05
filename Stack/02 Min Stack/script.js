var MinStack = function() {
    this.stack = [];
    this.minS = [];
};

/** 
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function(val) {
    if(this.stack.length == 0){
        this.stack.push(val);
        this.minS.push(val);
    }
    else{
        let temp = (val < this.minS[this.minS.length - 1]) ? val : this.minS[this.minS.length - 1];
        this.stack.push(val);
        this.minS.push(temp);
        
    }
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function() {
    this.stack.pop();
    this.minS.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function() {
    return this.stack[this.stack.length - 1];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function() {
  return this.minS[this.minS.length - 1];
};


function main() {
    // Test case 1
    const minStack1 = new MinStack();
    minStack1.push(-2);
    minStack1.push(0);
    minStack1.push(-3);
    console.log(`Test case 1: ${minStack1.getMin()}`); // Output: -3
    minStack1.pop();
    console.log(`Test case 1: ${minStack1.top()}`); // Output: 0
    console.log(`Test case 1: ${minStack1.getMin()}`); // Output: -2
  
    // Test case 2
    const minStack2 = new MinStack();
    minStack2.push(2);
    minStack2.push(0);
    minStack2.push(3);
    minStack2.push(0);
    console.log(`Test case 2: ${minStack2.getMin()}`); // Output: 0
    minStack2.pop();
    console.log(`Test case 2: ${minStack2.getMin()}`); // Output: 0
    console.log(`Test case 2: ${minStack2.top()}`); // Output: 3
}
  
main();