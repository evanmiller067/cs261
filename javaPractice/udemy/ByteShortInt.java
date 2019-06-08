public class ByteShortInt
{
	public static void main(String[] args)
	{
		// 8 primitive data types in java

		//width of 32
		int myMinValue = -2147483648;
		int myMaxValue = 2147483647;
		//with java8+ you can underscores to large numbers for clarity
		int underscoreEx = 435_453_222;
		
		//width of 8
		byte myMinByte = -128;
		byte myMaxByte = 127;
		//using arithmatic in java, default data type for numbers is int, will need to cast to not get errors when defining variables 
		byte myTotal = (byte) (myMaxByte/2); //if I don't cast using the byte in () it will make myMaxByte/2 an int. 
  

		//width of 16
		short myMinShort = -32768;
		short myMaxShort = 32767;
		//same arithmatic error found in byte
		
		//width of 64
		long myMinLong = -9223372036854775808L;
		long myMaxLong = 9223372036854775807L;
		//dont have to cast as long type accepts ints

		byte byteValue = 50;
		short shortValue = 20543;
		int intValue = 23456677;
		long longValue = 50000 + (10 * byteValue) + shortValue + intValue;
	
		System.out.println(longValue);
	

		//floats and doubles
		float myFloatValue = 5.23f; //width of 32
		double myDoubleValue = 5d; //width of 64, faster and more precise, used for math
		//adding the f and d at the end is the same as using the cast (float) or (double) when defining type value
	
		//pounds to kilos exercise:

			double pounds = 3254.54d;
			double kilos = pounds * 0.45359237d;
			System.out.println("pounds converted to Kilos : \n" + "pounds: " + pounds + "\nKilos: " + kilos);

		//char and bool
		char myChar = 'g';
		char myUnicodeChar = '\u00A9'; //copyright symbol 
		System.out.println("Unicode char output: " + myUnicodeChar);

		boolean myBoolean = true;
		//same in c++

		//strings, while not a primitave type, its a class, it can be considered the 9th primitive type due to how incorporated it is now
		String myString = "This is my String! yay...";
		//can append to string by using the plus operator
		myString = myString + " appended section.";
		System.out.println(myString);

		//java can convert int to string when appending and int to a string, works with other data types as well
		int appendInt = 234;
		myString = myString + appendInt; 
		System.out.println(myString);
	}

}
