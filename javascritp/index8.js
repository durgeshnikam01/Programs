let gameNum = 25;
let userNum = prompt("Guess the game number : ");

while( userNum != gameNum){
    userNum = prompt("You enterd wrong number. Guess again : ");
}
console.log("Congrates , you entered the correct number : ");