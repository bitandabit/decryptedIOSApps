//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCStickerPickerCategoryCell, SCStickerPickerStickerCell, UICollectionView, UICollectionViewCell, UIGestureRecognizer, UIImage, UILongPressGestureRecognizer, UIScrollView, UIView;
@protocol SCStickerProtocol;

@protocol SCStickerPickerCategoryDelegate <NSObject>
- (void)stickerSearchQuerySuggestionTapped:(NSString *)arg1;
- (void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(NSString *)arg2;
- (_Bool)friendmojiHintRequestedWithTargetView:(UIView *)arg1 delegate:(id)arg2;
- (_Bool)avatarPickerRequestedWithBitmojiUsers:(NSArray *)arg1 targetView:(UIView *)arg2 delegate:(id)arg3;
- (void)stickerPickerCategoryFriendmojiAvatarIdChanged:(NSString *)arg1;
- (void)updateCustomStickerDataToBeDeleted:(id <SCStickerProtocol>)arg1;
- (void)moveCustomStickerCell:(UILongPressGestureRecognizer *)arg1;
- (void)endCustomStickerMoving:(UIGestureRecognizer *)arg1 recentSectionView:(UICollectionView *)arg2 stickerCell:(UICollectionViewCell *)arg3 completionHanlder:(void (^)(_Bool, _Bool))arg4;
- (void)beginCustomStickerMoving:(UILongPressGestureRecognizer *)arg1 forCell:(SCStickerPickerStickerCell *)arg2;
- (void)stickerPickerCategoryCellDidTapEmptyScreen;
- (void)stickerPickerCategoryCellScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)stickerPickerCategoryCellScrollViewDidScroll:(UIScrollView *)arg1;
- (void)stickerPickerCategoryCellScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)unlockScroll;
- (void)lockScroll;
- (void)categoryCell:(SCStickerPickerCategoryCell *)arg1 stickerSelected:(id <SCStickerProtocol>)arg2 center:(struct CGPoint)arg3 thumbnail:(UIImage *)arg4 index:(unsigned long long)arg5;
- (_Bool)stickerPickerCatogoryCellCanSelectSticker:(SCStickerPickerCategoryCell *)arg1;
@end
