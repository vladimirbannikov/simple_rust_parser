use std::cell::RefCell;
static mut N: i32 = 5 as i32;
const rre: i8 = 9;

struct Point {
    x: i32,
    y: i32,
}

struct Foos<'a> {
    x: &'a i32,
}

struct Point3d {
    x: i32,
    y: i32,
	z: i32,
	
}
struct Electron;

struct Colorss(i32, i32, i32);
struct Pointer(i32, i32, i32);

struct Color {
    red: i32,
    blue: i32,
    green: i32,
}

struct PointRef {
    x: i32,
    y: i32,
}

fn funcer()
{
    let mut counter = 0;

    let result = while counter < 5 {
        counter += 1;

        if counter == 10 {
            break ;
        }
    };
	
	let mut a = true;
	let mut y = 1;
	'metk: while a == true
	{
		if y == 8
		{
			a == false;
			continue 'metk;
		}
		y *= 2;
	}
	
}

fn foo(v1: Vec<i32>, v2: Vec<i32>) -> (Vec<i32>, Vec<i32>, i32) {
   
    (v1, v2, 42)
}

fn looper()
{
	let mut a = 0;
	let b = 4;
	let c = loop{
		if a >= b
		{	
			break a*2;
		}
		else
		{
			a += 1;
			continue;
		}
	};
}

fn foot(v1: &Vec<i32>, v2: &Vec<i32>) -> i32 {

    42
}



fn compair()
{
	
	let plus_two = |x| {
    let mut result: i32 = x;

    result += 1;
    result += 1;

    result;
};
	let plus_one1 = |x: i32| x + 1;
	let plus_one = |x: i32| -> i32 { x + 1; };
	let n = 5;
	print!("{} is negative", n);
    if !n  < 0 as i32{
        print!("{} is negative", n);
    } else if n > 0 {
        print!("{} is positive", n);
    } else {
        print!("{} is zero", n);
    }

    let mut big_n: i32 =
        if n < 10 && n > -10 as i32 {
            println!(", and is a small number, increase ten-fold");
			10 * n
        } else {
            println!(", and is a big number, half the number");
            n / 2
        };
	 println!("{} -> {}", n, big_n);
}

fn add_one(x: i32) -> i32
{
	let k: i32;
    let t = 1;
	let r = 4;
	r + 1
}

pub enum Message{
    Quit,
    ChangeColor(i32, i32, i32),
    Move { x: i32, y: i32 },
    Write(String),
}

struct Circle {
    x: f64,
    y: f64,
    radius: f64,
}

fn maaaain() {
    let c = Circle { x: 0.0, y: 0.0, radius: 2.0 };
    /*println!("{}", c.area());
    let d = c.grow(2.0).area();*/
   // println!("{}", d);
}

fn my_func(x: String, y: i32)
{
	let a = 1;
}

struct Circlesa {
    x: f64,
    y: f64,
    radius: f64,
}

struct Circlet {
    x: f64,
    y: f64,
    radius: f64,
}


struct Square {
    x: f64,
    y: f64,
    side: f64,
}

/*fn print_area(shape: T) {
    println!("Площадь этой фигуры равна {}", shape.area());
}*/

fn nsss() {
   

   /* print_area(c);
    print_area(s);*/
}

pub struct CircleBuilder {
    x: f64,
    y: f64,
    radius: f64,
}

fn inas() {
	let c = Circle { x: 0.0f64, y: 0.0f64,radius: 1.0f64, };
	 let s = Square {x: 0.0f64,
        y: 0.0f64,
        side: 1.0f64
    };
   // println!("площадь: {}", c.area());
    println!("x: {}", c.x);
    println!("y: {}", c.y);
}

/*fn bar(x: T, y: K) where T: Clone, K: Clone + Debug {
    x.clone();
    y.clone();
    println!("{:?}", y);
}*/
extern fn english(){
	let thing1: u8 = 89.0 as u8;
	let thing2: f32 = thing1 as f32 + 10.5;
	let x: (i32, i32, i32)= (1, 2, 4) as (i32, i32, i32);
}

struct Circleta {
    x: f64,
    y: f64,
    radius: f64,
}

/*pub use self::greetings::hello;
pub use self::farewells::goodbye;*///

/*mod greetings;
mod farewells;*/

pub trait HasArea {
    fn area(&self) -> f64;
}

impl HasArea for Circleta {
    fn area(&self) -> f64 {
		3.08
    }
}
trait Graph {
    type N;
    type E;
}
 struct TraitObject {
    data: *mut (),
    vtable: *mut (),
}

#[link(name = "snappy")]
pub unsafe trait Scary { }
pub type Name = String;
fn main()
{
	pub  extern fn addd_one(x: i32) -> i32
	{
		let k: i32;
    	let t = 1;
		let r = 4;
		r + 1
	}
	
	let my_num: i32 = 10;
	/*let mut my_speed: i32 = 88;
	let my_speed_ptr: *mut i32 = &mut my_speed;

	let vars = x.0;
	let mut aa = vec![1,2,3,45,100]  ;
	let cx = aa[0] as i32;
	let k: f32 = 1.5 as f32;
	let z: f32 = 1.5E+1;
	let mut a = 0b11111_000__0;
	a |= 0b11111_000__0;*/
	let vs = (&vec![1,2], &[3,4]);
	let (mut v, mm) = (vec![1,2], 5+6);
	//let (s, b) = (a, 5 < 7);
	let mut x: String;
	let r: i8 = 10;
	let origin = Point3d { x: 0, y: 0, z: 0 };
	10 & 15;
	r;
	let xxxx = 5;
	match xxxx {
    	1 => println!("er"),
   	 	2 => println!("1"),
    	3 => println!("3"),
    	4 => println!("2"),
   		5 => println!("5"),
    	_ => println!("4545"),
	}
	let a = [0u8; 10];
	///
	let buf = b"whatever";
	/*while let x = option {
    println!("{}", x);
		}*/
	loop {
    /*match option {
        Some(x) => println!("{}", x),
        _ => break,
    }*/
}
	for x in (0..10){
    if x % 2 == 0 { continue; }

    println!("{}", x);
}
	//et p_imm: *const u32 = &r as *const u32;
	let hello = "Hello ".to_string();
	let world = "world!".to_string();
	let hello_world = hello + &world;
	//baz(bar(foo));
	let addr_string = "192.168.0.1:3000".to_string();
    let c = Circle { x: 0.0, y: 0.0, radius: 2.0 };
   // println!("{}", c.area());
	let (mut xsd, ya) = (5, 6);
	let x: &'static str = "HI world";
	let ptr: *const u8 = &10u8 as *const u8;
	const af: u8 = 10;	
	println!("Hello friend + enemy");
}