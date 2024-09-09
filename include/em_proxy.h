// File automatically generated by swift-bridge.
#include <stdint.h>
#include <stdbool.h>
typedef enum __swift_bridge__$EMPErrorTag { __swift_bridge__$EMPError$InvalidAddress, __swift_bridge__$EMPError$InvalidPort, __swift_bridge__$EMPError$InvalidSocket, __swift_bridge__$EMPError$AlreadyRunning, __swift_bridge__$EMPError$Unknown, } __swift_bridge__$EMPErrorTag;
typedef struct __swift_bridge__$EMPError { __swift_bridge__$EMPErrorTag tag; } __swift_bridge__$EMPError;
typedef struct __swift_bridge__$Option$EMPError { bool is_some; __swift_bridge__$EMPError val; } __swift_bridge__$Option$EMPError;
void* __swift_bridge__$EMPError$Debug(__swift_bridge__$EMPError this);
void* __swift_bridge__$Vec_EMPError$new(void);
void __swift_bridge__$Vec_EMPError$drop(void* vec_ptr);
void __swift_bridge__$Vec_EMPError$push(void* vec_ptr, __swift_bridge__$EMPError item);
__swift_bridge__$Option$EMPError __swift_bridge__$Vec_EMPError$pop(void* vec_ptr);
__swift_bridge__$Option$EMPError __swift_bridge__$Vec_EMPError$get(void* vec_ptr, uintptr_t index);
__swift_bridge__$Option$EMPError __swift_bridge__$Vec_EMPError$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_EMPError$len(void* vec_ptr);
void* __swift_bridge__$Vec_EMPError$as_ptr(void* vec_ptr);

struct __swift_bridge__$Option$EMPError __swift_bridge__$start_emotional_damage(struct RustStr bind_addr);
void __swift_bridge__$stop_emotional_damage(void);
struct __swift_bridge__$Option$EMPError __swift_bridge__$test_emotional_damage(uint32_t timeout);