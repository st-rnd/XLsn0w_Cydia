/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEODirectionsResponse.h>

@class NSMutableArray;

@interface GEODirectionsRouteResponse : GEODirectionsResponse {
	int _type;	// 28 = 0x1c
	int _requestTimestampType;	// 32 = 0x20
	double _requestTimestamp;	// 36 = 0x24
	int _requestTimezoneOffset;	// 44 = 0x2c
	int _iconVersion;	// 48 = 0x30
	NSMutableArray *_icons;	// 52 = 0x34
}
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x1d10d; S=0x1d11d; @synthesize=_icons
@property(assign, nonatomic) int iconVersion;	// G=0x1d0ed; S=0x1d0fd; @synthesize=_iconVersion
@property(assign, nonatomic) int requestTimezoneOffset;	// G=0x1d0cd; S=0x1d0dd; @synthesize=_requestTimezoneOffset
@property(assign, nonatomic) double requestTimestamp;	// G=0x1d0a1; S=0x1d0b9; @synthesize=_requestTimestamp
@property(assign, nonatomic) int requestTimestampType;	// G=0x1d081; S=0x1d091; @synthesize=_requestTimestampType
@property(assign, nonatomic) int type;	// G=0x1d061; S=0x1d071; @synthesize=_type
// declared property setter: - (void)setIcons:(id)icons;	// 0x1d11d
// declared property getter: - (id)icons;	// 0x1d10d
// declared property setter: - (void)setIconVersion:(int)version;	// 0x1d0fd
// declared property getter: - (int)iconVersion;	// 0x1d0ed
// declared property setter: - (void)setRequestTimezoneOffset:(int)offset;	// 0x1d0dd
// declared property getter: - (int)requestTimezoneOffset;	// 0x1d0cd
// declared property setter: - (void)setRequestTimestamp:(double)timestamp;	// 0x1d0b9
// declared property getter: - (double)requestTimestamp;	// 0x1d0a1
// declared property setter: - (void)setRequestTimestampType:(int)type;	// 0x1d091
// declared property getter: - (int)requestTimestampType;	// 0x1d081
// declared property setter: - (void)setType:(int)type;	// 0x1d071
// declared property getter: - (int)type;	// 0x1d061
- (id)description;	// 0x1cf49
- (id)dictionaryRepresentation;	// 0x1cddd
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x1cbd9
- (void)dealloc;	// 0x1cb8d
@end