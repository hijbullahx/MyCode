//Crete a toggle button that changer the screen to dark mode when clicked and light mode when clicked again
let modeBtn= document.querySelector("#mode");
let body= document.querySelector("body");
let currMode="light";
modeBtn.addEventListener("click", () => {

  if (currMode === "light") {
    currMode = "dark";
    body.classList.add("dark");
    body.classList.remove("light");
  }
  else{
    currMode = "light";
    body.classList.add("light");
    body.classList.remove("dark");  }
  console.log(currMode);
});
