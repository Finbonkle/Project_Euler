class operators
{
    public static void main(String[] args)
    {
	// initialize variables
	int LIMIT = 1000;
	int i3 = 3;
	int i5 = 5;
	int sum = 0;
	while ( i3 < 1000 )
	    {
		if (i3 % 5 != 0)
		    sum += i3;
		i3 += 3;
		
		if (i5 < 1000) {
		    sum += i5;
		    i5 += 5;
		}
	    }
	
	System.out.print("sum is " + sum + "\n");
    }
}
