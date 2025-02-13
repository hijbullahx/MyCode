// 
//For in loop
// let student={
//     name: "John",
//     age: 30,
//     course: "IT",
//     marks: 80 
// }
// for(let i in student){
//     console.log(i, student[i]);
// }
// str= "Hello World";
// console.log(str[4]);

//Template literals
// let obj = {
//     name: "John",
//     age: 30,
//     course: "IT",
//     marks: 80
// }
// let output = `${obj.name} is ${obj.age} years old. He is studying ${obj.course} and he got ${obj.marks} marks in the last exam.`; 
// console.log(output);
// \n is scape character for new line 
//Prompt the user to enter their full name. Generate a username for them based on the input. Start username with @, folloed bt theri full name ending the fullname lenght.
let name = prompt("Enter your full name:");
console.log(name);
trimed_Name=name.trim();
lowerCase_Name=trimed_Name.toLowerCase();
let username= "@"+lowerCase_Name+trimed_Name.length;
console.log(username);