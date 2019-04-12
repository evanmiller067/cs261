class Bicycle
{
	int cadence = 0;
	int speed = 0;
	int gear = 0;

	void changeCadence(int newValue)
	{
		cadence = newValue;
	}
	void changeGear(int newValue)
	{
		gear = newValue;
	}
	void speedUp(int increment)
	{
		speed = speed + increment;
	}
	void applyBrakes(int decrement)
	{
		speed = speed - decrement;
	}
	void printStates()
	{
		System.out.println("Cadence: " + cadence + "\n Speed: " + speed + "\n Gear: " + gear);
	}
}
class BicycleDemo
{
	public static void main(String[] args)
	{
		//create two bike objects
		Bicycle bike1 = new Bicycle();
		Bicycle bike2 = new Bicycle();

		//use methods on bike objects
		bike1.changeCadence(50);
		bike1.speedUp(10);
		bike1.changeGear(2);
		bike1.printStates();

		bike2.changeCadence(50);
		bike2.speedUp(10);
		bike2.changeGear(2);
		bike2.printStates();
		bike2.speedUp(10);
		bike2.changeGear(3);
		bike2.printStates();
	}
}
