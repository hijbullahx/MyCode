//Create a function that takes a string as an argument and returns the number of vowels contained in it.
// function countVowels(str){
//   let count=0;
//   vowels=['a','e','i','o','u'];
//   for(let i=0; i<str.length; i++)
//   {
//     if(vowels.includes(str[i].toLowerCase()))
//     {
//       count++;
//     }
//   }
//   return count;
// }
// string= prompt("Enter a string to count vowels: ");
// console.log(countVowels(string));


//The same task with array functions
// const countVowels = (str)=>
// {
//   let count=0;
//   vowels=['a','e','i','o','u'];
//   for(const char of str)
//   {
//     if(vowels.includes(char.toLowerCase()))
//     {
//       count++;
//     }
//   }
//   return count;
// }
// string=prompt("Enter a string to count vowels: ");
// console.log(countVowels(string)); 

//We are given an array of marks of students. Filer out of the marks of students that scored 90;
// let marks=[900, 145, 627, 839, 90, 78, 90, 89, 90, 92];
// let filteredMarks=marks.filter((mark)=>
//   {
//     return mark>=90;
//   })
// console.log(filteredMarks);

//Take a number form user. Create an array of numbers form 1 to n.
//Use the reduce method to calculate sum of all numbers in the array.
//Use the reduce method to calculate the product of all numbers in the array. 
// let n=prompt("Enter a number: ");
// arr=[]; 
// for(let i=1; i<=n;i++)
// {
//   arr[i-1]=i;
// }
// let sum=arr.reduce((pre, curr) => 
// {
//   return pre+curr;
// })
// let product=arr.reduce((pre, curr)=>
// {
//   return pre*curr;
// })

// console.log(arr);
// console.log("Sum: "+sum);
// console.log("Product: "+product);