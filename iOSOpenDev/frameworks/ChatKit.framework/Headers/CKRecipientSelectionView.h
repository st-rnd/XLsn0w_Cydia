/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>
#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/UITableViewDelegate.h>
#import <ChatKit/UITableViewDataSource.h>
#import <ChatKit/_MFComposeRecipientViewDelegate.h>
#import <ChatKit/MFContactsSearchConsumer.h>
#import <ChatKit/CKOverlayViewProtocol.h>

@class MFContactsSearchResultsModel, MFContactsSearchManager, NSString, NSArray, NSNumber, CKComposeRecipientView, UIScrollView, UIPopoverController, UITableView, MFSearchShadowView;

@interface CKRecipientSelectionView : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, CKOverlayViewProtocol, MFContactsSearchConsumer, _MFComposeRecipientViewDelegate> {
	CKComposeRecipientView *_toField;	// 48 = 0x30
	UIScrollView *_toFieldScrollingView;	// 52 = 0x34
	UIPopoverController *_searchResultsPopoverController;	// 56 = 0x38
	UITableView *_searchResultsTable;	// 60 = 0x3c
	MFSearchShadowView *_shadowView;	// 64 = 0x40
	BOOL _showingSearchField;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	NSArray *_searchResults;	// 76 = 0x4c
	MFContactsSearchResultsModel *_searchResultsModel;	// 80 = 0x50
	MFContactsSearchManager *_searchManager;	// 84 = 0x54
	NSNumber *_currentSearchTaskID;	// 88 = 0x58
	NSArray *_abProperties;	// 92 = 0x5c
	NSString *_searchText;	// 96 = 0x60
}
@property(assign, nonatomic) id delegate;	// G=0x25ea5; S=0x25eb5; @synthesize=_delegate
@property(readonly, assign, nonatomic, getter=isShowingSearchField) BOOL showingSearchField;	// G=0x25e95; @synthesize=_showingSearchField
@property(copy, nonatomic) NSString *searchText;	// G=0x25e85; S=0x26191; @synthesize=_searchText
@property(readonly, retain) CKComposeRecipientView *toField;	// G=0x25e69; converted property
+ (float)separatorHeight;	// 0x25e79
- (id)initWithFrame:(CGRect)frame ABProperties:(id)properties;	// 0x25ec5
- (void)dealloc;	// 0x27f41
- (BOOL)hasText;	// 0x27f01
- (id)recipients;	// 0x27ee1
- (void)reset;	// 0x27e71
// converted property getter: - (id)toField;	// 0x25e69
- (void)setABProperties:(id)properties;	// 0x27bb5
- (void)reflow;	// 0x27b8d
- (void)stopCheckingRecipientAvailability;	// 0x27b65
- (void)updateRecipientLimit;	// 0x27b3d
- (void)showErrorAlertForTooManyRecipientsIfNecessary;	// 0x27b15
- (float)heightWithoutSeparator;	// 0x27ae5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x279a9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x27989
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x27851
- (void)composeRecipientView:(id)view textDidChange:(id)text;	// 0x277a5
- (void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;	// 0x27765
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;	// 0x275e5
- (void)composeRecipientViewReturnPressed:(id)pressed;	// 0x275c5
- (id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;	// 0x275a5
- (id)composeRecipientView:(id)view composeRecipientForRecord:(void *)record property:(int)property identifier:(int)identifier;	// 0x27585
- (void)composeRecipientView:(id)view didChangeSize:(CGSize)size;	// 0x273a1
- (void)composeRecipientViewRequestAddRecipient:(id)recipient;	// 0x2734d
- (void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;	// 0x27291
- (void)animationDidStop:(id)animation;	// 0x27201
- (void)_updateContentSize;	// 0x270c5
- (void)reallyResignFirstResponder;	// 0x26fb9
- (void)_hideSearchField:(BOOL)field;	// 0x26dfd
- (void)_showSearchField:(BOOL)field;	// 0x266bd
- (void)_searchWithText:(id)text;	// 0x263d9
- (void)_updateShowingSearch;	// 0x2636d
- (BOOL)isRecipientAvailable:(id)available;	// 0x262dd
- (void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;	// 0x26255
- (void)finishedSearchingForType:(int)type;	// 0x261f5
- (void)finishedTaskWithID:(id)anId;	// 0x25e81
- (void)beganNetworkActivity;	// 0x261d5
- (void)endedNetworkActivity;	// 0x261b5
// declared property getter: - (id)searchText;	// 0x25e85
// declared property setter: - (void)setSearchText:(id)text;	// 0x26191
// declared property getter: - (BOOL)isShowingSearchField;	// 0x25e95
// declared property getter: - (id)delegate;	// 0x25ea5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x25eb5
@end