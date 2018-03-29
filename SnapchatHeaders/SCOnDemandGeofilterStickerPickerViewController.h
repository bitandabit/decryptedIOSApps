//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatStickerManagerListener-Protocol.h"
#import "SCCustomStickerManagerListener-Protocol.h"
#import "SCStickerPickerMenuDelegate-Protocol.h"

@class NSIndexPath, NSNumber, NSString, SCCustomStickerManager, SCStickerDataProvider, SCStickerPickerMenuView, SCStickerRankingManager;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterStickerPickerViewController : UIViewController <SCStickerPickerMenuDelegate, SCCustomStickerManagerListener, SCChatStickerManagerListener>
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    SCStickerPickerMenuView *_stickerPickerMenu;
    SCStickerRankingManager *_stickerRankingManager;
    SCCustomStickerManager *_customStickerManager;
    SCStickerDataProvider *_stickerDataProvider;
    NSIndexPath *_categoryIndexPath;
    NSNumber *_stickerContentOffsetY;
    CDUnknownBlockType _stickerPickerCompletionBlock;
}

@property(copy) CDUnknownBlockType stickerPickerCompletionBlock; // @synthesize stickerPickerCompletionBlock=_stickerPickerCompletionBlock;
- (void).cxx_destruct;
- (void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2;
- (_Bool)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2;
- (_Bool)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3;
- (void)stickerSelected:(id)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3 stickerIndex:(unsigned long long)arg4 categoryIndex:(unsigned long long)arg5 isFromRecents:(_Bool)arg6 searchTag:(id)arg7;
- (void)closedStickerPickerMenuAtCategory:(id)arg1 sticker:(id)arg2 enterSearchCount:(long long)arg3 pretypeStickerTagSelectCount:(long long)arg4 prefixMatchStickerTagSelectCount:(long long)arg5 isSingleCategoryMode:(_Bool)arg6;
- (void)closeStickerPickerMenuShouldOpenSnapCut:(_Bool)arg1;
- (void)openedStickerPickerMenu;
- (void)customStickerAutoSectionDataDidChange;
- (void)customStickerDataDidChange;
- (void)closeStickerMenu;
- (id)_updateStickerHometab;
- (void)donePicking;
- (void)stickerPackagesDidChangeWithCategoryType:(long long)arg1;
- (void)_updateForStickerItem:(_Bool)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithGeofilterSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

