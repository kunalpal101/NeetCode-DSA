var evalRPN = function (tokens) {
    let stack = [];

    for(let i = 0 ; i<tokens.length ; i++){
        if(tokens[i] == '+' || tokens[i] == '-' || tokens[i] =='/' || tokens[i] == '*'){
            const a = stack.pop();
            const b = stack.pop();
            
            if(tokens[i] == '+'){
                //console.log(`${a} + ${b} = ${+a + +b}`)
                stack.push(+a + +b);
            }
            else if(tokens[i] == '-'){
                stack.push(+ a - +b);
            }
            else if(tokens[i] == '/'){
                stack.push(Math.trunc(+ b / +a));
            }
            else if(tokens[i] == '*'){
                stack.push(+ a * +b);
            }

        }
        else{
            stack.push(tokens[i]);
        }
    }

    return stack.pop();
}

function main() {
    // Test case 1
    const tokens1 = ["2", "1", "+", "3", "*"];
    console.log(`Test case 1: ${evalRPN(tokens1)}`); // Output: 9

    // Test case 2
    const tokens2 = ["4", "13", "5", "/", "+"];
    console.log(`Test case 2: ${evalRPN(tokens2)}`); // Output: 6

    // Test case 3
    const tokens3 = ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"];
    console.log(`Test case 3: ${evalRPN(tokens3)}`); // Output: 22
}

main();