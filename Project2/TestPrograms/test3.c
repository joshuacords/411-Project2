int main()
{
    int year;

    println("Enter a year: ");
    println("%d", year);

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if (year % 400 == 0)
                println("%d is a leap year.", year);
            else
                println("%d is not a leap year.", year);
        }
        else
            println("%d is a leap year.", year );
    }
    else
        println("%d is not a leap year.", year);
    
    return 0;
}
