// abstract class
abstract class Animal {
	
	// method biasa
	public void eat(String food) {
		System.out.println("Eat " + food);
	}
	
	public void sleep(int hours) {
		System.out.println("Sleep for " + hours + " hours ");
	}
	
	// abstract method
	abstract public void makeNoise();
}
