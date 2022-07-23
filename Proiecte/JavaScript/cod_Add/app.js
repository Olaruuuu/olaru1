const boton = document.querySelector(".Boton");
const first = document.getElementById("first")! as HTMLInputElement;
const second = document.getElementById("second")! as HTMLInputElement;

function add(num1: number, num2: number)
{
    return num1 + num2
}

boton.addEventListener("click", function(){
   console.log(add(+first.value,+second.value))
})
