//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SCStickerCategory, SCStickerPickerMenuView, SCStickerSuperCategory, UIView;

@protocol SCStickerPickerMenuDataSource <NSObject>
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1 atIndex:(NSIndexPath *)arg2;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1;
- (void)stickerPickerMenuStopPrefetching;
- (void)stickerPickerMenuStartPrefetching;
- (void)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 prefetchCategoryForIndexPath:(NSIndexPath *)arg2;
- (_Bool)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 shouldDisplayEmptyStateForIndexPath:(NSIndexPath *)arg2 sourceType:(unsigned long long)arg3;
- (SCStickerCategory *)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 stickerCategoryForIndexPath:(NSIndexPath *)arg2;
- (SCStickerSuperCategory *)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 stickerSuperCategoryForIndex:(long long)arg2;
- (long long)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 numberOfCategoriesInSuperCategory:(long long)arg2;
- (long long)numberOfSuperCategoriesInStickerPickerMenu:(SCStickerPickerMenuView *)arg1;

@optional
- (UIView *)stickerPickerMenu:(SCStickerPickerMenuView *)arg1 emptyStateViewForIndexPath:(NSIndexPath *)arg2 frame:(struct CGRect)arg3 sourceType:(unsigned long long)arg4;
@end

