// const digitalMonth = parseInt(prompt("Nomer month"));
//
// let textMonth;
// switch(digitalMonth)
// {
//     case 1: textMonth = "Yanvar"; break;
//     case 2: textMonth = "Fevral"; break;
//     case 3: textMonth = "Mart"; break;
//     case 4: textMonth = "April"; break;
//     case 5: textMonth = "May"; break;
//     case 6: textMonth = "June"; break;
//     case 7: textMonth = "July"; break;
//     case 8: textMonth = "August"; break;
//     case 9: textMonth = "September"; break;
//     case 10: textMonth = "November"; break;
//     case 11: textMonth = "December"; break;
//
//     default:textMonth = "Нет такого месяца";
//
// }
// alert(textMonth);

/////////////////////////////////////////////////////////////////////
// const number = parseInt(prompt("Chetnoe or nechetnoe chislo"));
// alert(number % 2 === 0);

/////////////////////////////////////////////////////////////////////////

// const hours = parseInt(prompt("Vvedite hours"));
// let dayName;
//
//
//      if (hours < 6) dayName = "Night";
//      else if((hours >= 6 && hours < 12)) dayName = "Mornin";
//     else if((hours >= 12 && hours < 18)) dayName = "Day";
//     else if ((hours >= 18 && hours < 24)) dayName = "Vecher";
//
//
// alert(dayName);

// const a = parseInt(prompt("Storona A"));
// const b = parseInt(prompt("Storona B"));
// const c = parseInt(prompt("Storona C"));
// let perimetr = (a + b > c) ? "Perimetr = " + (a + b + c) : "Error prone";
// alert(perimetr);

// const number = prompt("Vvedite 4 chislo: ");
// let digit_1 = number[0];
// let digit_2 = number[1];
// let digit_3 = number[2];
// let digit_4 = number[3];
//
// alert ((digit_1 < digit_2 < digit_3 < digit_4) ? "Po возрастанию" : "НЕ по возрастанию");

///////////////////////////////////////////////////////////////////////////////////////////
//
// const a = prompt("Введите а");
// const b = prompt("Введите b");
// const c = prompt("Введите с");
// let d = Math.sqrt(b) - 4 * a * c;
// alert(d);
///////////////////////////////////////////////////////////

// const usd = 480.37;
// const rub = 8.35;
// const eur = 482.15;
//
// let tenge = prompt("Tenge");
// let currency = prompt("Валюта обмена").toLowerCase();
// let result;
// switch (currency)
// {
//     case "доллар":
//         rezult = tenge / usd;
//         currency = "USD";
//         break;
//     case "евро":
//         rezult = tenge/eur;
//         currency = "EUR";
//         break;
//     case "рубль":
//         rezult = tenge/rub;
//         currency = "RUB";
//         break;
// }
// alert(tenge + "тг в " + currency + " = " + rezult);

// const bilet = prompt("Nomew bileta");
// let leftPart = parseInt(bilet[0] + parseInt(bilet[1]) + parseInt(bilet[2]));
// let rightPart = parseInt(bilet[3]) + parseInt(bilet[4]) + parseInt(bilet[5]);
// alert(leftPart === rightPart ? "Билет счастливый" : "Билет обычный");

const hours1 = prompt("Hours1");
const nums1 = prompt("Mins1");
const hours2 = prompt("Hours2");
const mins2 = prompt("Mins2");

let hoursDiff = +hours1 - +hours2;
let minsDiff = +mins1 - +mins2;
    if(hours1 > hours2 && mins1 > mins2)
    {
        alert("Diff in time: " + hoursDiff + "Diff in mins" + minsDiff);
    }
    else
    {
        if()
    }