//Valid Parenthesis
//Stack
//Time Complexity: O(n)
//Space Complexity: O(n)

var isValid = function(s) {
    const stack = [];
 
    for(let i = 0 ; i<s.length ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack.push(s[i]);
        }        
        else{
            
            if(stack == [])  return false;

            if(s[i] == ')'){
                const temp = stack.pop()                
                if(temp == '(') continue;
                else return false;
            }

            if(s[i] == ']'){
                const temp = stack.pop()
                if(temp == '[') continue;
                else return false;
            }

            if(s[i] == '}'){
                const temp = stack.pop()
                if(temp == '{') continue;
                else return false;
            }
        }
    }


    if(stack.length != 0) return false;
    return true;
}
    

function main() {
    // Test case 1
    const s1 = '()';
    console.log(`Test case 1: ${isValid(s1)}`); // Output: true
  
    // Test case 2
    const s2 = '()[]{}';
    console.log(`Test case 2: ${isValid(s2)}`); // Output: true
  
    // Test case 3
    const s3 = '(]';
    console.log(`Test case 3: ${isValid(s3)}`); // Output: false
  
    // Test case 4
    const s4 = '([)]';
    console.log(`Test case 4: ${isValid(s4)}`); // Output: false
  
    // Test case 5
    const s5 = '{[]}';
    console.log(`Test case 5: ${isValid(s5)}`); // Output: true

    // Test case 6
    const s6 = '}';
    console.log(`Test case 6: ${isValid(s6)}`); // Output: false

    // Test case 7
    const s7 = '(()';
    console.log(`Test case 7: ${isValid(s7)}`); // Output: false
}
  
main();