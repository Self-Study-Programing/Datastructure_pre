const readline = require("readline");

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  for await (const line of rl) {
    const a = new Set(line);
    const array = [...a];
    let newArray;
    newArray = array.filter((item) => item !== " ");
    newArray.sort();
    let string = newArray.join(" ");
    console.log(string);
    rl.close();
  }
  process.exit();
})();

// goorm.io
