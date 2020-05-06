/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVTask {
	NSString *_previousETag;	// 120 = 0x78
}
@property(retain) NSString *previousETag;	// G=0xc09d; S=0xc0b1; @synthesize=_previousETag
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0xc0b1
// declared property getter: - (id)previousETag;	// 0xc09d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0xbf0d
- (id)requestBody;	// 0xbf09
- (id)additionalHeaderValues;	// 0xbe51
- (id)httpMethod;	// 0xbe45
- (id)description;	// 0xbd81
- (void)dealloc;	// 0xbd35
@end