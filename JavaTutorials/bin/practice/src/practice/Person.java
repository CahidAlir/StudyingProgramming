package practice;

public class Person {
	
	private String name;
	private int age;
	private double height;
	private double weight;
	
	public Person(String a, int b, double c, double d) {
		this.name = a;
		this.age = b;
		this.height = c;
		this.weight = d;
	}
	
	public void sayHello() {
		System.out.println("Hello");
	} 
	
	public void showAttributes(Person p) {
		System.out.println(p.name);
		System.out.println(p.age);
		System.out.println(p.height);
		System.out.println(p.weight);
	}
}
