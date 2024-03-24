alert("hello there!"); //it pops up the messages
console.log("hi everyone there i am raksha adhikari");
let a=prompt("enter the a:");
let b,c,sum=0;
c=a;
while(a>0) {
    b=a%10;
    sum=(sum*10)+b;
    a=a/10; //this will tell us the digits in a number!
}
console.log(sum);
if(c==sum) {
    console.log("palindrome");
}
else {
    console.log("not a palindrome");
}
console.log("i did it finally");
let d=prompt("enter the d:");
let y=prompt("enter the y:");
while(d!=y){
    d=prompt("wrong guess! please enter the d:");
}
console.log("congrats!!");
alert("Hi,this is raksha!");
alert("hello world and raksha!");
let a_=prompt("enter the a:");
let b_=prompt("enter the b:");
console.log(a_+b_);

