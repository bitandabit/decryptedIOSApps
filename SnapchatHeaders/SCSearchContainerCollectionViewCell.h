//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCSearchViewportConfigurable-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView;
@protocol SCSearchContainerCollectionViewCellDelegate;

@interface SCSearchContainerCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, SCSearchViewportConfigurable>
{
    struct CGPoint _lastOrigin;
    double _lastOriginCaptureTime;
    id <SCSearchContainerCollectionViewCellDelegate> _delegate;
    UICollectionView *_contentCollectionView;
    struct CGRect _viewportFrame;
    struct UIEdgeInsets _paddingInsets;
}

@property(nonatomic) struct UIEdgeInsets paddingInsets; // @synthesize paddingInsets=_paddingInsets;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(nonatomic) __weak id <SCSearchContainerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
- (void).cxx_destruct;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

