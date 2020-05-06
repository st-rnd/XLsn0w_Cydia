/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMState.h>

@class NSMutableDictionary, WDText, CMOutlineState;

__attribute__((visibility("hidden")))
@interface WMState : CMState {
@private
	CMOutlineState *currentListState;	// 40 = 0x28
	CMOutlineState *outlineState;	// 44 = 0x2c
	NSMutableDictionary *listStates;	// 48 = 0x30
	WDText *mLastHeader;	// 52 = 0x34
	WDText *mLastFooter;	// 56 = 0x38
	unsigned mCurrentPage;	// 60 = 0x3c
	unsigned mBlockIndex;	// 64 = 0x40
	unsigned mRunIndex;	// 68 = 0x44
	float mTopMargin;	// 72 = 0x48
	float mLeftMargin;	// 76 = 0x4c
	float mPageHeight;	// 80 = 0x50
	BOOL mIsFrame;	// 84 = 0x54
	BOOL mIsFrameStart;	// 85 = 0x55
	BOOL mIsFrameEnd;	// 86 = 0x56
	BOOL mIsHeaderOrFooter;	// 87 = 0x57
	float mTotalPageHeight;	// 88 = 0x58
}
@property(retain) CMOutlineState *currentListState;	// G=0xa0f05; S=0xa1241; converted property
@property(assign) unsigned currentPage;	// G=0x9f019; S=0x9f029; converted property
@property(assign) unsigned runIndex;	// G=0x1c30e9; S=0x91835; converted property
@property(assign) unsigned blockIndex;	// G=0x143a75; S=0x9239d; converted property
@property(assign) float pageHeight;	// G=0x2f0c75; S=0x9fc59; converted property
@property(assign) float totalPageHeight;	// G=0x144b91; S=0x144ba1; converted property
@property(assign) float topMargin;	// G=0x1ff301; S=0x9fba9; converted property
@property(assign) float leftMargin;	// G=0x20f5d9; S=0x9fbb9; converted property
@property(retain) id lastHeader;	// G=0xa0075; S=0x142825; converted property
@property(retain) id lastFooter;	// G=0x9f579; S=0x143611; converted property
@property(assign) BOOL isFrame;	// G=0x929b1; S=0x92981; converted property
@property(assign) BOOL isFrameStart;	// G=0x143a85; S=0x92991; converted property
@property(assign) BOOL isFrameEnd;	// G=0x143cfd; S=0x929a1; converted property
@property(assign) BOOL isHeaderOrFooter;	// G=0x144ab1; S=0x136f15; converted property
@property(readonly, retain) CMOutlineState *outlineState;	// G=0x19ff4d; converted property
- (id)init;	// 0x135395
- (void)dealloc;	// 0xa209d
// converted property getter: - (id)currentListState;	// 0xa0f05
// converted property getter: - (id)outlineState;	// 0x19ff4d
// converted property setter: - (void)setCurrentListState:(id)state;	// 0xa1241
- (BOOL)isCurrentListStateOverridden;	// 0xa0f65
- (BOOL)isCurrentListId:(int)anId;	// 0xa0f15
- (void)clearCurrentListState;	// 0xa127d
- (id)listStateForListId:(int)listId;	// 0xa0f8d
- (void)setListState:(id)state forListId:(int)listId;	// 0xa1031
// converted property setter: - (void)setCurrentPage:(unsigned)page;	// 0x9f029
// converted property getter: - (unsigned)currentPage;	// 0x9f019
- (float)pageOffset;	// 0x144b39
// converted property setter: - (void)setRunIndex:(unsigned)index;	// 0x91835
// converted property getter: - (unsigned)runIndex;	// 0x1c30e9
// converted property setter: - (void)setBlockIndex:(unsigned)index;	// 0x9239d
// converted property getter: - (unsigned)blockIndex;	// 0x143a75
// converted property setter: - (void)setPageHeight:(float)height;	// 0x9fc59
// converted property getter: - (float)pageHeight;	// 0x2f0c75
// converted property setter: - (void)setTotalPageHeight:(float)height;	// 0x144ba1
// converted property getter: - (float)totalPageHeight;	// 0x144b91
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x9fba9
// converted property getter: - (float)topMargin;	// 0x1ff301
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x9fbb9
// converted property getter: - (float)leftMargin;	// 0x20f5d9
// converted property setter: - (void)setLastHeader:(id)header;	// 0x142825
// converted property getter: - (id)lastHeader;	// 0xa0075
// converted property setter: - (void)setLastFooter:(id)footer;	// 0x143611
// converted property getter: - (id)lastFooter;	// 0x9f579
// converted property setter: - (void)setIsFrame:(BOOL)frame;	// 0x92981
// converted property getter: - (BOOL)isFrame;	// 0x929b1
// converted property setter: - (void)setIsFrameStart:(BOOL)start;	// 0x92991
// converted property getter: - (BOOL)isFrameStart;	// 0x143a85
// converted property setter: - (void)setIsFrameEnd:(BOOL)end;	// 0x929a1
// converted property getter: - (BOOL)isFrameEnd;	// 0x143cfd
// converted property setter: - (void)setIsHeaderOrFooter:(BOOL)footer;	// 0x136f15
// converted property getter: - (BOOL)isHeaderOrFooter;	// 0x144ab1
@end