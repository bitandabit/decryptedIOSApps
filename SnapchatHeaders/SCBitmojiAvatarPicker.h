//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewTooltipBalloon.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, SCBitmojiDratiniManager, UICollectionView;
@protocol SCBitmojiAvatarPickerDelegate;

@interface SCBitmojiAvatarPicker : SCPreviewTooltipBalloon <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    NSArray *_bitmojiUsers;
    id <SCBitmojiAvatarPickerDelegate> _delegate;
    SCBitmojiDratiniManager *_dratiniManager;
}

@property(retain, nonatomic) SCBitmojiDratiniManager *dratiniManager; // @synthesize dratiniManager=_dratiniManager;
@property(nonatomic) __weak id <SCBitmojiAvatarPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setBitmojiUsers:(id)arg1;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

