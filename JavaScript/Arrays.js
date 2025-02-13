// let items= [250, 645, 300, 900, 50]
// for(let i=0; i<items.length; i++){
//   let offer=items[i]/10;
//   items[i]-=offer;
// }
// console.log(items);
//Creqte an array to store companies-> "Bloomborg", "Microsoft", "Uber" "Google", "IBM", "Netflix"
//a.Remove the first company from the array
//b.Remove the Uber and Add Ola in it's place
//c.Add Amazon in the end.

let companies=["Bloomborg", "Microsoft", "Uber", "Google", "IBM", "Netflix"];
companies.shift();
companies.splice(1,1,"Ola");
companies.push("Amazon");
console.log(companies);