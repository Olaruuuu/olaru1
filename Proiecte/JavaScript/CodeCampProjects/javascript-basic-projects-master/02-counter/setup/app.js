let counter = 0;

const value = document.querySelector('#value')
const btns = document.querySelectorAll(".btn")

btns.forEach(function(btn){
   btn.addEventListener('click', function(e){
    const styles = e.currentTarget.classList;
    if(styles.contains('decrease'))
    {
        counter--;
    }
    else if(styles.contains('reset'))
    {
        counter = 0;
    }
    else{
        counter++;
    }
    value.textContent = counter;

    if(counter < 0)
    {
        value.style.color = "red";
    }
    else if(counter === 0)
    {
        value.style.color = "black";
    }
    else{
        value.style.color = "green";
    }
   })
})