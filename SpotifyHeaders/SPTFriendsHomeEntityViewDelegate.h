//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, SPTFriendsHomeEntityViewCellPressedAnimator, SPTFriendsHomeEntityViewModel, SPTFriendsHomeLogger;

@interface SPTFriendsHomeEntityViewDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    SPTFriendsHomeEntityViewModel *_viewModel;
    SPTFriendsHomeEntityViewCellPressedAnimator *_pressedAnimator;
}

@property(retain, nonatomic) SPTFriendsHomeEntityViewCellPressedAnimator *pressedAnimator; // @synthesize pressedAnimator=_pressedAnimator;
@property(readonly, nonatomic) SPTFriendsHomeEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)logImpressionOnCell:(id)arg1 indexPath:(id)arg2 item:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) SPTFriendsHomeLogger *logger;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
