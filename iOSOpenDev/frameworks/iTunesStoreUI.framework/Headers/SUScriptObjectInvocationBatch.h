/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSLock, NSMutableArray, SUScriptObject;

@interface SUScriptObjectInvocationBatch : XXUnknownSuperclass {
	NSMutableArray *_invocationQueue;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	CFDictionaryRef _proxies;	// 12 = 0xc
	SUScriptObject *_rootObject;	// 16 = 0x10
}
@property(assign) SUScriptObject *rootObject;	// G=0x63b51; S=0x63bbd; 
// declared property setter: - (void)setRootObject:(id)object;	// 0x63bbd
// declared property getter: - (id)rootObject;	// 0x63b51
- (void)enqueueInvocation:(id)invocation;	// 0x63a51
- (void)_delayedDequeueInvocations;	// 0x639fd
- (void)dequeueInvocations;	// 0x638e1
- (id)copyQueuedInvocationsForObject:(id)object;	// 0x637ad
- (void)checkOutBatchTarget:(id)target;	// 0x6372d
- (id)batchProxyForObject:(id)object;	// 0x6360d
- (void)dealloc;	// 0x6357d
- (id)init;	// 0x63519
@end