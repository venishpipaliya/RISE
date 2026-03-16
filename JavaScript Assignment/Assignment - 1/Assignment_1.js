let sureshHeight  = 1.52;
let sureshWeight = 59;

let maheshHeight = 1.40;
let maheshWeight = 85;

let sureshBmi = (sureshWeight/(sureshHeight**2));
console.log(sureshBmi);

let maheshBmi = (maheshWeight/(sureshHeight**2))
console.log(maheshBmi);

let markHigherBMI = (sureshBmi > maheshBmi)
console.log(markHigherBMI);

console.log('Suresh has higher BMI than Ramesh: ' + markHigherBMI);