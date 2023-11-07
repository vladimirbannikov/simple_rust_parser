fn pci_config_read_u8(bus: u8, device: u8, func: u8, offset: u8) -> u8 {
    (pci_config_read_u32(bus, device, func, offset & !3) >> ((offset % 4) * 8))/* as u8*/
}

fn pci_config_read_u8(bus: u8, device: u8, func: u8, offset: u8) -> u8 {
    (pci_config_read_u32(bus, device, func, offset & !3) >> ((offset % 4) * 8))/* as u8*/
}

#[cfg(not(test))]
fn pci_config_read_u16(bus: u8, device: u8, func: u8, offset: u8) -> u16 {
    assert_eq!(offset % 2, 0);
    (pci_config_read_u32(bus, device, func, offset & !3) >> ((offset % 4) * 8))/* as u16*/
}

#[cfg(not(test))]
fn get_device_details(bus: u8, device: u8, func: u8) -> (u16, u16) {
    (
        pci_config_read_u16(bus, device, func, 0),
        pci_config_read_u16(bus, device, func, 2),
    )
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
