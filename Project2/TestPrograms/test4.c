int main(){
    int number;
    int originalNumber;
    int remainder;
    int result;

    println("Enter a three digit integer: ");

    while (originalNumber != 0){
        remainder = originalNumber % 10;
        result = result + remainder*remainder*remainder;
        originalNumber = originalNumber / 10;
    }

    if(result == number)
        println("%d is an Armstrong number.");
    else
        println("%d is not an Armstrong number.");

    return 0;
}
