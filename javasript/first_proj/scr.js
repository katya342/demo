const num = parseInt(prompt('Трехзначное чилсло: '));
let step1 = (num % 10).toString();
let step2 = Math.trunc(num / 10);
let step3 = step1 + step2;
// rezult = Math.trunc(rezult / 10);

alert(step3);



