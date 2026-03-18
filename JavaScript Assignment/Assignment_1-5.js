// BMI calculator


let sureshHeight  = 1.52;
let sureshWeight = 59;

let maheshHeight = 1.40;
let maheshWeight = 85;

let sureshBmi = (sureshWeight/(sureshHeight**2));
console.log("Suresh BMI: " + sureshBmi);

let maheshBmi = (maheshWeight/(sureshHeight**2))
console.log("Mahesh BMI: " + maheshBmi);

let markHigherBMI = (sureshBmi > maheshBmi)
console.log(markHigherBMI);

console.log('Suresh has higher BMI than Ramesh: ' + markHigherBMI);

// Assignment 1: Smart Discount Calculator

let userName = "Krishan";
let userAge = 61;
let userPurchaseAmount = 3000;
let userDiscount;


if(userAge < 18 && userPurchaseAmount > 5000){
    userDiscount = (userPurchaseAmount - (userPurchaseAmount * 0.15));
    console.log(`Hi, ${userName}! You received total discount of 15%. Final amount ${userDiscount}`);
}else if(userAge < 18){
    userDiscount = (userPurchaseAmount - (userPurchaseAmount * 0.10));
    console.log(`Hi, ${userName}! You received total discount of 10%. Final amount ${userDiscount}`);
}else if(userAge >= 60 && userPurchaseAmount > 5000){
    userDiscount = (userPurchaseAmount - (userPurchaseAmount * 0.25));
    console.log(`Hi, ${userName}! You received total discount of 25%. Final amount ${userDiscount}`);
}else if(userAge >= 60){
    userDiscount = (userPurchaseAmount - (userPurchaseAmount * 0.20));
    console.log(`Hi, ${userName}! You received total discount of 20%. Final amount ${userDiscount}`);
}else{
    console.log("you are not eligible for discount!!");
}



// Assignment 2: Login Validation System


let savedUserName = "venish";
let savedPassword = "abc123";

let getUserName = "venish";
let getPassword = "abc123";



if (savedUserName === getUserName && savedPassword === getPassword) {
    console.log("Login Successful");
} else if (savedUserName != getUserName && savedPassword != getPassword) {
    console.log("Username and password is incorrect");
} else if (savedUserName != getUserName) {
    console.log("Incorrect Username");
} else {
    console.log("incorrect Password");
}

// Assignment 3: Number Analyzer Tool

let inputNumber = 15;

if((inputNumber > 0) && ((inputNumber % 2) == 0)){
    console.log(`The number ${inputNumber} is positive and even`);
}else if((inputNumber < 0) && ((inputNumber % 2) == 0)){
    console.log(`The number ${inputNumber} is Negative and even`);
}else if(inputNumber == 0){
    console.log(`The number ${inputNumber} is Zero`);
}else if(inputNumber > 0){
    console.log(`The number ${inputNumber} is positive and odd`);
}else if(inputNumber < 0){
    console.log(`The number ${inputNumber} is negative and odd`);
}else{
    console.log("please enter valid input");
}

// Assignment 4: Shopping Eligibility Checker

isMember = false;
cartValue = 2100;

if((isMember && cartValue > 1000) || (cartValue > 2000)){
    console.log("you are eligible for free order");
}else{
    console.log("you are not eligible for free order")
}

// Assignment 5: Grade Evaluation System

let grade = 78;

if(grade < 0 || grade > 100){
    console.log("invalid Mark entered");
}else if (grade >= 90 ) {
    console.log("your grade is A");
}else if (grade >= 75 && grade <= 89){
    console.log("your grade is B");
}else if (grade >= 50 && grade <= 74){
    console.log("your grade is C");
}else if (grade < 50){
    console.log("your grade is fail");
}
