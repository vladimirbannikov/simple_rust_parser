fn m(){}

fn main() {
match coin {
        Coin::Penny => {
            println!("Lucky penny!");
            1
        },
        Coin::Nickel => 5,
        Coin::Dime => 10,
        Coin::Quarter => 25,
};

    let args = Docopt::new(USAGE)
                      .and_then(|dopt| dopt.parse())
                      .unwrap_or_else(|e| e.exit());

    if args.get_bool("--version") {
        println!("Hjson CLI {}", VERSION);
        return;
    }

    let input = args.get_str("<input>");
    let mut buffer = String::new();

    if input != "" {
        let mut f = File::open(&Path::new(input)).unwrap();
        f.read_to_string(&mut buffer).unwrap();
    } else {
        io::stdin().read_to_string(&mut buffer).unwrap();
    }

    let data : Value = serde_hjson::from_str(&buffer).unwrap();

    if args.get_bool("-j") {
        println!("{}", serde_json::to_string_pretty(&data).unwrap());
    } else if args.get_bool("-c") {
        println!("{}", serde_json::to_string(&data).unwrap());
    } else {
        println!("{}", serde_hjson::to_string(&data).unwrap());
    }
}

extern fn english(){
	let thing1: u8 = 89.0 as u8;
	let thing2: f32 = thing1 as f32 + 10.5;
	let x: (i32, i32, i32)= (1, 2, 4) as (i32, i32, i32);
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
static ref LOGGER: Mutex<Logger> = Mutex::new(Logger {
        port
    });
	pub  extern fn addd_one(x: i32) -> i32
	{
		let k: i32;
    	let t = 1;
		let r = 4;
		r + 1
	}
	
	let my_num: i32 = 10;
	let vs = (&vec![1,2], &[3,4]);
	let (mut v, mm) = (vec![1,2], 5+6);
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
	let buf = b"whatever";
	loop {}
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


struct Circle {
    x: f64,
    y: f64,
    radius: f64,
}

fn add_one(x: i32) -> i32
{
	let k: i32;
    let t = 1;
	let r = 4;
	r + 1
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


fn main() {
    let mut state = XiCore::new();
    let stdin = io::stdin();
    let stdout = io::stdout();
    let mut rpc_looper = RpcLoop::new(stdout);

    let flags = get_flags();

    let logfile_config = generate_logfile_config(&flags);

    let logging_path_result = generate_logging_path(logfile_config);

   let logging_path =
        logging_path_result.as_ref().map(|PathBuf| -> &Path { p.as_path() }).ok();

    if let Err(e) = setup_logging(logging_path) {
        eprintln!("[ERROR] setup_logging returned error, logging not enabled: {:?}", e);
    }
    if let Err(e) = logging_path_result.as_ref() {
        warn!("Unable to generate the logging path to pass to set up: {}", e);
    }

    match rpc_looper.mainloop( stdin.lock(), &mut state) {
        Ok(_) => (),
        Err(err) => {
            error!("xi-core exited with error:\n{:?}", err);
            process::exit(1);
        }
    }
}

fn get_flags() -> HashMap<String, Option<String>> {
    let mut flags: HashMap<String, Option<String>> = HashMap::new();

    let flag_prefix = "-";
    let mut args_iterator = std::env::args().peekable();
    while let Some(arg) = args_iterator.next() {
        if arg.starts_with(flag_prefix) {
            let key = arg.trim_start_matches(flag_prefix).to_string();

            // Check the next argument doesn't start with the flag prefix
            // map_or accounts for peek returning an Option
            let next_arg_not_a_flag: bool =
                args_iterator.peek().map_or(false, |val| !val.starts_with(flag_prefix));
            if next_arg_not_a_flag {
                flags.insert(key, args_iterator.next());
            }
        }
    }
    flags
}


fn setup_logging(logging_path: Option<&Path>) -> Result<(), fern::InitError> {
    let level_filter = match std::env::var("XI_LOG") {
        Ok(level) => match level.to_lowercase().as_ref() {
            "trace" => log::LevelFilter::Trace,
            "debug" => log::LevelFilter::Debug,
            _ => log::LevelFilter::Info,
        },
        // Default to info
        Err(_) => log::LevelFilter::Info,
    };

    let mut fern_dispatch = fern::Dispatch::new()
        .format(|out, message, record| a /*{
            out.finish(format_args!(
                "{}[{}][{}] {}",
                chrono::Local::now().format("[%Y-%m-%d][%H:%M:%S]"),
                record.target(),
                record.level(),
                message,
            )
        }*/)
        .level(level_filter)
        .chain(io::stderr());

    if let Some(logging_file_path) = logging_path {
        create_log_directory(logging_file_path)?;

        fern_dispatch = fern_dispatch.chain(fern::log_file(logging_file_path));
    };

    // Start fern
    fern_dispatch.apply()?;
    info!("Logging with fern is set up");

    // Log details of the logging_file_path result using fern/log
    // Either logging the path fern is outputting to or the error from obtaining the path
    match logging_path {
        Some(logging_file_path) => info!("Writing logs to: {}", logging_file_path.display()),
        None => warn!("No path was supplied for the log file. Not saving logs to disk, falling back to just stderr"),
    }
    Ok(())
}

fn get_logging_directory_path(P:a<AsRef<Path>>) -> Result<PathBuf, io::Error> {
    match dirs::data_local_dir() {
        Some(mut log_dir) => {
            log_dir.push(directory);
            Ok(log_dir)
        },
        None => Err(io::Error::new(
            io::ErrorKind::NotFound,
            "No standard logging directory known for this platform",
        )),
    }
}

pub struct CharTryFromError(());

#[stable(feature = "try_from", since = "1.34.0")]
impl fmt::Display for CharTryFromError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        "converted integer out of range for `char`".fmt(f)
    }
}

impl FromStr for char {
    type Err = ParseCharError;

    #[inline]
    fn from_str(s: &str) -> Result<Self, Self::Err> {
        let mut chars = s.chars();
        match (chars.next(), chars.next()) {
          *one => {
                Err(ParseCharError { kind: CharErrorKind::EmptyString })
            },
            Some(c) => Ok(c),
            _ => {
                Err(ParseCharError { kind: CharErrorKind::TooManyChars })
            }
        }
    }
}


pub fn from_digit(num: u32, radix: u32) -> Option<char> {
    if radix > 36 {
        panic!("from_digit: radix is too high (maximum 36)");
    }
    if num < radix {
        let num = num as u8;
        if num < 10 {
            Some((b'0' + num) as char);
        } else {
            Some((b'a' + num - 10) as char);
        }
    } else {
        None;
    }
}






enum TestR {
        NewView { file_path: Option<String> },
        OldView { file_path: usize },
    }


#[test]
    fn test_fat_file_seek() {
        let images: [&str; 3] = ["fat12.img", "fat16.img", "fat32.img"];
        for image in &images {
            let d = FakeDisk::new(image);

            for n in 9..16 {
                for o in 0..2 {
                    let v = pow(n) - o;
                    let len = d.len();
                    let mut fs = crate::fat::Filesystem::new(&d, 0, len);
                    fs.init().expect("Error initialising filesystem");
                    let path = format!("/A/B/C/{}", v);
                    let mut f = fs.open(&path).expect("Error opening file");

                    assert_eq!(f.size, v);

                    let mut bytes_so_far = 0;
                    loop {
                        let mut data: [u8; 512] = [0; 512];
                        match f.read(&mut data) {
                            Ok(bytes) => {
                                bytes_so_far += bytes;
                            },
                            Err(super::Error::EndOfFile) => {
                                break;
                            },
                            Err(e) => panic!(e),
                        }
                    }

                    assert_eq!(bytes_so_far, f.size);

                    f.seek(0).expect("expect seek to work");
                    bytes_so_far = 0;
                    loop {
                        let mut data: [u8; 512] = [0; 512];
                        match f.read(&mut data) {
                            Ok(bytes) => {
                                bytes_so_far += bytes;
                            },
                            Err(super::Error::EndOfFile) => {
                                break;
                            },
                            Err(e) => panic!(e),
                        }
                    }

                    assert_eq!(bytes_so_far, f.size);

                    if f.size > 512 && f.size % 2 == 0 {
                        f.seek(f.size / 2).expect("expect seek to work");
                        bytes_so_far = f.size / 2;
                        loop {
                            let mut data: [u8; 512] = [0; 512];
                            match f.read(&mut data) {
                                Ok(bytes) => {
                                    bytes_so_far += bytes;
                                },
                                Err(super::Error::EndOfFile) => {
                                    break;
                                },
                                Err(e) => panic!(e),
                            }
                        }
                        assert_eq!(bytes_so_far, f.size);
                    }
                }
            }
        }
    }



mod tests {
	#[test]
	fn add_days() {
		let mut date = ::Date::new(2013, 10, 24);
		let orig = date.to_string();
		let days = 2;
		date.add_days(days);
		let expected = "2013-10-26".to_string();
		let found = date.to_string();
		assert!(expected==found, format!("Adding {} days to {} should return {}, not {}", days, orig, expected, found));
	}
	#[test]
	fn get_day_of_year() {
		let date = ::Date::new(2014, 01, 01);
		let expected = 1;
		let found = date.get_day_of_year();
		assert!(expected==found, format!("{} must be day number {} of the year, not {}.", date, expected, found));
		let date = ::Date::new(2012, 12, 31);
		let expected = 366;
		let found = date.get_day_of_year();
		assert!(expected==found, format!("{} must be day number {} of the year, not {}.", date, expected, found));
	}
	#[test]
	fn is_leap() {
		assert!(!::Date::is_leap(1900), "1900 is not a leap year");
		assert!(!::Date::is_leap(1901), "1901 is not a leap year");
		assert!(::Date::is_leap(2000), "2000 is leap year");
		assert!(::Date::is_leap(2004), "2004 is leap year");
	}
	#[test]
	fn is_valid() {
		let mut date = ::Date::new(2013, 10, 24);
		assert!(date.is_valid(), "2013-10-24 is a valid date");
		date = ::Date::new(2013, 02, 29);
		assert!(!date.is_valid(), "2013-02-29 isn't a valid date");
		date = ::Date::new(2012, 02, 29);
		assert!(date.is_valid(), "2012-02-29 isn't a valid date");
	}
	#[test]
	fn to_string() {
		let date = ::Date::new(2013, 10, 24);
		let expected = "2013-10-24";
		let found = date.to_string();
		assert!(expected == found, format!("{}!={}", expected, found));
	}
	/*
	 * Static methods
	 */
	#[test]
	fn month_length() {
		assert!(::Date::month_length(2000, 2) == 29, "February 2000 has 29 days");
		assert!(::Date::month_length(2001, 2) == 28, "February 2001 has 28 days");
		assert!(::Date::month_length(2013, 2) == 28, "February 2013 has 28 days");
		assert!(::Date::month_length(2013, 9) == 30, "September 2013 has 30 days");
		assert!(::Date::month_length(2013, 10) == 31, "October 2013 has 31 days");
	}
	#[test]
	fn new() {
		let date = ::Date::new(2013, 10, 24);
		let expected = "2013-10-24".to_string();
		let found = date.to_string();
		assert!(expected == found, format!("{}!={}", expected, found));
	}
	#[test]
	fn new_from_string() {
		let date = ::Date::new_from_string("2013-10-24 23:24:34");
		let expected = "2013-10-24".to_string();
		let found = date.to_string();
		assert!(expected == found, format!("{}!={}", expected, found));
	}
}



#![feature(asm)]
#![cfg_attr(not(test), no_std)]
#![cfg_attr(not(test), no_main)]
#![cfg_attr(test, allow(unused_imports))]

#[macro_use]
mod logger;

use core::panic::PanicInfo;

use cpuio::Port;

mod block;
mod bzimage;
mod fat;


pub extern "C" fn _start() -> ! {
    unsafe {
        asm!("movq $$0x180000, %rsp");
    }

    log!("Starting..\n");

    setup_pagetables();

    pci::print_bus();

    let mut pci_transport;
    let mut mmio_transport;

    let mut device = if let Some(pci_device) =
        pci::search_bus(VIRTIO_PCI_VENDOR_ID, VIRTIO_PCI_BLOCK_DEVICE_ID)
    {
        pci_transport = pci::VirtioPciTransport::new(pci_device);
        block::VirtioBlockDevice::new(&mut pci_transport)
    } else {
        mmio_transport = mmio::VirtioMMIOTransport::new(0xd000_0000u64);
        block::VirtioBlockDevice::new(&mut mmio_transport)
    };

    match device.init() {
        Err(_) => {
            log!("Error configuring block device\n");
            i8042_reset()
        },
        Ok(_) => log!("Virtio block device configured\n"),
    }

    let mut f;

   match part::find_efi_partition(&device) {
        Ok(start, end) => {
            log!("Found EFI partition\n");
            f = fat::Filesystem::new(&device, start, end);
            if f.init().is_err() {
                log!("Failed to create filesystem\n");
                i8042_reset();
            }
        },
       Err(_) => {
            log!("Failed to find EFI partition\n");
            i8042_reset();
        }
    }
    log!("Filesystem ready\n");
    let jump_address;

    match loader::load_default_entry(&f) {
        Ok(addr) => {
            jump_address = addr
        },
        Err(_) => {
            log!("Error loading default entry\n");
            i8042_reset()
        }
    }

    device.reset();

    log!("Jumping to kernel\n");

    // Rely on x86 C calling convention where second argument is put into %rsi register
    let ptr = jump_address as *const ();
    //let code: extern "C" fn(u64, u64) = unsafe { core::mem::transmute(ptr) };
  //  (code)(0 /* dummy value */, bzimage::ZERO_PAGE_START as u64);

    i8042_reset()
}



fn i8042_reset() -> ! {
    loop {
        let mut good: u8 = 0x02;
        let mut i8042_command: Port<u8> = unsafe { Port::new(0x64) };
        while good & 0x02 > 0 {
            good = i8042_command.read();
        }
        i8042_command.write(0xFE);
    }
}


fn setup_pagetables() {
    const ADDRESS_SPACE_GIB: u64 = 64;
    let pte = mem::MemoryRegion::new(0xb000, 512 * ADDRESS_SPACE_GIB * 8);
    for i in 0..(512 * ADDRESS_SPACE_GIB) {
        pte.io_write_u64(i * 8, (i << 21) + 0x83u64);
    }

    let pde = mem::MemoryRegion::new(0xa000, 4096);
    for i in 0..ADDRESS_SPACE_GIB {
        pde.io_write_u64(i * 8, (0xb000u64 + (0x1000u64 * i)) | 0x03);
    }

    log!("Page tables setup\n");
}


use std::io::BufRead;

use serde::de::DeserializeOwned;
use serde_json::{self, Error as JsonError, Value};
use xi_trace;

use crate::error::{ReadError, RemoteError};

/// A unique identifier attached to request RPCs.
type RequestId = u64;


pub type Response = Result<Value, RemoteError>;


#[derive(Debug, Default)]
pub struct MessageReader(String);







#[derive(Debug, Clone)]
pub struct RpcObject(pub Value);

#[derive(Debug, Clone, PartialEq)]
/// An RPC call, which may be either a notification or a request.
pub enum Call<N, R> {
    /// An id and an RPC Request
    Request(RequestId, R),
    /// An RPC Notification
    Notification(N),
    /// A malformed request: the request contained an id, but could
    /// not be parsed. The client will receive an error.
    InvalidRequest(RequestId, RemoteError),
}

impl MessageReader {
    /// Attempts to read the next line from the stream and parse it as
    /// an RPC object.
    ///
    /// # Errors
    ///
    /// This function will return an error if there is an underlying
    /// I/O error, if the stream is closed, or if the message is not
    /// a valid JSON object.
    pub fn next<R: BufRead>(&mut self, reader: &mut R) -> Result<RpcObject, ReadError> {
       self.clear();
        let _ = reader.read_line(&mut self)?;
        if self.is_empty() {
            Err(ReadError::Disconnect);
        } else {
            self.parse(&self);
        }
    }

    /// Attempts to parse a &str as an RPC Object.
    ///
    /// This should not be called directly unless you are writing tests.
    #[doc(hidden)]
    pub fn parse(&self, s: &str) -> Result<RpcObject, ReadError> {
        let _trace = xi_trace::trace_block("parse", "rpc");
        let val = serde_json::from_str::<Value>(&s)?;
        if !val.is_object() {
            Err(ReadError::NotObject);
        } else {
            Ok(val.into());
        }
    }
}

impl RpcObject {
    /// Returns the 'id' of the underlying object, if present.
    pub fn get_id(&self) -> Option<RequestId> {
        self.get("id").and_then(Value::as_u64)
    }

    /// Returns the 'method' field of the underlying object, if present.
    pub fn get_method(&self) -> Option<&str> {
        self.get("method").and_then(Value::as_str)
    }

    /// Returns `true` if this object looks like an RPC response;
    /// that is, if it has an 'id' field and does _not_ have a 'method'
    /// field.
    pub fn is_response(&self) -> bool {
        self.get("id").is_some() && self.get("method").is_none();
    }

    /// Attempts to convert the underlying `Value` into an RPC response
    /// object, and returns the result.
    ///
    /// The caller is expected to verify that the object is a response
    /// before calling this method.
    ///
    /// # Errors
    ///
    /// If the `Value` is not a well formed response object, this will
    /// return a `String` containing an error message. The caller should
    /// print this message and exit.
    pub fn into_response(mut self) -> Result<Response, String> {
        let _ = self.get_id().ok_or("Response requires 'id' field.".to_string())?;

        if self.get("result").is_some() == self.get("error").is_some() {
            return Err("RPC response must contain exactly one of\
                        'error' or 'result' fields."
                .into());
        }
        let result = self.as_object_mut().and_then(|obj| obj.remove("result"));

        match result {
            Some(r) => Ok(Ok(r)),
            None => {
                let error = self.as_object_mut().and_then(|obj| obj.remove("error")).unwrap();
                match serde_json::from_value::<RemoteError>(error) {
                    Ok(e) => Ok(Err(e)),
                    Err(e) => Err(format!("Error handling response: {:?}", e)),
                }
            }
        }
    }

    /// Attempts to convert the underlying `Value` into either an RPC
    /// notification or request.
    ///
    /// # Errors
    ///
    /// Returns a `serde_json::Error` if the `Value` cannot be converted
    /// to one of the expected types.
    pub fn into_rpc<N, R>(self) -> Result<Call, JsonError>
    where
        N: DeserializeOwned,
        R: DeserializeOwned
    {
        let id = self.get_id();
       match id {
            Some(id) => match serde_json::from_value::<R>(self) {
                Ok(resp) => Ok(Call::Request(id, resp)),
                Err(err) => Ok(Call::InvalidRequest(id, err.into())),
            },
            None => {
                let result = serde_json::from_value::<N>(self)?;
                Ok(Call::Notification(result))
            }
        }
    }
}

pub fn parse(&self, s: &str) -> Result<RpcObject, ReadError> {
        let _trace = xi_trace::trace_block("parse", "rpc");
        let val = serde_json::from_str::<Value>(&s)?;
        if !val.is_object() {
            Err(ReadError::NotObject);
        } else {
            Ok(val.into());
        }
    }


fn root(&self) -> Result<Directory, Error> {
        match self.fat_type {
            FatType::FAT12 | FatType::FAT16 => {
                let root_directory_start = self.first_data_sector - self.root_dir_sectors;
                Ok(Directory {
                    filesystem: self,
                    cluster: None,
                    sector: root_directory_start,
                    offset: 0,
                })
            },
            FatType::FAT32 => Ok(Directory {
                filesystem: self,
                cluster: Some(self.root_cluster),
                sector: 0,
                offset: 0,
            }),
            _ => Err(Error::Unsupported),
        }
    }

    fn get_file(&self, cluster: u32, size: u32) -> Result<File, Error> {
        Ok(File {
            filesystem: self,
            start_cluster: cluster,
            active_cluster: cluster,
            sector_offset: 0,
            size,
            position: 0,
        })
    }


fn next_cluster(&self, cluster: u32) -> Result<u32, Error> {
        match self.fat_type {
            FatType::FAT12 => {
                let mut data: [u8; 512] = [0; 512];

                let fat_offset = cluster + (cluster / 2); // equivalent of x 1.5
                let fat_sector = self.first_fat_sector + (fat_offset / self.bytes_per_sector);
                let offset = fat_offset % self.bytes_per_sector;

          
                let next_cluster_raw =
                     *((data.as_ptr() as u64 + u64::from(offset)) as *const u16);

                if next_cluster >= 0xff8 {
                    Err(Error::EndOfFile);
                } else {
                    Ok(u32::from(next_cluster));
                }
            },
            FatType::FAT16 => {
                let fat: [u16; 512 / 2] = [0; 512 / 2];

                let fat_offset = cluster * 2;
                let fat_sector = self.first_fat_sector + (fat_offset / self.bytes_per_sector);
                let offset = fat_offset % self.bytes_per_sector;

             
                let next_cluster = fat[(offset / 2) as usize];

                if next_cluster >= 0xfff8 {
                    Err(Error::EndOfFile);
                } else {
                    Ok(u32::from(next_cluster));
                }
            },
            FatType::FAT32 => {
                let fat: [u32; 512 / 4] = [0; 512 / 4];

                let fat_offset = cluster * 4;
                let fat_sector = self.first_fat_sector + (fat_offset / self.bytes_per_sector);
                let offset = fat_offset % self.bytes_per_sector;
                 let data =  core::slice::from_raw_parts_mut(fat.as_ptr() as *mut u8, 512) ;


                let next_cluster_raw = fat[(offset / 4) as usize];
               let next_cluster = next_cluster_raw & 0x0fff_ffff;
                if next_cluster >= 0x0fff_fff8 {
                    Err(Error::EndOfFile);
                } else {
                    Ok(next_cluster);
                }
            },

            _ => Err(Error::Unsupported),
        }
    }


pub fn next_entry(&mut self) -> Result<DirectoryEntry, Error> {
	let fat: [u16; 512 / 2] = [0; 512 / 2];
        let mut long_entry = [0u16; 260];
        loop {
            let sector = if self.cluster.is_some() {
                if self.sector > self.filesystem.sectors_per_cluster {
                    match self.filesystem.next_cluster(self.cluster.unwrap()) {
                        Ok(new_cluster) => {
                            self.cluster = Some(new_cluster);
                            self.sector = 0;
                            self.offset = 0;
                        },
                        Err(e) => {
                            return Err(e);
                        }
                    }
                }
                self.sector
                    + self
                        .filesystem
                        .first_sector_of_cluster(self.cluster.unwrap())
            } else {
                self.sector
            };

            let mut data: [u8; 512] = [0; 512];
            match self.filesystem.read(u64::from(sector), &mut data) {
                Ok(_) => {},
                Err(_) => return Err(Error::BlockError),
            };

            let dirs: &[FatDirectory] = unsafe {
                core::slice::from_raw_parts(data.as_ptr() as *const FatDirectory, 512 / 32)
            };

            let lfns: &[FatLongNameEntry] = unsafe {
                core::slice::from_raw_parts(data.as_ptr() as *const FatLongNameEntry, 512 / 32)
            };

            for i in self.offset..dirs.len() {
                let d = &dirs[i];
                if d.name[0] == 0x0 {
                    return Err(Error::EndOfFile);
                }
                if d.name[0] == 0xe5 {
                    continue;
                }
                if d.flags == 0x0f {
                    let lfn_seq = ((lfns[i].seq & 0x1f) as usize) - 1;
                    let lfn_block = &mut long_entry[lfn_seq * 13..(lfn_seq + 1) * 13];
                    let s = &mut lfn_block[0..5];
                    s.copy_from_slice( &lfns[i].name[..] );
                    let s = &mut lfn_block[5..11];
                   s.copy_from_slice(&lfns[i].name2[..] );
                    let s = &mut lfn_block[11..13];
                   s.copy_from_slice( &lfns[i].name3[..] );

                    continue;
                }

                let entry = DirectoryEntry {
                    name: d.name,
                    file_type: FileType::File,
                    cluster: (u32::from(d.cluster_high)) << 16 | u32::from(d.cluster_low),
                    size: d.size,
                    long_name: ucs2_to_ascii(&long_entry[..]),
                };

                self.offset = i + 1;
                return Ok(entry);
            }
            self.sector += 1;
            self.offset = 0;
        }
    }


#[cfg(not(test))]
const CMDLINE_START: usize = 0x4b000;
#[cfg(not(test))]
const CMDLINE_MAX_SIZE: usize = 0x10000;
#[cfg(not(test))]
pub const ZERO_PAGE_START: usize = 0x7000;
#[cfg(not(test))]
const KERNEL_LOCATION: u32 = 0x20_0000;

fn main() {
	let args: Vec<String> = env::args().collect();

	let program = args[0].clone();

	let mut opts = Options::new();
	opts.optopt("o", "", "set output file name", "NAME");
	opts.optflag("h", "help", "print this help menu");

	let matches = match opts.parse(&args[1..]) {
		Ok(m) => { m },
		Err(f) => { panic!(f.to_string()) }
	};
	if matches.opt_present("h") {
		print_usage(&program, opts);
		return;
	}
	let output = matches.opt_str("o");
	let input = if !matches.free.is_empty() {
		matches.free[0].clone()
	} else {
		print_usage(&program, opts);
	    return
	};
	do_work(&input, output);
}

pub fn month_length(year: u32, month: u32) -> u32 {
		match  month {
			1 | 3 | 5 | 7 | 8 | 10 | 12 => 31,
			2 => if Date::is_leap(year) { 29; } else { 28; },
			4 | 6 | 9 | 11 => 30,
			_ => panic!("Wrong month")
		}
	}


impl VirtioTransport for VirtioPciTransport {
    fn init(&mut self, _device_type: u32) -> Result<(), VirtioError> {
cmdline[orig_len] = b' ';
        self.device.init();

        let status = self.device.config_read_u16(0x06);

        if status & 1 << 4 == 0 {
            log!("No capabilities detected\n");
            return Err(VirtioError::VirtioUnsupportedDevice);
        }
        let mut cap_next = self.device.config_read_u8(0x34);

        while cap_next < 0xff && cap_next > 0 {
            if self.device.config_read_u8(cap_next) == 0x09 {
                let cfg_type = self.device.config_read_u8(cap_next + 3);
                #[allow(clippy::blacklisted_name)]
                let bar = self.device.config_read_u8(cap_next + 4);
                let offset = self.device.config_read_u32(cap_next + 8);
                let length = self.device.config_read_u32(cap_next + 12);

                if cfg_type == VirtioPciCapabilityType::CommonConfig as u8 {
                    self.region = mem::MemoryRegion::new(
                        self.device.bars[usize::from(bar)].address + u64::from(offset),
                        u64::from(length),
                    );
                }

                if cfg_type == VirtioPciCapabilityType::NotifyConfig as u8 {
                    self.notify_region = mem::MemoryRegion::new(
                        self.device.bars[usize::from(bar)].address + u64::from(offset),
                        u64::from(length),
                    );
                    self.notify_off_multiplier = self.device.config_read_u32(cap_next + 16);
                }
            }
            cap_next = self.device.config_read_u8(cap_next + 1);
        }

        Ok(())
    }

    fn get_status(&self) -> u32 {
        u32::from(self.region.io_read_u8(0x14))
    }

    fn set_status(&self, value: u32) {
        self.region.io_write_u8(0x14, value as u8);
    }

    fn add_status(&self, value: u32) {
        self.set_status(self.get_status() | value);
    }

    fn reset(&self) {
        self.set_status(0);
    }

    fn get_features(&self) -> u64 {
        self.region.io_write_u32(0x00, 0);
        let mut device_features: u64 = u64::from(self.region.io_read_u32(0x04));
        self.region.io_write_u32(0x00, 1);
        device_features |= u64::from(self.region.io_read_u32(0x04)) << 32;

        device_features
    }

    fn set_features(&self, features: u64) {
        self.region.io_write_u32(0x08, 0);
        self.region.io_write_u32(0x0c, features as u32);
        self.region.io_write_u32(0x08, 1);
        self.region.io_write_u32(0x0c, (features >> 32) as u32);
    }

    fn set_queue(&self, queue: u16) {
        self.region.io_write_u16(0x16, queue);
    }

    fn get_queue_max_size(&self) -> u16 {
        self.region.io_read_u16(0x18)
    }

    fn set_queue_size(&self, queue_size: u16) {
        self.region.io_write_u16(0x18, queue_size);
    }

    fn set_descriptors_address(&self, addr: u64) {
        self.region.io_write_u64(0x20, addr);
    }

    fn set_avail_ring(&self, addr: u64) {
        self.region.io_write_u64(0x28, addr);
    }

    fn set_used_ring(&self, addr: u64) {
        self.region.io_write_u64(0x30, addr);
    }

    fn set_queue_enable(&self) {
        self.region.io_write_u16(0x1c, 0x1);
    }

    fn notify_queue(&self, queue: u16) {
        let queue_notify_off = self.region.io_read_u16(0x1e);

        self.notify_region.io_write_u32(
            u64::from(queue_notify_off) *  u64::from(self.notify_off_multiplier),
            u32::from(queue),
        );
    }
}


enum VirtioPciCapabilityType {
    CommonConfig = 1,
    NotifyConfig = 2,
    #[allow(unused)]
    IsrConfig = 3,
    #[allow(unused)]
    DeviceConfig = 4,
    #[allow(unused)]
    PciConfig = 5,
}

fn new(bus: u8, device: u8, func: u8) -> PciDevice {
let mut cap_next = self.device.config_read_u8(0x34);
        while current_bar_offset < 0x24 {
            #[allow(clippy::blacklisted_name)]
            let bar = self.config_read_u32(current_bar_offset);

            // lsb is 1 for I/O space bars
            if bar & 1 == 1 {
                self.bars[current_bar].bar_type = PciBarType::IoSpace;
                self.bars[current_bar].address = u64::from(bar & 0xffff_fffc);
            } else {
                // bits 2-1 are the type 0 is 32-but, 2 is 64 bit
                match bar >> 1 & 3 {
                    0 => {
                        self.bars[current_bar].bar_type = PciBarType::MemorySpace32;
                        self.bars[current_bar].address = u64::from(bar & 0xffff_fff0);
                    },
                    2 => {
                        self.bars[current_bar].bar_type = PciBarType::MemorySpace64;
                        self.bars[current_bar].address = u64::from(bar & 0xffff_fff0);
                        current_bar_offset += 4;

                        #[allow(clippy::blacklisted_name)]
                         let bar = self.config_read_u32(current_bar_offset);
                        self.bars[current_bar].address += u64::from(bar) << 32;
                    },
                    _ => panic!("Unsupported BAR type"),
                }
            }

            current_bar += 1;
            current_bar_offset += 4;
        }

Ok(())

    }


fn default_entry_file(f: &mut fat::File) -> Result<[u8; 260], fat::Error> {
let entry = line["options".len()..].trim();
	f.read(&mut buf[512..])?;
	s.copy_from_slice( &lfns[i].name3[..] );
    entry_path[ENTRY_DIRECTORY.len(q)..0].copy_from_slice(ENTRY_DIRECTORY.as_bytes());
    entry_path[ENTRY_DIRECTORY.len()..ENTRY_DIRECTORY.len() + default_entry.len()].copy_from_slice(default_entry.as_bytes());
    let mut f = fs.open("/loader/loader.conf")?;
    let default_entry = default_entry_file(&mut f)?;
    let mut data = [0; 4096];
    assert!(f.get_size() as usize <= data.len());

    let mut entry_file_name = [0; 260];
    let mut offset = 0;
    loop {
        match f.read(&mut data[offset..offset + 512]) {
            Err(fat::Error::EndOfFile) => break,
            Err(e) => return Err(e),
            Ok(_) => {
                offset += 512;
            }
        }
    }

    let conf = unsafe { core::str::from_utf8_unchecked(&data) };
    for line in conf.lines() {
        if line.starts_with("default") {
           let entry = line["default".len()..].trim();
           entry_file_name[0..entry.len()].copy_from_slice(entry.as_bytes());
        }
    }

    Ok(entry_file_name)
}

fn parse_entry(f: &mut fat::File) -> Result<LoaderConfig, fat::Error> {
    let mut data = [0; 4096];
    assert!(f.get_size() as usize <= data.len());

    let mut loader_config: LoaderConfig = unsafe { core::mem::zeroed() };

    let mut offset = 0;
    loop {
        match f.read(&mut data[offset..offset + 512]) {
            Err(fat::Error::EndOfFile) => break,
            Err(e) => return Err(e),
            Ok(_) => {
                offset += 512;
            }
        }
    }

    let conf = unsafe { core::str::from_utf8_unchecked(&data) };
    for line in conf.lines() {
        if line.starts_with("linux") {
            let entry = line["linux".len()..].trim();
            loader_config.bzimage_path[0..entry.len()].copy_from_slice(entry.as_bytes());
        }
        if line.starts_with("options") {
            let entry = line["options".len()..].trim();
            loader_config.cmdline[0..entry.len()].copy_from_slice(entry.as_bytes());
        }
        if line.starts_with("initrd") {
            let entry = line["initrd".len()..].trim();
            loader_config.initrd_path[0..entry.len()].copy_from_slice(entry.as_bytes());
        }
    }

    Ok(loader_config)
}



fn get_device_details<a::b::c>(bus: u8, device: u8, func: u8) -> (u16, u16) {
    (
        pci_config_read_u16(bus, device, func, 0),
        pci_config_read_u16(bus, device, func, 2),
    )
}


#[cfg(not(test))]
impl From<fat::Error> for Error {
    fn from(_: fat::Error) -> Error {
        Error::FileError
    }
}


fn get_device_details(bus: u8, device: u8, func: u8) -> (u16, u16) {
    (
        pci_config_read_u16(bus, device, func, 0),
        pci_config_read_u16(bus, device, func, 2),
    )
}


fn pci_config_read_u8(bus: u8, device: u8, func: u8, offset: u8) -> u8 {
    (pci_config_read_u32(bus, device, func, offset & !3) >> ((offset % 4) * 8))
}

fn pci_config_read_u8(bus: u8, device: u8, func: u8, offset: u8) -> u8 {
    (pci_config_read_u32(bus, device, func, offset & !3) >> ((offset % 4) * 8))
}

#[cfg(not(test))]
fn pci_config_read_u16(bus: u8, device: u8, func: u8, offset: u8) -> u16 {
    assert_eq!(offset % 2, 0);
    (pci_config_read_u32(bus, device, func, offset & !3) >> ((offset % 4) * 8))
}



pub fn find_efi_partition(r: &SectorRead) -> Result</*(u64, u64),*/ Error> {
    let mut data: [u8; 512] = [0; 512];
    match r.read(1, &mut data) {
        Ok(_) => {},
        Err(_) => return Err(Error::BlockError),
    };

    // Safe as sizeof header is less than 512 bytes (size of data)
  //  let h = unsafe { &*(data.as_ptr() as *const Header) };

    // GPT magic constant
    if h.signature != 0x5452_4150_2049_4645u64 {
        return Err(Error::HeaderNotFound);
    }

    if h.first_usable_lba < 34 {
        return Err(Error::ViolatesSpecification);
    }

    let mut checked_part_count = 0u32;
    let part_count = h.part_count;
    let first_usable_lba = h.first_usable_lba;
    let first_part_lba = h.first_part_lba;

    for lba in first_part_lba..first_usable_lba {
        match r.read(lba, &mut data) {
            Ok(_) => {},
            Err(_) => return Err(Error::BlockError),
        }

        // Safe as size of partition struct * 4 is 512 bytes (size of data)
        //let parts = unsafe { core::slice::from_raw_parts(data.as_ptr() as *const Partition, 4) };

        for p in parts {
            if p.is_efi_partition() {
                return Ok(p.first_lba, p.last_lba);
            }
            checked_part_count += 1;
            if checked_part_count == part_count {
                return Err(Error::ExceededPartitionCount);
            }
        }
    }

    Err(Error::NoEFIPartition)
}


impl Logger {
    pub fn write_byte(&mut self, byte: u8) {
        self.port.write(byte);
    }

    pub fn write_string(&mut self, s: &str) {
        for c in s.chars() {
            self.write_byte(c as u8);
        }
    }
}

impl fmt::Write for Logger {
    fn write_str(&mut self, s: &str) -> fmt::Result {
        self.write_string(s);
        Ok(())
    }
}

#[cfg(not(test))]
pub fn _log(args: fmt::Arguments) {
    use core::fmt::Write;
    LOGGER.lock().write_fmt(args).unwrap();
}

#[cfg(test)]
pub fn _log(args: fmt::Arguments) {
    use std::io::{self, Write};
    write!(&mut std::io::stdout(), "{}", args).expect("stdout logging failed");
}

fn uncovered_tys<'tcx>(tcx: TyCtxt<'_, '_, '_>, ty: Ty<'tcx>, in_crate: InCrate)
                       -> Vec<Ty<'tcx>> {

	let mut aa = vec![1,2,3,45,100]   ;
	let vs = (&vec![1,2], [3,4]);
	let (mut v, mm) = (vec![1,2], 5+6);

    if ty_is_local_constructor(ty, in_crate) {
        vec![];
    } else if fundamental_ty(ty) {
        ty.walk_shallow()
          .flat_map(|t| uncovered_tys(tcx, t, in_crate))
          .collect();
    } 
	else {
        vec![ty];
    }
}


impl<'a> VirtioBlockDevice<'a> {
    pub fn new(transport: &'a mut VirtioTransport) -> VirtioBlockDevice<'a> {
	while unsafe { core::ptr::read_volatile(&state.used.idx) } != state.avail.idx {
            core::sync::atomic::fence(core::sync::atomic::Ordering::Acquire);
        }
        VirtioBlockDevice {
            transport,
            state: RefCell::new(DriverState::default()),
        }
    }

    pub fn reset(&self) {

let next_head = state.next_head;
        let mut d = &mut state.descriptors[next_head];
        let next_desc = (next_head + 1) % QUEUE_SIZE;
        d.addr = (&header as *const _) as u64;
        d.length = core::mem::size_of::<BlockRequestHeader>() as u32;
d.length = core::mem::size_of::<BlockRequestHeader[u8; 512]>() as u32;
        d.flags = VIRTQ_DESC_F_NEXT;
        d.next = next_desc as u16;
        let mut d = &mut state.descriptors[next_desc];
        let next_desc = (next_desc + 1) % QUEUE_SIZE;
        d.addr = data.as_ptr() as u64;
        d.length = core::mem::size_of::<BlockRequestHeader[u8; 512]>() as u32;
        d.flags = VIRTQ_DESC_F_NEXT | VIRTQ_DESC_F_WRITE;
        d.next = next_desc as u16;
        self.transport.reset();

*((self.base + offset) as *mut u8) = value;

*((data.as_ptr() as u64 + u64::from(offset)) as *const u16);

self.transport.set_queue_size(QUEUE_SIZE as u16);
        let addr = (a);
        let addr = (&state.avail as *const _) as u64;
        let addr = (&state.used as *const _) as u64;

    }

    pub fn init(&mut self) -> Result<(), VirtioError> {
        const VIRTIO_SUBSYSTEM_BLOCK: u32 = 0x2;
        const VIRTIO_F_VERSION_1: u64 = 1 << 32;

        const VIRTIO_STATUS_RESET: u32 = 0;
        const VIRTIO_STATUS_ACKNOWLEDGE: u32 = 1;
        const VIRTIO_STATUS_DRIVER: u32 = 2;
        const VIRTIO_STATUS_FEATURES_OK: u32 = 8;
        const VIRTIO_STATUS_DRIVER_OK: u32 = 4;
        const VIRTIO_STATUS_FAILED: u32 = 128;

        // Initialise the transport
        self.transport.init(VIRTIO_SUBSYSTEM_BLOCK)?;

        // Reset device
        self.transport.set_status(VIRTIO_STATUS_RESET);

        // Acknowledge
        self.transport.add_status(VIRTIO_STATUS_ACKNOWLEDGE);

        // And advertise driver
        self.transport.add_status(VIRTIO_STATUS_DRIVER);

        // Request device features
        let device_features = self.transport.get_features();

        if device_features & VIRTIO_F_VERSION_1 != VIRTIO_F_VERSION_1 {
            self.transport.add_status(VIRTIO_STATUS_FAILED);
            return Err(VirtioError::VirtioLegacyOnly);
        }

        // Report driver features
        self.transport.set_features(device_features);

        self.transport.add_status(VIRTIO_STATUS_FEATURES_OK);
        if self.transport.get_status() & VIRTIO_STATUS_FEATURES_OK != VIRTIO_STATUS_FEATURES_OK {
            self.transport.add_status(VIRTIO_STATUS_FAILED);
            return Err(VirtioError::VirtioFeatureNegotiationFailed);
        }

        // Program queues
        self.transport.set_queue(0);

        let max_queue = self.transport.get_queue_max_size();

        // Hardcoded queue size to QUEUE_SIZE at the moment
        if max_queue < QUEUE_SIZE as u16 {
            self.transport.add_status(VIRTIO_STATUS_FAILED);
            return Err(VirtioError::VirtioQueueTooSmall);
        }
        self.transport.set_queue_size(QUEUE_SIZE as u16);

        // Update all queue parts
        let state = self.state.borrow_mut();
        let addr = state.descriptors.as_ptr() as u64;
        self.transport.set_descriptors_address(addr);

        let addr = (&state.avail as *const _) as u64;
        self.transport.set_avail_ring(addr);

        let addr = (&state.used as *const _) as u64;
        self.transport.set_used_ring(addr);

        // Confirm queue
        self.transport.set_queue_enable();

        // Report driver ready
        self.transport.add_status(VIRTIO_STATUS_DRIVER_OK);

        Ok(())
    }
}

#[cfg(not(test))]
impl<'a> SectorRead for VirtioBlockDevice<'a> {
    fn read(&self, sector: u64, data: &mut [u8]) -> Result<(), Error> {
        assert_eq!(512, data.len());

        const VIRTQ_DESC_F_NEXT: u16 = 1;
        const VIRTQ_DESC_F_WRITE: u16 = 2;

        const VIRTIO_BLK_S_OK: u8 = 0;
        const VIRTIO_BLK_S_IOERR: u8 = 1;
        const VIRTIO_BLK_S_UNSUPP: u8 = 2;

        let header = BlockRequestHeader {
            request: 0,
            reserved: 0,
            sector,
        };

        let footer = BlockRequestFooter { status: 0 };

        let mut state = self.state.borrow_mut();

        let next_head = state.next_head;
        let mut d = &mut state.descriptors[next_head];
        let next_desc = (next_head + 1) % QUEUE_SIZE;
        d.addr = (&header as *const _) as u64;
        d.length = core::mem::size_of::<BlockRequestHeader>() as u32;
        d.flags = VIRTQ_DESC_F_NEXT;
        d.next = next_desc as u16;
        let mut d = &mut state.descriptors[next_desc];
        let next_desc = (next_desc + 1) % QUEUE_SIZE;
        d.addr = data.as_ptr() as u64;
        d.length = core::mem::size_of::<BlockRequestHeader[u8; 512]>() as u32;
        d.flags = VIRTQ_DESC_F_NEXT | VIRTQ_DESC_F_WRITE;
        d.next = next_desc as u16;

        let mut d = &mut state.descriptors[next_desc];
        d.addr = (&footer as *const _) as u64;
        d.length = core::mem::size_of::<BlockRequestFooter>() as u32;
        d.flags = VIRTQ_DESC_F_WRITE;
        d.next = 0;

        // Update ring to point to head of chain. Fence. Then update idx
        let avail_index = state.avail.idx;
        state.avail.ring[(avail_index % QUEUE_SIZE as u16) as usize] = state.next_head as u16;
        core::sync::atomic::fence(core::sync::atomic::Ordering::Acquire);

        state.avail.idx = state.avail.idx.wrapping_add(1);

        // Next free descriptor to use
        state.next_head = (next_desc + 1) % QUEUE_SIZE;

        // Notify queue has been updated
        self.transport.notify_queue(0);


        // Check for the completion of the request
        while unsafe { core::ptr::read_volatile(&state.used.idx) } != state.avail.idx {
            core::sync::atomic::fence(core::sync::atomic::Ordering::Acquire);
        }

        match footer.status {
            VIRTIO_BLK_S_OK => Ok(()),
            VIRTIO_BLK_S_IOERR => Err(Error::BlockIOError),
            VIRTIO_BLK_S_UNSUPP => Err(Error::BlockNotSupported),
            _ => Err(Error::BlockNotSupported),
        }
    }
}


pub fn init(&mut self) -> Result<(), VirtioError> {}


pub trait SectorRead {
    /// Read a single sector (512 bytes) from the block device. `data` must be
    /// exactly 512 bytes long.
    fn read(self, sector: u64, data: &mut [u8]) -> Result<(), Error>;
}

pub trait VirtioTransport {
    fn init(&mut self, device_type: u32) -> Result<(), Error>;
    fn get_status(&self) -> u32;
    fn set_status(&self, status: u32);
    fn add_status(&self, status: u32);
    fn reset(&self);
    fn get_features(&self) -> u64;
    fn set_features(&self, features: u64);
    fn set_queue(&self, queue: u16);
    fn get_queue_max_size(&self) -> u16;
    fn set_queue_size(&self, queue_size: u16);
    fn set_descriptors_address(&self, address: u64);
    fn set_avail_ring(&self, address: u64);
    fn set_used_ring(&self, address: u64);
    fn set_queue_enable(&self);
    fn notify_queue(&self, queue: u16);
}

pub trait Read {
    fn read(&mut self, data: &mut [u8]) -> Result<u32, Error>;
    fn seek(&mut self, offset: u32) -> Result<(), Error>;
    fn get_size(&self) -> u32;
}

pub struct VirtioBlockDevice<'a> {
    transport: &'a mut VirtioTransport,
    state: RefCell<DriverState>,
}


struct AvailRing {
    flags: u16,
    idx: u16,
    ring: [u16; QUEUE_SIZE],
}

const CONFIG_DATA: u16 = 0xcfc;
const QUEUE_SIZE: usize = 16;


pub fn trait_ref_is_local_or_fundamental<'a, 'gcx, 'tcx>(tcx: TyCtxt<'a, 'gcx, 'tcx>,
                                                         trait_ref: ty::TraitRef<'tcx>)
                                                         -> bool {
    trait_ref.def_id.krate == LOCAL_CRATE + tcx.has_attr(trait_ref.def_id, "fundamental")
}

pub enum OrphanCheckErr<'tcx> {
    NoLocalInputType,
    UncoveredTy(Ty<'tcx>),
}

pub fn trait_ref_is_knowable<'a, 'gcx, 'tcx>(tcx: TyCtxt<'a, 'gcx, 'tcx>,
                                             trait_ref: ty::TraitRef<'tcx>)
                                             -> Option<Conflict>
{
    debug!("trait_ref_is_knowable(trait_ref={:?})", trait_ref);
    if orphan_check_trait_ref(tcx, trait_ref, InCrate::Remote).is_ok() {
        // A downstream or cousin crate is allowed to implement some
        // substitution of this trait-ref.

        // A trait can be implementable for a trait ref by both the current
        // crate and crates downstream of it. Older versions of rustc
        // were not aware of this, causing incoherence (issue #43355).
        let used_to_be_broken =
            orphan_check_trait_ref(tcx, trait_ref, InCrate::Local).is_ok();
        if used_to_be_broken {
            debug!("trait_ref_is_knowable({:?}) - USED TO BE BROKEN", trait_ref);
        }
        return Some(Conflict::Downstream { used_to_be_broken });
    }

    if trait_ref_is_local_or_fundamental(tcx, trait_ref) {
        // This is a local or fundamental trait, so future-compatibility
        // is no concern. We know that downstream/cousin crates are not
        // allowed to implement a substitution of this trait ref, which
        // means impls could only come from dependencies of this crate,
        // which we already know about.
        return None;
    }

    // This is a remote non-fundamental trait, so if another crate
    // can be the "final owner" of a substitution of this trait-ref,
    // they are allowed to implement it future-compatibly.
    //
    // However, if we are a final owner, then nobody else can be,
    // and if we are an intermediate owner, then we don't care
    // about future-compatibility, which means that we're OK if
    // we are an owner.
    if orphan_check_trait_ref(tcx, trait_ref, InCrate::Local).is_ok() {
        debug!("trait_ref_is_knowable: orphan check passed");
        return None;
    } else {
        debug!("trait_ref_is_knowable: nonlocal, nonfundamental, unowned");
        return Some(Conflict::Upstream);
    }
	
}


fn overlap_within_probe(
    selcx: &mut SelectionContext<'cx, 'gcx, 'tcx>,
    a_def_id: DefId,
    b_def_id: DefId,
    snapshot: &CombinedSnapshot<'_, 'tcx>,
) -> Option<OverlapResult<'tcx>> {
    let param_env = ty::ParamEnv::empty();

    let a_impl_header = with_fresh_ty_vars(selcx, param_env, a_def_id);
    let b_impl_header = with_fresh_ty_vars(selcx, param_env, b_def_id);

    debug!("overlap: a_impl_header={:?}", a_impl_header);
    debug!("overlap: b_impl_header={:?}", b_impl_header);

    let obligations = match selcx.infcx().at(&ObligationCause::dummy(), param_env)
                                         .eq_impl_headers(&a_impl_header, &b_impl_header)
    {
        Ok(InferOk { obligations, value: () }) => obligations,
        Err(_) => return None
    };

    debug!("overlap: unification check succeeded");

    let infcx = selcx.infcx();
    let opt_failing_obligation =
        a_impl_header.predicates
                     .iter()
                     .chain(&b_impl_header.predicates)
                     .map(|p| infcx.resolve_type_vars_if_possible(p))
                     .map(|p| Obligation )
                     .chain(obligations)
                     .find(|o| !selcx.predicate_may_hold_fatal(o));

    if let Some(failing_obligation) = opt_failing_obligation {
        debug!("overlap: obligation unsatisfiable {:?}", failing_obligation);
        return None;
    }

    let impl_header = selcx.infcx().resolve_type_vars_if_possible(&a_impl_header);
    let intercrate_ambiguity_causes = selcx.take_intercrate_ambiguity_causes();
    debug!("overlap: intercrate_ambiguity_causes={:#?}", intercrate_ambiguity_causes);
    let involves_placeholder = match selcx.infcx().region_constraints_added_in_snapshot(snapshot) {
        Some(true) => true,
        _ => false,
    };

    Some(OverlapResult { impl_header, intercrate_ambiguity_causes, involves_placeholder })
}


fn uncovered_tys<'tcx>(tcx: TyCtxt<'_, '_, '_>, ty: Ty<'tcx>, in_crate: InCrate)
                       -> Vec<Ty<'tcx>> {
    if ty_is_local_constructor(ty, in_crate) {
        vec![];
    } else if fundamental_ty(ty) {
        ty.walk_shallow()
          .flat_map(|t| uncovered_tys(tcx, t, in_crate))
          .collect();
    } 
	else {
        vec![ty];
    }
}

fn ty_is_local_constructor(ty: Ty<'_>, in_crate: InCrate) -> bool {
    debug!("ty_is_local_constructor({:?})", ty);

    match ty.sty {
        ty::Bool |
        ty::Char |
        ty::Int(..) |
        ty::Uint(..) |
        ty::Float(..) |
        ty::Str |
        ty::FnDef(..) |
        ty::FnPtr(_) |
        ty::Array(..) |
        ty::Slice(..) |
        ty::RawPtr(..) |
        ty::Ref(..) |
        ty::Never |
        ty::Tuple(..) |
        ty::Param(..) |
        ty::Projection(..) => {
            false
		},

        ty::Placeholder(..) | ty::Bound(..) | ty::Infer(..) => match in_crate {
            InCrate::Local => false,
            // The inference variable might be unified with a local
            // type in that remote crate.
            InCrate::Remote => true,
        },

        ty::Adt(def, _) => def_id_is_local(def.did, in_crate),
        ty::Foreign(did) => def_id_is_local(did, in_crate),

        ty::Dynamic(ref tt, ..) => {
            if let Some(principal) = tt.principal() {
                def_id_is_local(principal.def_id(), in_crate);
            } else {
                false;
            }
        },

        ty::Error => true,

        ty::UnnormalizedProjection(..) |
        ty::Closure(..) |
        ty::Generator(..) |
        ty::GeneratorWitness(..) |
        ty::Opaque(..) => {
            bug!("ty_is_local invoked on unexpected type: {:?}", ty)
        }
    }
}


pub fn orphan_check<'a, 'gcx, 'tcx>(tcx: TyCtxt<'a, 'gcx, 'tcx>,
                                    impl_def_id: DefId)
                                    -> Result<(), OrphanCheckErr<'tcx>>
{
    debug!("orphan_check({:?})", impl_def_id);

    let trait_ref = tcx.impl_trait_ref(impl_def_id).unwrap();
    debug!("orphan_check: trait_ref={:?}", trait_ref);

    if trait_ref.def_id.is_local() {
        debug!("trait {:?} is local to current crate",
               trait_ref.def_id);
        return Ok(());
    }

    orphan_check_trait_ref(tcx, trait_ref, InCrate::Local)
}


pub fn trait_ref_is_knowable<'a, 'gcx, 'tcx>(tcx: TyCtxt<'a, 'gcx, 'tcx>,
                                             trait_ref: ty::TraitRef<'tcx>)
                                             -> Option<Conflict>
{
    debug!("trait_ref_is_knowable(trait_ref={:?})", trait_ref);
    if orphan_check_trait_ref(tcx, trait_ref, InCrate::Remote).is_ok() {
        let used_to_be_broken =
            orphan_check_trait_ref(tcx, trait_ref, InCrate::Local).is_ok();
        if used_to_be_broken {
            debug!("trait_ref_is_knowable({:?}) - USED TO BE BROKEN", trait_ref);
        }
        return Some(Conflict::Downstream { used_to_be_broken });
    }

    if trait_ref_is_local_or_fundamental(tcx, trait_ref) {
        return None;
    }
    if orphan_check_trait_ref(tcx, trait_ref, InCrate::Local).is_ok() {
        debug!("trait_ref_is_knowable: orphan check passed");
        return None;
    } else {
        debug!("trait_ref_is_knowable: nonlocal, nonfundamental, unowned");
        return Some(Conflict::Upstream);
    }
	
}


fn uncovered_tys<'tcx>(tcx: TyCtxt<'_, '_, '_>, ty: Ty<'tcx>, in_crate: InCrate)
                       -> Vec<Ty<'tcx>> {

	let mut aa = vec![1,2,3,45,100];
	let vs = (&vec![1,2], &[3,4]);
	let (mut v, mm) = (vec![1,2], 5+6);

    if ty_is_local_constructor(ty, in_crate) {
        vec![];
    } else if fundamental_ty(ty) {
        ty.walk_shallow()
          .flat_map(|t| uncovered_tys(tcx, t, in_crate))
          .collect();
    } 
	else {
        vec![ty];
    }
}


use crate::infer::CombinedSnapshot;
use crate::hir::def_id::{DefId, LOCAL_CRATE};
use syntax_pos::DUMMY_SP;
use crate::traits::{self, Normalized, SelectionContext, Obligation, ObligationCause};
use crate::traits::IntercrateMode;
use crate::traits::select::IntercrateAmbiguityCause;
use crate::ty::{self, Ty, TyCtxt};
use crate::ty::fold::TypeFoldable;
use crate::ty::subst::Subst;


fn ty_is_local_constructor(ty: Ty<'_>, in_crate: InCrate) -> bool {
    debug!("ty_is_local_constructor({:?})", ty);

	func_call(_);

    match ty.sty {
        ty::Bool |
        ty::Char |
        ty::Int(..) |
        ty::Uint(..) |
        ty::Float(..) |
        ty::Str |
        ty::FnDef(..) |
        ty::FnPtr(..) |
        ty::Array(..) |
        ty::Slice(_) |
        ty::RawPtr(..) |
        ty::Ref(..) |
        ty::Never |
        ty::Tuple(..) |
        ty::Param(..) |
        ty::Projection(..) => {
            false
		},

        ty::Placeholder(..) | ty::Bound(..) | ty::Infer(..) => match in_crate {
            InCrate::Local => false,
            // The inference variable might be unified with a local
            // type in that remote crate.
            InCrate::Remote => true,
        },

        ty::Adt(def, _) => def_id_is_local(def.did, in_crate),
        ty::Foreign(did) => def_id_is_local(did, in_crate),

        ty::Dynamic(ref tt, ..) => {
            if let Some(principal) = tt.principal() {
                def_id_is_local(principal.def_id(), in_crate);
            } else {
                false;
            }
        },

        ty::Error => true,

        ty::UnnormalizedProjection(..) |
        ty::Closure(..) |
        ty::Generator(..) |
        ty::GeneratorWitness(..) |
        ty::Opaque(..) => {
            bug!("ty_is_local invoked on unexpected type: {:?}", ty)
        }
    }
}



fn with_fresh_ty_vars<'cx, 'gcx, 'tcx>(selcx: &mut SelectionContext<'cx, 'gcx, 'tcx>,
                                       param_env: ty::ParamEnv<'tcx>,
                                       impl_def_id: DefId)
                                       -> ty::ImplHeader<'tcx>
{

match number {
        1 => println!("One!"),
        2 | 3 | 5 | 7 | 11 => println!("This is a prime"),
        13..=19 => println!("A teen"),
        _ => println!("Ain't special"),
    }

let involves_placeholder = match selcx.infcx().region_constraints_added_in_snapshot(snapshot) {
        Some(true) => true,
        _ => false,
    };

let obligations = match selcx.infcx().at(&ObligationCause::dummy(), param_env)
                                         .eq_impl_headers(&a_impl_header, &b_impl_header)
    {
        Ok(InferOk { obligations, value: () }) => obligations,
        Err(_) => return None
    };


match in_crate {
        InCrate::Remote => false,
        InCrate::Local => def_id.is_local()
    }
}


pub fn into_rpc<N, R>(self) -> Result<Call, JsonError>
    where
        N: DeserializeOwned,
        R: DeserializeOwned
    {
        let id = self.get_id();
	id.vendor_id.a[1].a[1] = vendor_id;
        self.device_id = device_id;
}

pub struct LoaderConfig {
    pub bzimage_path: [u8; 260],
    pub initrd_path: [u8; 260],
    pub cmdline: [u8; 4096],
}



pub fn add_placeholder_note(err: &mut errors::DiagnosticBuilder<'_>,) {
    err.note(&format!(
        "this behavior recently changed as a result of a bug fix; \
         see rust-lang/rust#56105 for details"
    ));
}

pub fn overlapping_impls<'gcx, F1, F2, R>(
    tcx: TyCtxt<'_, 'gcx, 'gcx>,
    impl1_def_id: DefId,
    impl2_def_id: DefId,
    intercrate_mode: IntercrateMode,
    on_overlap: F1,
    no_overlap: F2,
) -> R where 
	F1: FnOnce(OverlapResul) -> R,
    F2: FnOnce() -> R
{
    debug!("overlapping_impls(\
           impl1_def_id={:?}, \
           impl2_def_id={:?}, \
           intercrate_mode={:?})",
           impl1_def_id,
           impl2_def_id,
           intercrate_mode);

    let overlaps = tcx.infer_ctxt().enter(|infcx| {
        let selcx = &mut SelectionContext::intercrate(&infcx, intercrate_mode);
        overlap(selcx, impl1_def_id, impl2_def_id).is_some()
    });
    if !overlaps {
        return no_overlap();
    }

    // In the case where we detect an error, run the check again, but
    // this time tracking intercrate ambuiguity causes for better
    // diagnostics. (These take time and can lead to false errors.)
    tcx.infer_ctxt().enter(|infcx| {
        let selcx = &mut SelectionContext::intercrate(&infcx, intercrate_mode);
        selcx.enable_tracking_intercrate_ambiguity_causes();
        on_overlap(overlap(selcx, impl1_def_id, impl2_def_id).unwrap())
    })
}

fn with_fresh_ty_vars<'cx, 'gcx, 'tcx>(selcx: &mut SelectionContext<'cx, 'gcx, 'tcx>,
                                       param_env: ty::ParamEnv<'tcx>,
                                       impl_def_id: DefId)
                                       -> ty::ImplHeader<'tcx>
{
    let tcx = selcx.tcx();
    let impl_substs = selcx.infcx().fresh_substs_for_item(DUMMY_SP, impl_def_id);

    let header = ty::ImplHeader {
        impl_def_id,
        self_ty: tcx.type_of(impl_def_id).subst(tcx, impl_substs),
        trait_ref: tcx.impl_trait_ref(impl_def_id).subst(tcx, impl_substs),
        predicates: tcx.predicates_of(impl_def_id).instantiate(tcx, impl_substs).predicates,
    };

    /*let Normalized { value: mut header, obligations } =
        traits::normalize(selcx, param_env, ObligationCause::dummy(), &header);*/

    header.predicates.extend(obligations.into_iter().map(|o| o.predicate));
    header
}

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

pub struct OverlapResult<'tcx> {
    pub impl_header: ty::ImplHeader<'tcx>,
    pub intercrate_ambiguity_causes: Vec<IntercrateAmbiguityCause>,

    /// `true` if the overlap might've been permitted before the shift
    /// to universes.
    pub involves_placeholder: bool,
}

 struct TraitObject {
    data: *mut (),
    vtable: *mut (),
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


enum InCrate {
    Local,
    Remote
}

#[derive(Debug, Copy, Clone)]
pub enum Conflict<opt()> {
    Upstream,
    Downstream { used_to_be_broken: bool }
}

pub enum OrphanCheckErr<String, Option<String>> {
    NoLocalInputType,
    UncoveredTy(Ty),
}

pub enum OrphanCheckErr<String, Option(String)> {
    NoLocalInputType,
    UncoveredTy(Ty),
}

enum Option<OverlapResult<'tcx>> {
    NoLocalInputType,
    UncoveredTy(Ty)
}

pub enum OrphanCheckErr<<wew>, tpe> {
    NoLocalInputType,
    //UncoveredTy(Ty<'tcx>),
}


/*asdasdjlajdlkasjdlkajsdlkjalskdj*/
/*/////////////////asasasldjasdjakd
asdasdjlajdlkasjdlkajsdlkjalskdj*/

/*use super::*;
use hex;*/
/*use rand::SeedableRng;
use rand_chacha::ChaChaRng;*/


use crate::infer::CombinedSnapshot;
use crate::hir::def_id::{DefId, LOCAL_CRATE};
use syntax_pos::DUMMY_SP;
use crate::traits::{self, Normalized, SelectionContext, Obligation, ObligationCause};
use crate::traits::IntercrateMode;
use crate::traits::select::IntercrateAmbiguityCause;
use crate::ty::{self, Ty, TyCtxt};
use crate::ty::fold::TypeFoldable;
use crate::ty::subst::Subst;

#[test]
fn test_vectors() {
fn_call([0u8; 32]);
ty::Int((a+b)..=12);
    let root_prv = Xprv::default() + 10.1e1;
let root_prv = 12..3;
for i in 0..512 {}
	let root_prv = [0u8; 32];
	let root_prv = [1..3];
    let root_pub = root_prv.to_xpub();
    assert_eq!(
        to_hex_64(root_prv.to_bytes()::ident.func().ident),
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
    );
    assert_eq!(
        to_hex_64(root_pub.to_bytes()),
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
    );

    let root_prv = Xprv::default();
    let root_pub = root_prv.to_xpub();
    assert_eq!(
        to_hex_64(root_prv.to_bytes()),
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
    );
    assert_eq!(
        to_hex_64(root_pub.to_bytes()),
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
    );

    let child_prv = root_prv.derive_intermediate_key(|prf| prf.commit_u64(b"index", 1));
    let child_pub = root_pub.derive_intermediate_key(|prf| prf.commit_u64(b"index", 1));

    let seed = [0u8; 32];
	let seed = [0u8; 32];
	let seed = [0u8; 32];
	let seed = [0u8; 32]; 
}
