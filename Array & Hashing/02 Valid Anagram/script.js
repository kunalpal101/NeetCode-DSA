function isAnagram(s, t){
    if(s.length != t.length){
        return false;
    }

    const sMap = {};
    const tMap = {};

    for(let i = 0 ; i<s.length ; i++){
        sMap[s[i]] = (sMap[s[i]] || 0) + 1;
        //console.log(sMap[s[i]]);
    }

    //console.log("\n\n");
    for(let i = 0 ; i<t.length ; i++){
        tMap[t[i]] = (tMap[t[i]] || 0) + 1;
        //console.log(tMap[t[i]]);
    }
    
    for(let char in sMap){
        if(sMap[char] !== tMap[char]) return false;
    }

    return true;
    
}


function main(){
    const s1 = "anagram";
    const t1 = "nagaram";
    console.log(`Test Case 1: ${isAnagram(s1, t1)}`);

    const s2 = "rat";
    const t2 = "car";
    console.log(`Test Case 2: ${isAnagram(s2, t2)}`);

    const s3 = "at";
    const t3 = "car";
    console.log(`Test Case 3: ${isAnagram(s3, t3)}`);
}

main();